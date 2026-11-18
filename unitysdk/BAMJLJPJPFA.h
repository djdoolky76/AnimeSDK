#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class ADJCHAEAICK;
namespace Nap::NapECS { class EcsWorld; }

#define BAMJLJPJPFA_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0xF7860E0)
#define BAMJLJPJPFA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF784B70)
#define BAMJLJPJPFA_HIHFEOBHOKM_OFFSET UNITYSDK_OFFSET(0xF785860)
#define BAMJLJPJPFA_KKLIFGEHBGD_OFFSET UNITYSDK_OFFSET(0xF784D60)
#define BAMJLJPJPFA_KMKIPEPCPEN_OFFSET UNITYSDK_OFFSET(0xF7855A0)
#define BAMJLJPJPFA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xF786040)
#define BAMJLJPJPFA_NANLJKOJICN_OFFSET UNITYSDK_OFFSET(0xF7858E0)
#define BAMJLJPJPFA_OCOLJPBCIJB_OFFSET UNITYSDK_OFFSET(0xF785C90)
#define BAMJLJPJPFA_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0xF784CD0)
#define BAMJLJPJPFA__CTOR_OFFSET UNITYSDK_OFFSET(0xF7854A0)

inline static constexpr unsigned int BAMJLJPJPFA_TypeDefinitionIndex = 92520;

class BAMJLJPJPFA : public ::FJCAJJEAJPC
{
public:
	::MoleMole::HollowChessboard::HollowCell DOJNNJDFCOG; // 0x40
	::MoleMole::HollowChessboard::HollowChessboardUID OKKOMFEEOPI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMJLJPJPFA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::System::Void KMKIPEPCPEN(::ADJCHAEAICK* LDNCGMNHANO)
	{
		return ((::System::Void(*)(::ADJCHAEAICK*))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_KMKIPEPCPEN_OFFSET))(LDNCGMNHANO);
	}

	static ::System::Void HIHFEOBHOKM(::ADJCHAEAICK* LDNCGMNHANO)
	{
		return ((::System::Void(*)(::ADJCHAEAICK*))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_HIHFEOBHOKM_OFFSET))(LDNCGMNHANO);
	}

	static ::System::Void NANLJKOJICN(::ADJCHAEAICK* LDNCGMNHANO)
	{
		return ((::System::Void(*)(::ADJCHAEAICK*))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_NANLJKOJICN_OFFSET))(LDNCGMNHANO);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void OCOLJPBCIJB(::ADJCHAEAICK* LDNCGMNHANO)
	{
		return ((::System::Void(*)(::ADJCHAEAICK*))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_OCOLJPBCIJB_OFFSET))(LDNCGMNHANO);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void KKLIFGEHBGD(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BAMJLJPJPFA_KKLIFGEHBGD_OFFSET))(this, PMNLNNGEIFM);
	}
};
