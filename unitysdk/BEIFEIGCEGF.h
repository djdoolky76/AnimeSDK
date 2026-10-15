#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityDiceCombatV2ScoreType.h"
#include "unitysdk/System/Object.h"
class BEIFEIGCEGF;
class FCOEMCEDLNL;

#define BEIFEIGCEGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD01780)
#define BEIFEIGCEGF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD01560)

inline static constexpr unsigned int BEIFEIGCEGF_TypeDefinitionIndex = 11293;

	class BEIFEIGCEGF : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PBLPLDJKPEI; // 0x10
		::RPG::Client::TextID OACJHAFNCCB; // 0x18
		::RPG::GameCore::ActivityDiceCombatV2ScoreType FBBBHPDMFAP; // 0x28
		::System::UInt32 PHFMCACHFIJ; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIFEIGCEGF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BEIFEIGCEGF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BEIFEIGCEGF*))((::PBYTE)hIl2Cpp + BEIFEIGCEGF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
