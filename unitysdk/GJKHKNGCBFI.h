#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIBABOJGDFE.h"
#include "unitysdk/FJCAJJEAJPC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd_Dir.h"

class GNDEANADMGH;
class HFNICIICHOJ;
namespace Nap::NapECS { class EcsWorld; }

#define GJKHKNGCBFI_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x149DA110)
#define GJKHKNGCBFI_BPDHNMMAEFJ_OFFSET UNITYSDK_OFFSET(0x149DA0B0)
#define GJKHKNGCBFI_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x149D9C40)
#define GJKHKNGCBFI_JDDMFEELKDH_OFFSET UNITYSDK_OFFSET(0x149D9FD0)
#define GJKHKNGCBFI_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x149DA1B0)
#define GJKHKNGCBFI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x149D9DD0)
#define GJKHKNGCBFI__CTOR_OFFSET UNITYSDK_OFFSET(0x149D9F60)

inline static constexpr unsigned int GJKHKNGCBFI_TypeDefinitionIndex = 91972;

class GJKHKNGCBFI : public ::FJCAJJEAJPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKHKNGCBFI__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GJKHKNGCBFI_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJKHKNGCBFI_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::System::Void JDDMFEELKDH(::HFNICIICHOJ* PPDNIHPGCOJ, ::GNDEANADMGH* GCDOCPMOEMG)
	{
		return ((::System::Void(*)(::HFNICIICHOJ*, ::GNDEANADMGH*))((::PBYTE)hIl2Cpp + GJKHKNGCBFI_JDDMFEELKDH_OFFSET))(PPDNIHPGCOJ, GCDOCPMOEMG);
	}

	static ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir BPDHNMMAEFJ(::BIBABOJGDFE DALJDJDLHEA)
	{
		return ((::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir(*)(::BIBABOJGDFE))((::PBYTE)hIl2Cpp + GJKHKNGCBFI_BPDHNMMAEFJ_OFFSET))(DALJDJDLHEA);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJKHKNGCBFI_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GJKHKNGCBFI_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
