#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"
#include "unitysdk/NDAKCMCCFLF.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Object.h"

class BNDBNODKGAP;
class KLFOBDFJFJE;
class LLAKLLFJAAD;
class PNJDGHBEMLK;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNDBNODKGAP_ILDNAEHKOEH_CFOBIIHEHIF_OFFSET UNITYSDK_OFFSET(0x115FF550)
#define BNDBNODKGAP_ILDNAEHKOEH_LPBEMPJCDIP_OFFSET UNITYSDK_OFFSET(0x115FF5D0)
#define BNDBNODKGAP_ILDNAEHKOEH__CTOR_OFFSET UNITYSDK_OFFSET(0x115FF540)

inline static constexpr unsigned int BNDBNODKGAP_ILDNAEHKOEH_TypeDefinitionIndex = 78412;

class BNDBNODKGAP_ILDNAEHKOEH : public ::System::Object
{
public:
	::LLAKLLFJAAD* FCHGPPLBGDD; // 0x10
	::System::Action* JFBJFLADNFG; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* BAAIJOKOAJA; // 0x20
	::PNJDGHBEMLK* DPBEHPMJGMC; // 0x28
	::MoleMole::UIHollowChessboard3DModelController* NGICCNMINJC; // 0x30
	::KLFOBDFJFJE* GBAAHPAKPKM; // 0x38
	::BNDBNODKGAP* KLHPEBKNIFB; // 0x40
	::NDAKCMCCFLF HGDIJMFJKJD; // 0x48
	::MoleMole::PlayerOnViewState JPJLCCJPFAI; // 0x4C
	::System::Single BKEEKMOPOHB; // 0x50
	::MoleMole::HollowChessboard::HollowCell NCDFJBICDPI; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_ILDNAEHKOEH__CTOR_OFFSET))(this);
	}

	::System::Void CFOBIIHEHIF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_ILDNAEHKOEH_CFOBIIHEHIF_OFFSET))(this);
	}

	::System::Void LPBEMPJCDIP(::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO, ::Share::GridDir DAAEHEHLLLD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Share::GridDir))((::PBYTE)hIl2Cpp + BNDBNODKGAP_ILDNAEHKOEH_LPBEMPJCDIP_OFFSET))(this, ABHBKFJKINO, DAAEHEHLLLD);
	}
};
