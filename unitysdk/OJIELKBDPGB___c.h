#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJIELKBDPGB;
namespace System { class Object; }

#define OJIELKBDPGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE59960)
#define OJIELKBDPGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE599A0)
#define OJIELKBDPGB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE599B0)

inline static constexpr unsigned int OJIELKBDPGB___c_TypeDefinitionIndex = 27281;

	class OJIELKBDPGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJIELKBDPGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB___C_CTOR_OFFSET))(this);
		}

		::OJIELKBDPGB* __cctor_b__28_0()
		{
			return ((::OJIELKBDPGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
