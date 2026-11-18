#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class EBEAAFHPBJG;
class LLAKLLFJAAD;

#define BNDBNODKGAP_MODDALABIFN_LEKENPBGGOM_OFFSET UNITYSDK_OFFSET(0x1692DBA0)
#define BNDBNODKGAP_MODDALABIFN_NKAHFGPOCKF_OFFSET UNITYSDK_OFFSET(0x1692DDE0)
#define BNDBNODKGAP_MODDALABIFN_OLFCEJPLGCL_OFFSET UNITYSDK_OFFSET(0x1692DF10)
#define BNDBNODKGAP_MODDALABIFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1692DB90)

inline static constexpr unsigned int BNDBNODKGAP_MODDALABIFN_TypeDefinitionIndex = 78413;

class BNDBNODKGAP_MODDALABIFN : public ::System::Object
{
public:
	::LLAKLLFJAAD* FCHGPPLBGDD; // 0x10
	::EBEAAFHPBJG* DKELJKPOHOC; // 0x18
	::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_MODDALABIFN__CTOR_OFFSET))(this);
	}

	::System::Void LEKENPBGGOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_MODDALABIFN_LEKENPBGGOM_OFFSET))(this);
	}

	::System::Void NKAHFGPOCKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_MODDALABIFN_NKAHFGPOCKF_OFFSET))(this);
	}

	::System::Void OLFCEJPLGCL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_MODDALABIFN_OLFCEJPLGCL_OFFSET))(this);
	}
};
