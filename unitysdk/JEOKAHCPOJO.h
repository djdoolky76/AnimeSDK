#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityAttractorEnableNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define JEOKAHCPOJO_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1A46E890)
#define JEOKAHCPOJO_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1A46EA80)
#define JEOKAHCPOJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A46E810)

inline static constexpr unsigned int JEOKAHCPOJO_TypeDefinitionIndex = 45028;

class JEOKAHCPOJO : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityAttractorEnableNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + JEOKAHCPOJO__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + JEOKAHCPOJO_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + JEOKAHCPOJO_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
