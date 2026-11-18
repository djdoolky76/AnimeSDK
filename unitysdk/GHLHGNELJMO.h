#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayMontageNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define GHLHGNELJMO_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x13D529E0)
#define GHLHGNELJMO_HEKDDAJLPPM_OFFSET UNITYSDK_OFFSET(0x13D53070)
#define GHLHGNELJMO_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x13D53210)
#define GHLHGNELJMO__CTOR_OFFSET UNITYSDK_OFFSET(0x13D52960)

inline static constexpr unsigned int GHLHGNELJMO_TypeDefinitionIndex = 70163;

class GHLHGNELJMO : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatPlayMontageNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + GHLHGNELJMO__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + GHLHGNELJMO_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + GHLHGNELJMO_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean HEKDDAJLPPM(::System::UInt32& NJNCGJLHLKC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + GHLHGNELJMO_HEKDDAJLPPM_OFFSET))(this, NJNCGJLHLKC);
	}
};
