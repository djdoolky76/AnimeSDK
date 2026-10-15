#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHEIMIKGNPA;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define OHEIMIKGNPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE635A0)
#define OHEIMIKGNPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBE635D0)
#define OHEIMIKGNPA___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBE635E0)

inline static constexpr unsigned int OHEIMIKGNPA___c_TypeDefinitionIndex = 52832;

	class OHEIMIKGNPA___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::OHEIMIKGNPA*>** StaticGet___9__0_0()
		{
			return (::System::Action_1<::OHEIMIKGNPA*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x658B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x658B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHEIMIKGNPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEIMIKGNPA___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__0_0(::OHEIMIKGNPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHEIMIKGNPA*))((::PBYTE)hIl2Cpp + OHEIMIKGNPA___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

	};
