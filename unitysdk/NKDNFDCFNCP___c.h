#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKDNFDCFNCP;
namespace System { class Object; }

#define NKDNFDCFNCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA195A0)
#define NKDNFDCFNCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA195D0)
#define NKDNFDCFNCP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA195E0)

inline static constexpr unsigned int NKDNFDCFNCP___c_TypeDefinitionIndex = 31001;

	class NKDNFDCFNCP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKDNFDCFNCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDNFDCFNCP___C_CTOR_OFFSET))(this);
		}

		::NKDNFDCFNCP* __cctor_b__28_0()
		{
			return ((::NKDNFDCFNCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDNFDCFNCP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
