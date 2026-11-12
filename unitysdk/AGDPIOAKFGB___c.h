#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGDPIOAKFGB;
namespace System { class Object; }

#define AGDPIOAKFGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3E7EC0)
#define AGDPIOAKFGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E7F00)
#define AGDPIOAKFGB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F3E7F10)

inline static constexpr unsigned int AGDPIOAKFGB___c_TypeDefinitionIndex = 31364;

	class AGDPIOAKFGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C4F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGDPIOAKFGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDPIOAKFGB___C_CTOR_OFFSET))(this);
		}

		::AGDPIOAKFGB* __cctor_b__28_0()
		{
			return ((::AGDPIOAKFGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDPIOAKFGB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
