#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GOIKJCHFIIO;
class PFKBCOJNNKF;
namespace MoleMole { class TextureSheetData; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MJHCNLHNHPN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16C928A0)
#define MJHCNLHNHPN_BCMBLHMKGMA_OFFSET UNITYSDK_OFFSET(0x16C92B80)
#define MJHCNLHNHPN_IPEMALHHKKI_OFFSET UNITYSDK_OFFSET(0x16C92550)
#define MJHCNLHNHPN_JOFGGOFFMIP_OFFSET UNITYSDK_OFFSET(0x16C926F0)
#define MJHCNLHNHPN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16C92A10)
#define MJHCNLHNHPN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C92540)

inline static constexpr unsigned int MJHCNLHNHPN_TypeDefinitionIndex = 90855;

class MJHCNLHNHPN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::PFKBCOJNNKF*>* PDMGDGBINEP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHCNLHNHPN__CTOR_OFFSET))(this);
	}

	::System::Void IPEMALHHKKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHCNLHNHPN_IPEMALHHKKI_OFFSET))(this);
	}

	::System::Void JOFGGOFFMIP(::MoleMole::TextureSheetData* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + MJHCNLHNHPN_JOFGGOFFMIP_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void BBOMJDBNHIC(::GOIKJCHFIIO* FAEBGCMGKDB, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* IPNBLOIANBJ, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BCDBMCLMCFP)
	{
		return ((::System::Void(*)(::PVOID, ::GOIKJCHFIIO*, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MJHCNLHNHPN_BBOMJDBNHIC_OFFSET))(this, FAEBGCMGKDB, IPNBLOIANBJ, BCDBMCLMCFP);
	}

	::System::Void OKJCHFGIKBH(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MJHCNLHNHPN_OKJCHFGIKBH_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void BCMBLHMKGMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHCNLHNHPN_BCMBLHMKGMA_OFFSET))(this);
	}
};
