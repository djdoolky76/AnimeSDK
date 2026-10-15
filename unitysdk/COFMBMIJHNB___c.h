#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIGPNAOGHEP.h"
#include "unitysdk/System/Object.h"
class COFMBMIJHNB;
namespace System { class Object; }

#define COFMBMIJHNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E132360)
#define COFMBMIJHNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1323A0)
#define COFMBMIJHNB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1323B0)
#define COFMBMIJHNB___C___CCTOR_B__33_1_OFFSET UNITYSDK_OFFSET(0x1E1323E0)
#define COFMBMIJHNB___C___CCTOR_B__33_2_OFFSET UNITYSDK_OFFSET(0x1E1323F0)

inline static constexpr unsigned int COFMBMIJHNB___c_TypeDefinitionIndex = 33371;

	class COFMBMIJHNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x211A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFMBMIJHNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMBMIJHNB___C_CTOR_OFFSET))(this);
		}

		::COFMBMIJHNB* __cctor_b__33_0()
		{
			return ((::COFMBMIJHNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMBMIJHNB___C___CCTOR_B__33_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__33_1(::MIGPNAOGHEP a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MIGPNAOGHEP))((::PBYTE)hIl2Cpp + COFMBMIJHNB___C___CCTOR_B__33_1_OFFSET))(this, a1);
		}

		::MIGPNAOGHEP __cctor_b__33_2(::System::Int32 a1)
		{
			return ((::MIGPNAOGHEP(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFMBMIJHNB___C___CCTOR_B__33_2_OFFSET))(this, a1);
		}

	};
