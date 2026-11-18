#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class GalBubbleStoryNode; }

#define CKPAOOFMPKC_JOEDHKLEEMF_LCHPPGPLMOF_OFFSET UNITYSDK_OFFSET(0x159E0050)
#define CKPAOOFMPKC_JOEDHKLEEMF__CTOR_OFFSET UNITYSDK_OFFSET(0x159E0040)

inline static constexpr unsigned int CKPAOOFMPKC_JOEDHKLEEMF_TypeDefinitionIndex = 90503;

class CKPAOOFMPKC_JOEDHKLEEMF : public ::System::Object
{
public:
	::MoleMole::GalGame::GalBubbleStoryNode* PFKPFJHFIGL; // 0x10
	::System::Int32 EJFGMAHJMHK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_JOEDHKLEEMF__CTOR_OFFSET))(this);
	}

	::System::Void LCHPPGPLMOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_JOEDHKLEEMF_LCHPPGPLMOF_OFFSET))(this);
	}
};
