#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BABFBCHGIHG.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class LookIKCfg; }
namespace MoleMole::GalGame { class MainCityChatLookIKNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define LLAKJHIDMBJ_AIIJMDPPMCK_OFFSET UNITYSDK_OFFSET(0x151A61D0)
#define LLAKJHIDMBJ_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x151A6570)
#define LLAKJHIDMBJ_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x151A5DB0)
#define LLAKJHIDMBJ_KDCGPCJCGJC_OFFSET UNITYSDK_OFFSET(0x151A5E80)
#define LLAKJHIDMBJ_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x151A6140)
#define LLAKJHIDMBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x151A5D30)

inline static constexpr unsigned int LLAKJHIDMBJ_TypeDefinitionIndex = 68778;

class LLAKJHIDMBJ : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatLookIKNode* _HPMJLHGNENP_k__BackingField; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + LLAKJHIDMBJ__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + LLAKJHIDMBJ_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	static ::System::Boolean KDCGPCJCGJC(::System::Int32 BBOLKIABJHA, ::BABFBCHGIHG IGNINAECFDG, ::System::Int32 MEFAKNPLCNH, ::System::Boolean FOPBILLGFLN)
	{
		return ((::System::Boolean(*)(::System::Int32, ::BABFBCHGIHG, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LLAKJHIDMBJ_KDCGPCJCGJC_OFFSET))(BBOLKIABJHA, IGNINAECFDG, MEFAKNPLCNH, FOPBILLGFLN);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + LLAKJHIDMBJ_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Boolean AIIJMDPPMCK(::MoleMole::GalGame::LookIKCfg* DFMKILICPFB, ::System::Boolean NPGAHJBJNMA)
	{
		return ((::System::Boolean(*)(::MoleMole::GalGame::LookIKCfg*, ::System::Boolean))((::PBYTE)hIl2Cpp + LLAKJHIDMBJ_AIIJMDPPMCK_OFFSET))(DFMKILICPFB, NPGAHJBJNMA);
	}

	::MoleMole::GalGame::MainCityChatLookIKNode* COPIDBEMEIE()
	{
		return ((::MoleMole::GalGame::MainCityChatLookIKNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLAKJHIDMBJ_COPIDBEMEIE_OFFSET))(this);
	}
};
