#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIOKKOMDAEI;
namespace System { class Object; }

#define PIOKKOMDAEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2055A520)
#define PIOKKOMDAEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2055A550)
#define PIOKKOMDAEI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x2055A560)

inline static constexpr unsigned int PIOKKOMDAEI___c_TypeDefinitionIndex = 35521;

	class PIOKKOMDAEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIOKKOMDAEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOKKOMDAEI___C_CTOR_OFFSET))(this);
		}

		::PIOKKOMDAEI* __cctor_b__18_0()
		{
			return ((::PIOKKOMDAEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOKKOMDAEI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
