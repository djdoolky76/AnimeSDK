#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class AADEHKBDJDL;
class AIKGHHJKNCE;
namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define MLPPAKIBMDF_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x11A1ED50)
#define MLPPAKIBMDF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11A1E9E0)
#define MLPPAKIBMDF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11A1EBD0)
#define MLPPAKIBMDF_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x11A1ECB0)
#define MLPPAKIBMDF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11A1ECC0)
#define MLPPAKIBMDF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11A1EAB0)
#define MLPPAKIBMDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A1EA30)
#define MLPPAKIBMDF__CTOR_OFFSET UNITYSDK_OFFSET(0x11A1EB10)

inline static constexpr unsigned int MLPPAKIBMDF_TypeDefinitionIndex = 43938;

class MLPPAKIBMDF : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x204; // 0x0
	::AIKGHHJKNCE* FHBDEPDCGKC; // 0x50
	::MoleMole::HollowChessboard::HollowEntity* KFPNBOJJHNA; // 0x58
	::MoleMole::UIHollowChessPieceParticle* JKEDDGKABNC; // 0x60
	::AADEHKBDJDL* _FJAAAAACINE_k__BackingField; // 0x68
	::MoleMole::UIHollowChessPieceParticle* OEJEMIMKCCC; // 0x70
	::MoleMole::UIHollowChessPieceParticle* JNGHICFKMAB; // 0x78
	::System::Boolean ONHFPOGBJLG; // 0x80
	::System::Boolean ILEFFMHKNAA; // 0x81

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLPPAKIBMDF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPPAKIBMDF__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPPAKIBMDF_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPPAKIBMDF_ONCLEAN_OFFSET))(this);
	}

	static ::MLPPAKIBMDF* JFDOOELFAOA()
	{
		return ((::MLPPAKIBMDF*(*)())((::PBYTE)hIl2Cpp + MLPPAKIBMDF_JFDOOELFAOA_OFFSET))();
	}

	::System::Void JFNBOIBNHPA(::AADEHKBDJDL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AADEHKBDJDL*))((::PBYTE)hIl2Cpp + MLPPAKIBMDF_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPPAKIBMDF_MEFBHFEOKGH_OFFSET))(this);
	}

	::AADEHKBDJDL* BLIOCCCNKDK()
	{
		return ((::AADEHKBDJDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPPAKIBMDF_BLIOCCCNKDK_OFFSET))(this);
	}
};
