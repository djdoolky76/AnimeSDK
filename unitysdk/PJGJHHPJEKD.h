#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class CLMCPKLMOBB;
class FCBCIKHBEML;
class LHLDPHDJLNL;
class OBINMMHLFMK;
class OCOOBEKHHCP;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define PJGJHHPJEKD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1D9CE100)
#define PJGJHHPJEKD_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1D9CE070)
#define PJGJHHPJEKD_EILHANNLKFD_OFFSET UNITYSDK_OFFSET(0x1D9CE0C0)
#define PJGJHHPJEKD_EODBBODDHIL_OFFSET UNITYSDK_OFFSET(0x1D9CE0F0)
#define PJGJHHPJEKD_KNIJEDMFEFL_OFFSET UNITYSDK_OFFSET(0x1D9CDF40)
#define PJGJHHPJEKD_PGCIBMIDOLJ_OFFSET UNITYSDK_OFFSET(0x1D9CE0D0)
#define PJGJHHPJEKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CDE80)

inline static constexpr unsigned int PJGJHHPJEKD_TypeDefinitionIndex = 84043;

class PJGJHHPJEKD : public ::System::Object
{
public:
	::LHLDPHDJLNL* _NHKFGJHNPGL_k__BackingField; // 0x10
	::OBINMMHLFMK* LPLLGDDOLEE; // 0x18
	::OCOOBEKHHCP* NLNFOLDDLDC; // 0x20
	::MoleMole::HollowChessboard::HollowEntity* IIPOOCJBILD; // 0x28
	::CLMCPKLMOBB* ADFPONEPHGG; // 0x30
	::MoleMole::HollowChessboard::HollowCell AGCJEPKNNNF; // 0x38
	::System::Int32 LCMNPGMHLJK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGJHHPJEKD__CTOR_OFFSET))(this);
	}

	::FCBCIKHBEML* KNIJEDMFEFL()
	{
		return ((::FCBCIKHBEML*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGJHHPJEKD_KNIJEDMFEFL_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGJHHPJEKD_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void EILHANNLKFD(::LHLDPHDJLNL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LHLDPHDJLNL*))((::PBYTE)hIl2Cpp + PJGJHHPJEKD_EILHANNLKFD_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::HollowChessboard::HollowEntity* PGCIBMIDOLJ()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGJHHPJEKD_PGCIBMIDOLJ_OFFSET))(this);
	}

	::LHLDPHDJLNL* EODBBODDHIL()
	{
		return ((::LHLDPHDJLNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGJHHPJEKD_EODBBODDHIL_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::LHLDPHDJLNL* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::LHLDPHDJLNL*))((::PBYTE)hIl2Cpp + PJGJHHPJEKD_BBOMJDBNHIC_OFFSET))(this, GEEHGDABNJF);
	}
};
