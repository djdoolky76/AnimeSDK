#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayAnimationNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CGKJHGCKLDL_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x14F27D80)
#define CGKJHGCKLDL_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x14F27B00)
#define CGKJHGCKLDL_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x14F27CF0)
#define CGKJHGCKLDL_MPPBKPNJPHO_OFFSET UNITYSDK_OFFSET(0x14F27DA0)
#define CGKJHGCKLDL_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x14F27CB0)
#define CGKJHGCKLDL_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x14F27D90)
#define CGKJHGCKLDL__CTOR_OFFSET UNITYSDK_OFFSET(0x14F27A80)

inline static constexpr unsigned int CGKJHGCKLDL_TypeDefinitionIndex = 84980;

class CGKJHGCKLDL : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatPlayAnimationNode* _DGGBKMAKAJI_k__BackingField; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CGKJHGCKLDL__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CGKJHGCKLDL_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKJHGCKLDL_OMMICIJCCKB_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CGKJHGCKLDL_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::GalGame::MainCityChatPlayAnimationNode* GACPDCEMJOA()
	{
		return ((::MoleMole::GalGame::MainCityChatPlayAnimationNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKJHGCKLDL_GACPDCEMJOA_OFFSET))(this);
	}

	::System::Void PANAINEBINN(::MoleMole::GalGame::MainCityChatPlayAnimationNode* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayAnimationNode*))((::PBYTE)hIl2Cpp + CGKJHGCKLDL_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MPPBKPNJPHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKJHGCKLDL_MPPBKPNJPHO_OFFSET))(this);
	}
};
