#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityActiveDynamicObjectNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define OFCBIJNBOAA_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0xFB83A10)
#define OFCBIJNBOAA_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0xFB83A90)
#define OFCBIJNBOAA__CTOR_OFFSET UNITYSDK_OFFSET(0xFB83990)

inline static constexpr unsigned int OFCBIJNBOAA_TypeDefinitionIndex = 48113;

class OFCBIJNBOAA : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityActiveDynamicObjectNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + OFCBIJNBOAA__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + OFCBIJNBOAA_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + OFCBIJNBOAA_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
