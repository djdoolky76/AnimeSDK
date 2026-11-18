#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_MONOMODELANIMATORSWITCHER_CHECKDELAYDISABLE_OFFSET UNITYSDK_OFFSET(0x135BDF40)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_GETMODELSETINDEX_OFFSET UNITYSDK_OFFSET(0x135BDE20)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_GET_NEEDUPDATEDELAYANIMATORDISABLE_OFFSET UNITYSDK_OFFSET(0x135BDE00)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_OKHOGIMAGAA_OFFSET UNITYSDK_OFFSET(0x135BE150)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_SETMODELSETACTIVE_OFFSET UNITYSDK_OFFSET(0x135BE250)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_SET_NEEDUPDATEDELAYANIMATORDISABLE_OFFSET UNITYSDK_OFFSET(0x135BDE10)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER_SWITCHMODELSET_OFFSET UNITYSDK_OFFSET(0x135BE1B0)
#define MOLEMOLE_MONOMODELANIMATORSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x135BE490)

namespace MoleMole
{
	inline static constexpr unsigned int MonoModelAnimatorSwitcher_TypeDefinitionIndex = 72919;

	class MonoModelAnimatorSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Object*>* ModelSets; // 0x18
		::System::Int32 currentModelSetIndex; // 0x20
		::System::Boolean _ILEBCGFAEPO_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_needUpdateDelayAnimatorDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_GET_NEEDUPDATEDELAYANIMATORDISABLE_OFFSET))(this);
		}

		::System::Void set_needUpdateDelayAnimatorDisable(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_SET_NEEDUPDATEDELAYANIMATORDISABLE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Int32 GetModelSetIndex(::System::String* KPHPOGJEOKN)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_GETMODELSETINDEX_OFFSET))(this, KPHPOGJEOKN);
		}

		::System::Void CheckDelayDisable(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_CHECKDELAYDISABLE_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void SwitchModelSet(::System::Int32 DEFGFILAFJL, ::System::Single MMGEONFGBOK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_SWITCHMODELSET_OFFSET))(this, DEFGFILAFJL, MMGEONFGBOK);
		}

		::System::Void SetModelSetActive(::System::Int32 DEFGFILAFJL, ::System::Boolean FIPHFGHNNBE, ::System::Single MMGEONFGBOK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_SETMODELSETACTIVE_OFFSET))(this, DEFGFILAFJL, FIPHFGHNNBE, MMGEONFGBOK);
		}

		static ::System::Void OKHOGIMAGAA(::UnityEngine::Animator* ICAAMDMMDDJ, ::System::Boolean PABDNIBPDKG)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELANIMATORSWITCHER_OKHOGIMAGAA_OFFSET))(ICAAMDMMDDJ, PABDNIBPDKG);
		}
	};
}
