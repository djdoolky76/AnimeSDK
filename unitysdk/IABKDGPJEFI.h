#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANACIPLIMDE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define IABKDGPJEFI_AGPHBLGBODG_OFFSET UNITYSDK_OFFSET(0x15DF02C0)
#define IABKDGPJEFI_BIMHJBMOOAA_OFFSET UNITYSDK_OFFSET(0x15DEFA60)
#define IABKDGPJEFI_CTOR_OFFSET UNITYSDK_OFFSET(0x15DF04E0)
#define IABKDGPJEFI_FNOLADGMENA_OFFSET UNITYSDK_OFFSET(0x15DF00F0)
#define IABKDGPJEFI_GBPGLOGLDKB_OFFSET UNITYSDK_OFFSET(0x15DEFEE0)
#define IABKDGPJEFI_HCFPNOLMHKK_OFFSET UNITYSDK_OFFSET(0x15DEFC80)
#define IABKDGPJEFI_JHOFAJPNGJK_OFFSET UNITYSDK_OFFSET(0x15DEFE40)
#define IABKDGPJEFI_JMEGMOMICHD_OFFSET UNITYSDK_OFFSET(0x15DF0490)
#define IABKDGPJEFI_JNMEGHCLKGL_OFFSET UNITYSDK_OFFSET(0x15DEF800)
#define IABKDGPJEFI_LKCLMJKHDAO_OFFSET UNITYSDK_OFFSET(0x15DF0170)
#define IABKDGPJEFI_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x15DEFFC0)
#define IABKDGPJEFI_OCFKCJMKJII_OFFSET UNITYSDK_OFFSET(0x15DEF720)
#define IABKDGPJEFI_OKEHOHPFJGC_OFFSET UNITYSDK_OFFSET(0x15DEF6B0)
#define IABKDGPJEFI_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x15DEFD90)
#define IABKDGPJEFI_PMGAIODGIIA_OFFSET UNITYSDK_OFFSET(0x15DF0400)

inline static constexpr unsigned int IABKDGPJEFI_TypeDefinitionIndex = 80163;

	class IABKDGPJEFI : public ::System::Object
	{
	public:
		::ANACIPLIMDE FHOIDIDFFMP; // 0x10
		// static const ::System::Object PEIIJCAGDHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* OKEHOHPFJGC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OKEHOHPFJGC_OFFSET))(this, a1, a2);
		}

		::System::Boolean OCFKCJMKJII(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OCFKCJMKJII_OFFSET))(this, a1);
		}

		::System::IDisposable* JNMEGHCLKGL(::RPG::GameCore::GameEntity* a1, ::System::Action_2<::RPG::GameCore::GameEntity*, ::System::Boolean>* a2)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action_2<::RPG::GameCore::GameEntity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + IABKDGPJEFI_JNMEGHCLKGL_OFFSET))(this, a1, a2);
		}

		::System::IDisposable* BIMHJBMOOAA(::RPG::GameCore::GameEntity* a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2, ::System::Action_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + IABKDGPJEFI_BIMHJBMOOAA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HCFPNOLMHKK(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + IABKDGPJEFI_HCFPNOLMHKK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAFCMAMJENB(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IABKDGPJEFI_PAFCMAMJENB_OFFSET))(this, a1, a2);
		}

		::System::Void JHOFAJPNGJK(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + IABKDGPJEFI_JHOFAJPNGJK_OFFSET))(this, a1, a2);
		}

		::System::Void GBPGLOGLDKB(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + IABKDGPJEFI_GBPGLOGLDKB_OFFSET))(this, a1, a2);
		}

		::System::Void NHPDCPKMNAM(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + IABKDGPJEFI_NHPDCPKMNAM_OFFSET))(this, a1, a2);
		}

		::System::Void FNOLADGMENA(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + IABKDGPJEFI_FNOLADGMENA_OFFSET))(this, a1, a2);
		}

		::System::Void LKCLMJKHDAO(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + IABKDGPJEFI_LKCLMJKHDAO_OFFSET))(this, a1, a2);
		}

		::System::Void AGPHBLGBODG(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + IABKDGPJEFI_AGPHBLGBODG_OFFSET))(this, a1, a2);
		}

		::System::Void PMGAIODGIIA(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + IABKDGPJEFI_PMGAIODGIIA_OFFSET))(this, a1, a2);
		}

		::System::Void JMEGMOMICHD(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + IABKDGPJEFI_JMEGMOMICHD_OFFSET))(this, a1, a2);
		}

	};
