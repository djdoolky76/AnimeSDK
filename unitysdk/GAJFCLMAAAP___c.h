#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAJFCLMAAAP;
namespace System { class Object; }

#define GAJFCLMAAAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC3F100)
#define GAJFCLMAAAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC3F130)
#define GAJFCLMAAAP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC3F140)

inline static constexpr unsigned int GAJFCLMAAAP___c_TypeDefinitionIndex = 26456;

	class GAJFCLMAAAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAJFCLMAAAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJFCLMAAAP___C_CTOR_OFFSET))(this);
		}

		::GAJFCLMAAAP* __cctor_b__28_0()
		{
			return ((::GAJFCLMAAAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJFCLMAAAP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
