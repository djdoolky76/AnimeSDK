#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___C__APPLYTRIGGERHITANIMATORPARAM_B__67_0_OFFSET UNITYSDK_OFFSET(0xE544B70)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE544B20)
#define MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE544B60)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovYokaiHenshinSubSystem___c_TypeDefinitionIndex = 73822;

	class ZenkovYokaiHenshinSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ZenkovYokaiHenshinSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x454A0);
		}
		static ::System::Action_1<::MoleMole::Battle::Entity*>** StaticGet___9__67_0()
		{
			return (::System::Action_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovYokaiHenshinSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x454A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyTriggerHitAnimatorParam_b__67_0(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINSUBSYSTEM___C__APPLYTRIGGERHITANIMATORPARAM_B__67_0_OFFSET))(this, entity);
		}
	};
}
