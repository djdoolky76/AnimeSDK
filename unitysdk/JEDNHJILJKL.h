#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityRewardCountCollection; }
namespace RPG::Client { class ActivityRewardCountData; }

#define JEDNHJILJKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1661DF00)
#define JEDNHJILJKL_HBGAMHIEDJC_OFFSET UNITYSDK_OFFSET(0x1661DF50)

inline static constexpr unsigned int JEDNHJILJKL_TypeDefinitionIndex = 61788;

	class JEDNHJILJKL : public ::System::Object
	{
	public:
		::RPG::Client::ActivityRewardCountCollection* JOBLGLDNJNL; // 0x10
		::System::UInt32 DBIMHPGKEJK; // 0x18
		::System::Void _ctor(::RPG::Client::ActivityRewardCountCollection* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRewardCountCollection*, ::System::UInt32))((::PBYTE)hIl2Cpp + JEDNHJILJKL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityRewardCountData* HBGAMHIEDJC()
		{
			return ((::RPG::Client::ActivityRewardCountData*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDNHJILJKL_HBGAMHIEDJC_OFFSET))(this);
		}

	};
