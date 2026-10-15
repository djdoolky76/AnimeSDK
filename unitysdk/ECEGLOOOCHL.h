#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ECEGLOOOCHL;
class FCOEMCEDLNL;

#define ECEGLOOOCHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD640F0)
#define ECEGLOOOCHL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD64100)
#define ECEGLOOOCHL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD64030)

inline static constexpr unsigned int ECEGLOOOCHL_TypeDefinitionIndex = 19894;

	class ECEGLOOOCHL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEGLOOOCHL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ECEGLOOOCHL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ECEGLOOOCHL*))((::PBYTE)hIl2Cpp + ECEGLOOOCHL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ECEGLOOOCHL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ECEGLOOOCHL*))((::PBYTE)hIl2Cpp + ECEGLOOOCHL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
