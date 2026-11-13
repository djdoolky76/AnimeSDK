#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALIMNHEENPP;
namespace System { class Object; }

#define ALIMNHEENPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2001B6A0)
#define ALIMNHEENPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2001B6E0)
#define ALIMNHEENPP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x2001B6F0)

inline static constexpr unsigned int ALIMNHEENPP___c_TypeDefinitionIndex = 25882;

	class ALIMNHEENPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x376C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALIMNHEENPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP___C_CTOR_OFFSET))(this);
		}

		::ALIMNHEENPP* __cctor_b__38_0()
		{
			return ((::ALIMNHEENPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
