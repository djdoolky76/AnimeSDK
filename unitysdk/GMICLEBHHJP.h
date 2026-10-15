#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsCardUseCheckResult.h"
#include "unitysdk/System/Object.h"
class GHLNPFDIJLF;
class IBPGDJEBPFN;
class JCLBAEHIBLA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMICLEBHHJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C619530)

inline static constexpr unsigned int GMICLEBHHJP_TypeDefinitionIndex = 36488;

	class GMICLEBHHJP : public ::System::Object
	{
	public:
		::JCLBAEHIBLA* JBMJPJEKNGN; // 0x10
		::System::Collections::Generic::List_1<::GHLNPFDIJLF*>* PIBKHIILLLF; // 0x18
		::IBPGDJEBPFN* MLLNOGKNHNL; // 0x20
		::System::UInt32 LJMNNBMALLL; // 0x28
		::System::UInt32 HJPBAJEPAGE; // 0x2C
		::RPG::LittleGameShare::DiceCombatCore::TacticsCardUseCheckResult JCHFCNFHCMM; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMICLEBHHJP_CTOR_OFFSET))(this);
		}

	};
