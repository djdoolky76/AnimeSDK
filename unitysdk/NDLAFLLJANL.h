#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/NDLAFLLJANL_FAJICBOCEOG.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDLAFLLJANL_DOMECKIDKGP_OFFSET UNITYSDK_OFFSET(0x11F6ACA0)
#define NDLAFLLJANL_HFIGADKAPAA_OFFSET UNITYSDK_OFFSET(0x13B5BF00)
#define NDLAFLLJANL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13B5BF60)
#define NDLAFLLJANL__CTOR_OFFSET UNITYSDK_OFFSET(0x11F6AC90)

inline static constexpr unsigned int NDLAFLLJANL_TypeDefinitionIndex = 81115;

class NDLAFLLJANL : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::String* HOILGIDNIIF; // 0x0
	::System::Action_2<::MoleMole::Config::EnterBattleState, ::MoleMole::Config::EnterBattleState>* CHPMFIIBNAC; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Config::EnterBattleState>* ACNKJPIKHKG; // 0x50
	::System::Action* GNIFENKGKOJ; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* GBHGNIMHJAG; // 0x60
	::NDLAFLLJANL_FAJICBOCEOG MNCMEPOBADG; // 0x68
	::MoleMole::Config::EnterBattleState OCOJFKMOKMK; // 0x6C
	::System::Boolean EKGNGCICHIB; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLAFLLJANL__CTOR_OFFSET))(this);
	}

	::System::Boolean HFIGADKAPAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLAFLLJANL_HFIGADKAPAA_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLAFLLJANL_ONCLEAN_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* DOMECKIDKGP()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLAFLLJANL_DOMECKIDKGP_OFFSET))(this);
	}
};
