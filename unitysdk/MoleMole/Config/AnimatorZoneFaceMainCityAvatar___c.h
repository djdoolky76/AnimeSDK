#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFC76C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC7700)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__ONZONEENTER_B__1_0_OFFSET UNITYSDK_OFFSET(0xFFC7710)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFaceMainCityAvatar___c_TypeDefinitionIndex = 42787;

	class AnimatorZoneFaceMainCityAvatar___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFaceMainCityAvatar___c_TypeDefinitionIndex)->GetStaticField(0x38740);
		}
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFaceMainCityAvatar___c_TypeDefinitionIndex)->GetStaticField(0x38748);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnZoneEnter_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___C__ONZONEENTER_B__1_0_OFFSET))(this);
		}
	};
}
