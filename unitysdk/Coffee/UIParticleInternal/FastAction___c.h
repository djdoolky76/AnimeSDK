#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define COFFEE_UIPARTICLEINTERNAL_FASTACTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x166B5950)
#define COFFEE_UIPARTICLEINTERNAL_FASTACTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0x166B5980)
#define COFFEE_UIPARTICLEINTERNAL_FASTACTION___C__INVOKE_B__0_0_OFFSET UNITYSDK_OFFSET(0x166B5990)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int FastAction___c_TypeDefinitionIndex = 45129;

	class FastAction___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Action*>** StaticGet___9__0_0()
		{
			return (::System::Action_1<::System::Action*>**)UnitySDK::FromName("Coffee.UIParticleInternal", "<>c")->GetStaticField(0x1090);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Coffee.UIParticleInternal", "<>c")->GetStaticField(0x1098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FASTACTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FASTACTION___C_CTOR_OFFSET))(this);
		}

		::System::Void _Invoke_b__0_0(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FASTACTION___C__INVOKE_B__0_0_OFFSET))(this, a1);
		}

	};
}
