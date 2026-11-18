#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayTimelineNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define MGKNKCKLNBJ_FNLNACPIAFB_OFFSET UNITYSDK_OFFSET(0x12D84DD0)
#define MGKNKCKLNBJ_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x12D848F0)
#define MGKNKCKLNBJ_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x12D84D40)
#define MGKNKCKLNBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12D84870)

inline static constexpr unsigned int MGKNKCKLNBJ_TypeDefinitionIndex = 83578;

class MGKNKCKLNBJ : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatPlayTimelineNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + MGKNKCKLNBJ__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + MGKNKCKLNBJ_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + MGKNKCKLNBJ_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FNLNACPIAFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKNKCKLNBJ_FNLNACPIAFB_OFFSET))(this);
	}
};
