#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectSubpartClampMoving_ABJPOOLEPBP.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_AJEEBNCNHMN_OFFSET UNITYSDK_OFFSET(0x162E0D10)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_DLIDBNKMKCO_OFFSET UNITYSDK_OFFSET(0x162E0160)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x162E0D70)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x162E02F0)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_LOFMNKAMILC_OFFSET UNITYSDK_OFFSET(0x162DFE90)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x162E00A0)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x162DFDD0)
#define MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING__CTOR_OFFSET UNITYSDK_OFFSET(0x162E0C90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectSubpartClampMoving_TypeDefinitionIndex = 92871;

	class MonoEffectSubpartClampMoving : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoEffectSubpartClampMoving_ABJPOOLEPBP clampPositionMode; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* FIAOONHHHCG; // 0x20
		::UnityEngine::Transform* clampChildMoveTransform; // 0x28
		::System::Single clampRatio; // 0x30
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* distanceClampRatioCurve; // 0x38
		::System::Single miniMoveDistance; // 0x40
		::System::Boolean NMHCBGFBEKI; // 0x44
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector3 NPCNEFKDHBL; // 0x48
		::UnityEngine::Vector3 JBJKAINFEIG; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_LATEUPDATE_OFFSET))(this);
		}

		::System::Void LOFMNKAMILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_LOFMNKAMILC_OFFSET))(this);
		}

		::System::Void AJEEBNCNHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_AJEEBNCNHMN_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Void DLIDBNKMKCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSUBPARTCLAMPMOVING_DLIDBNKMKCO_OFFSET))(this);
		}
	};
}
