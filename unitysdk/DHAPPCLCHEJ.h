#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"
class DHAPPCLCHEJ;
class FCOEMCEDLNL;

#define DHAPPCLCHEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD21830)
#define DHAPPCLCHEJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD216A0)

inline static constexpr unsigned int DHAPPCLCHEJ_TypeDefinitionIndex = 12942;

	class DHAPPCLCHEJ : public ::System::Object
	{
	public:
		::System::UInt32 NEBFIEHMLJB; // 0x10
		::System::UInt32 CEELPELAICJ; // 0x14
		::RPG::GameCore::ChallengeGroupType NDEEOPGAILP; // 0x18
		::System::UInt32 NAGOAODFACD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAPPCLCHEJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DHAPPCLCHEJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DHAPPCLCHEJ*))((::PBYTE)hIl2Cpp + DHAPPCLCHEJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
