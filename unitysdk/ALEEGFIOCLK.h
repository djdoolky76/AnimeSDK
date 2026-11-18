#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KBDGKAJPALP;
namespace MoleMole::Arcade::BallPit { class BallGameUpgradeDialogContext; }

#define ALEEGFIOCLK_AOMFDGDMJJF_OFFSET UNITYSDK_OFFSET(0x1D68A5A0)
#define ALEEGFIOCLK_CEIKPILJGID_OFFSET UNITYSDK_OFFSET(0x1D68A800)

inline static constexpr unsigned int ALEEGFIOCLK_TypeDefinitionIndex = 93432;

class ALEEGFIOCLK : public ::System::Object
{
public:
	static ::System::Void AOMFDGDMJJF(::KBDGKAJPALP* GEEHGDABNJF, ::System::Boolean DOFCLPCLHOJ)
	{
		return ((::System::Void(*)(::KBDGKAJPALP*, ::System::Boolean))((::PBYTE)hIl2Cpp + ALEEGFIOCLK_AOMFDGDMJJF_OFFSET))(GEEHGDABNJF, DOFCLPCLHOJ);
	}

	static ::System::Void CEIKPILJGID(::KBDGKAJPALP* GEEHGDABNJF, ::MoleMole::Arcade::BallPit::BallGameUpgradeDialogContext* NBKCGEDBHAJ)
	{
		return ((::System::Void(*)(::KBDGKAJPALP*, ::MoleMole::Arcade::BallPit::BallGameUpgradeDialogContext*))((::PBYTE)hIl2Cpp + ALEEGFIOCLK_CEIKPILJGID_OFFSET))(GEEHGDABNJF, NBKCGEDBHAJ);
	}
};
