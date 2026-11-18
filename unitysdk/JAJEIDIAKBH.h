#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatChangeNpcNameNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define JAJEIDIAKBH_EHCDOFJNGAE_OFFSET UNITYSDK_OFFSET(0x153C91B0)
#define JAJEIDIAKBH_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x153C90D0)
#define JAJEIDIAKBH_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x153C9750)
#define JAJEIDIAKBH__CTOR_OFFSET UNITYSDK_OFFSET(0x153C9050)

inline static constexpr unsigned int JAJEIDIAKBH_TypeDefinitionIndex = 77528;

class JAJEIDIAKBH : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatChangeNpcNameNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + JAJEIDIAKBH__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + JAJEIDIAKBH_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + JAJEIDIAKBH_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void EHCDOFJNGAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJEIDIAKBH_EHCDOFJNGAE_OFFSET))(this);
	}
};
