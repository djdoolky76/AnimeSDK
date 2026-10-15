#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/System/Object.h"
class LDKMOFFMGEL;
namespace System { template <typename T> class Predicate_1; }

#define IBMKMANFGNO___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15E358C0)
#define IBMKMANFGNO___C__DISPLAYCLASS5_0___SYNCMAGICUNITS_B__0_OFFSET UNITYSDK_OFFSET(0x15E35BA0)

inline static constexpr unsigned int IBMKMANFGNO___c__DisplayClass5_0_TypeDefinitionIndex = 67420;

	class IBMKMANFGNO___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::LDKMOFFMGEL*>* __9__0; // 0x10
		::RPG::GameCore::RogueMagicMountType mountType; // 0x18
		::System::UInt32 i; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBMKMANFGNO___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncMagicUnits_b__0(::LDKMOFFMGEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDKMOFFMGEL*))((::PBYTE)hIl2Cpp + IBMKMANFGNO___C__DISPLAYCLASS5_0___SYNCMAGICUNITS_B__0_OFFSET))(this, a1);
		}

	};
