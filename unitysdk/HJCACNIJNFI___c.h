#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAJCPEFEOPN;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define HJCACNIJNFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x181F4020)
#define HJCACNIJNFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x181F4060)
#define HJCACNIJNFI___C__TRYEMITPLUSPEDESTRIAN_B__6_0_OFFSET UNITYSDK_OFFSET(0x181F4070)

inline static constexpr unsigned int HJCACNIJNFI___c_TypeDefinitionIndex = 71272;

	class HJCACNIJNFI___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::LAJCPEFEOPN*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::LAJCPEFEOPN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFF80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFF88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJCACNIJNFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCACNIJNFI___C_CTOR_OFFSET))(this);
		}

		::System::Void _TryEmitPlusPedestrian_b__6_0(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + HJCACNIJNFI___C__TRYEMITPLUSPEDESTRIAN_B__6_0_OFFSET))(this, a1);
		}

	};
