#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatActionPlayNode; }
namespace MoleMole::GalGame { class MainCityChatNPCEnterAction; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityMultiChatNPCEnterAction; }

#define ENBFHAPLIFL_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x15E34020)
#define ENBFHAPLIFL_LFALFJJNDHP_OFFSET UNITYSDK_OFFSET(0x15E342B0)
#define ENBFHAPLIFL_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x15E34410)
#define ENBFHAPLIFL_OAFIBFALBEA_OFFSET UNITYSDK_OFFSET(0x15E343A0)
#define ENBFHAPLIFL__CTOR_OFFSET UNITYSDK_OFFSET(0x15E33FA0)

inline static constexpr unsigned int ENBFHAPLIFL_TypeDefinitionIndex = 82376;

class ENBFHAPLIFL : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatActionPlayNode* DFMKILICPFB; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + ENBFHAPLIFL__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + ENBFHAPLIFL_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void OAFIBFALBEA(::MoleMole::GalGame::MainCityMultiChatNPCEnterAction* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*))((::PBYTE)hIl2Cpp + ENBFHAPLIFL_OAFIBFALBEA_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void LFALFJJNDHP(::MoleMole::GalGame::MainCityChatNPCEnterAction* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatNPCEnterAction*))((::PBYTE)hIl2Cpp + ENBFHAPLIFL_LFALFJJNDHP_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + ENBFHAPLIFL_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
