#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class ChatChangeEffectStateNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define HILNHFBANEF_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x17E4D350)
#define HILNHFBANEF_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x17E4D740)
#define HILNHFBANEF__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4D2D0)

inline static constexpr unsigned int HILNHFBANEF_TypeDefinitionIndex = 42926;

class HILNHFBANEF : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::ChatChangeEffectStateNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + HILNHFBANEF__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + HILNHFBANEF_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + HILNHFBANEF_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
