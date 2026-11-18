#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd::Animation { class NPCUnionAnimator_NpcTransformCache; }

#define NLDDMLLPKCG_DGJDHEAOODP_IKMMFJKNMED_OFFSET UNITYSDK_OFFSET(0xE0A8150)
#define NLDDMLLPKCG_DGJDHEAOODP__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A8140)

inline static constexpr unsigned int NLDDMLLPKCG_DGJDHEAOODP_TypeDefinitionIndex = 81384;

class NLDDMLLPKCG_DGJDHEAOODP : public ::System::Object
{
public:
	::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* ENEJEBGHNOE; // 0x10
	::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* KGHECJGMEDI; // 0x18
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_DGJDHEAOODP__CTOR_OFFSET))(this);
	}

	::System::Void IKMMFJKNMED(::UnityEngine::Vector3& DFCAPDBFMIA, ::UnityEngine::Vector3& IABMIDALMCB, ::UnityEngine::Vector3& KBLDCLGLFLG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_DGJDHEAOODP_IKMMFJKNMED_OFFSET))(this, DFCAPDBFMIA, IABMIDALMCB, KBLDCLGLFLG);
	}
};
