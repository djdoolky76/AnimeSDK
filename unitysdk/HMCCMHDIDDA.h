#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatQuestRecommendNode; }

#define HMCCMHDIDDA_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x14958880)
#define HMCCMHDIDDA_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x14958770)
#define HMCCMHDIDDA_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x149587F0)
#define HMCCMHDIDDA_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x149587E0)
#define HMCCMHDIDDA__CTOR_OFFSET UNITYSDK_OFFSET(0x149586F0)

inline static constexpr unsigned int HMCCMHDIDDA_TypeDefinitionIndex = 81358;

class HMCCMHDIDDA : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatQuestRecommendNode* _DGGBKMAKAJI_k__BackingField; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + HMCCMHDIDDA__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + HMCCMHDIDDA_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void PANAINEBINN(::MoleMole::GalGame::MainCityChatQuestRecommendNode* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestRecommendNode*))((::PBYTE)hIl2Cpp + HMCCMHDIDDA_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + HMCCMHDIDDA_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::GalGame::MainCityChatQuestRecommendNode* GACPDCEMJOA()
	{
		return ((::MoleMole::GalGame::MainCityChatQuestRecommendNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCCMHDIDDA_GACPDCEMJOA_OFFSET))(this);
	}
};
