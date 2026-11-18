#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatShowConfirmPopupNode; }

#define IHDJDADMPGO_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0xEBD7110)
#define IHDJDADMPGO_HONDPMGLADB_OFFSET UNITYSDK_OFFSET(0xEBD7630)
#define IHDJDADMPGO_ICPMADMLEMI_OFFSET UNITYSDK_OFFSET(0xEBD74C0)
#define IHDJDADMPGO_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0xEBD7700)
#define IHDJDADMPGO_LJPBLJDADAA_OFFSET UNITYSDK_OFFSET(0xEBD70D0)
#define IHDJDADMPGO_PIONCLBHHFJ_OFFSET UNITYSDK_OFFSET(0xEBD7560)
#define IHDJDADMPGO__CTOR_OFFSET UNITYSDK_OFFSET(0xEBD7050)

inline static constexpr unsigned int IHDJDADMPGO_TypeDefinitionIndex = 92101;

class IHDJDADMPGO : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatShowConfirmPopupNode* CEJENBBHBBG; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + IHDJDADMPGO__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Boolean LJPBLJDADAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDJDADMPGO_LJPBLJDADAA_OFFSET))(this);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + IHDJDADMPGO_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Boolean ICPMADMLEMI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDJDADMPGO_ICPMADMLEMI_OFFSET))(this);
	}

	::System::Void PIONCLBHHFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDJDADMPGO_PIONCLBHHFJ_OFFSET))(this);
	}

	::System::Void HONDPMGLADB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDJDADMPGO_HONDPMGLADB_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + IHDJDADMPGO_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
