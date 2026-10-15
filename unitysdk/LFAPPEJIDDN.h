#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHFCIOJIONP.h"
#include "unitysdk/RPG/Client/AdventureEntityDieState.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }

#define LFAPPEJIDDN_CTOR_OFFSET UNITYSDK_OFFSET(0xB660650)
#define LFAPPEJIDDN_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xB660250)
#define LFAPPEJIDDN_DOGONNEEEOI_OFFSET UNITYSDK_OFFSET(0xB660240)
#define LFAPPEJIDDN_EEHEAMAOBCL_OFFSET UNITYSDK_OFFSET(0xB660350)
#define LFAPPEJIDDN_FHGNCMHBGNO_OFFSET UNITYSDK_OFFSET(0xB6605D0)
#define LFAPPEJIDDN_HDNHBCHJMLN_OFFSET UNITYSDK_OFFSET(0xB660430)
#define LFAPPEJIDDN_KCFLEKIIDII_OFFSET UNITYSDK_OFFSET(0xB660560)

inline static constexpr unsigned int LFAPPEJIDDN_TypeDefinitionIndex = 60126;

	class LFAPPEJIDDN : public ::JHFCIOJIONP
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x20
		::RPG::GameCore::PropComponent* PMIBEAIGLAO; // 0x28
		::System::Single IJAJOGNGEIK; // 0x30
		::System::Single BPMNMDJIPLE; // 0x34
		::RPG::Client::AdventureEntityDieState DLNIGFGLPLJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAPPEJIDDN_CTOR_OFFSET))(this);
		}

		::System::Boolean DOGONNEEEOI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAPPEJIDDN_DOGONNEEEOI_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + LFAPPEJIDDN_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Void HDNHBCHJMLN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFAPPEJIDDN_HDNHBCHJMLN_OFFSET))(this, a1);
		}

		::System::Void EEHEAMAOBCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAPPEJIDDN_EEHEAMAOBCL_OFFSET))(this);
		}

		::System::Void KCFLEKIIDII(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFAPPEJIDDN_KCFLEKIIDII_OFFSET))(this, a1);
		}

		::System::Single FHGNCMHBGNO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAPPEJIDDN_FHGNCMHBGNO_OFFSET))(this);
		}

	};
