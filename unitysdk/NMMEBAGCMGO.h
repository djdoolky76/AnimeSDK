#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class PNHAEMFHHEB;
namespace Nap::NapECS { class EcsWorld; }

#define NMMEBAGCMGO_ANPJGJDKBLD_OFFSET UNITYSDK_OFFSET(0xE1AB0B0)
#define NMMEBAGCMGO_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xE1AAEE0)
#define NMMEBAGCMGO_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xE1AB1D0)
#define NMMEBAGCMGO__CTOR_OFFSET UNITYSDK_OFFSET(0xE1AB040)

inline static constexpr unsigned int NMMEBAGCMGO_TypeDefinitionIndex = 47098;

class NMMEBAGCMGO : public ::FJCAJJEAJPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMEBAGCMGO__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NMMEBAGCMGO_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void ANPJGJDKBLD(::PNHAEMFHHEB* KNENMPAIHBJ, ::MoleMole::HollowChessboard::HollowCell IGLBMOILKGE, ::MoleMole::HollowChessboard::HollowCell LKNIPKKCKIK)
	{
		return ((::System::Void(*)(::PNHAEMFHHEB*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NMMEBAGCMGO_ANPJGJDKBLD_OFFSET))(KNENMPAIHBJ, IGLBMOILKGE, LKNIPKKCKIK);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NMMEBAGCMGO_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
