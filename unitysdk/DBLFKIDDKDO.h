#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DBLFKIDDKDO;
class FCOEMCEDLNL;

#define DBLFKIDDKDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF3B90)
#define DBLFKIDDKDO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EEF3BA0)
#define DBLFKIDDKDO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EEF3AD0)

inline static constexpr unsigned int DBLFKIDDKDO_TypeDefinitionIndex = 20228;

	class DBLFKIDDKDO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLFKIDDKDO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DBLFKIDDKDO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBLFKIDDKDO*))((::PBYTE)hIl2Cpp + DBLFKIDDKDO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DBLFKIDDKDO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBLFKIDDKDO*))((::PBYTE)hIl2Cpp + DBLFKIDDKDO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
