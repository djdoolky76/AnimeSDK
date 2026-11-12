#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define JDJBPIHCDOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9193E0)
#define JDJBPIHCDOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB919420)
#define JDJBPIHCDOB___C___CLOSESCREENTRANSFER_B__18_0_OFFSET UNITYSDK_OFFSET(0xB919430)

inline static constexpr unsigned int JDJBPIHCDOB___c_TypeDefinitionIndex = 53795;

	class JDJBPIHCDOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67050);
		}

		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDJBPIHCDOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDJBPIHCDOB___C_CTOR_OFFSET))(this);
		}

		::System::Void __CloseScreenTransfer_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDJBPIHCDOB___C___CLOSESCREENTRANSFER_B__18_0_OFFSET))(this);
		}

	};
