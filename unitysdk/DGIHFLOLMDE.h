#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SwitchCharacterAnchor; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define DGIHFLOLMDE_CGNHOBCDFCB_OFFSET UNITYSDK_OFFSET(0xE83FF10)
#define DGIHFLOLMDE_CTOR_OFFSET UNITYSDK_OFFSET(0xE8405D0)
#define DGIHFLOLMDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE83FD00)
#define DGIHFLOLMDE_FICPGIFCFBN_OFFSET UNITYSDK_OFFSET(0xE840490)
#define DGIHFLOLMDE_GET_ISINSWITCHANCHOR_OFFSET UNITYSDK_OFFSET(0xE8405B0)
#define DGIHFLOLMDE_GMBBOAHIBEP_OFFSET UNITYSDK_OFFSET(0xE83FFE0)
#define DGIHFLOLMDE_KPAPEBCEGPF_OFFSET UNITYSDK_OFFSET(0xE8402B0)
#define DGIHFLOLMDE_LGOGBLMECCL_OFFSET UNITYSDK_OFFSET(0xE840080)
#define DGIHFLOLMDE_OBKNFDMAIKP_OFFSET UNITYSDK_OFFSET(0xE83FD90)
#define DGIHFLOLMDE_PICINBMKPAF_OFFSET UNITYSDK_OFFSET(0xE83FEA0)
#define DGIHFLOLMDE_PJGBNODNFBD_OFFSET UNITYSDK_OFFSET(0xE83FDE0)
#define DGIHFLOLMDE_SET_ISINSWITCHANCHOR_OFFSET UNITYSDK_OFFSET(0xE8405C0)

inline static constexpr unsigned int DGIHFLOLMDE_TypeDefinitionIndex = 60779;

	class DGIHFLOLMDE : public ::System::Object
	{
	public:
		::RPG::GameCore::SwitchCharacterAnchor* FCLJLKHPALO; // 0x10
		::UnityEngine::Coroutine* EEBPKMCFHEJ; // 0x18
		::RPG::GameCore::TaskContext* PFFBIFCGPKB; // 0x20
		::System::Boolean _IsInSwitchAnchor_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIHFLOLMDE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIHFLOLMDE_DISPOSE_OFFSET))(this);
		}

		::System::Void PJGBNODNFBD(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCharacterAnchor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCharacterAnchor*))((::PBYTE)hIl2Cpp + DGIHFLOLMDE_PJGBNODNFBD_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* PICINBMKPAF()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIHFLOLMDE_PICINBMKPAF_OFFSET))(this);
		}

		::System::Void CGNHOBCDFCB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGIHFLOLMDE_CGNHOBCDFCB_OFFSET))(this, a1);
		}

		::System::Void OBKNFDMAIKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIHFLOLMDE_OBKNFDMAIKP_OFFSET))(this);
		}

		::System::Void GMBBOAHIBEP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGIHFLOLMDE_GMBBOAHIBEP_OFFSET))(this, a1);
		}

		::System::Void LGOGBLMECCL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DGIHFLOLMDE_LGOGBLMECCL_OFFSET))(this, a1, a2);
		}

		::System::Void KPAPEBCEGPF(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DGIHFLOLMDE_KPAPEBCEGPF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FICPGIFCFBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIHFLOLMDE_FICPGIFCFBN_OFFSET))(this);
		}

		::System::Boolean get_IsInSwitchAnchor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIHFLOLMDE_GET_ISINSWITCHANCHOR_OFFSET))(this);
		}

		::System::Void set_IsInSwitchAnchor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGIHFLOLMDE_SET_ISINSWITCHANCHOR_OFFSET))(this, a1);
		}

	};
