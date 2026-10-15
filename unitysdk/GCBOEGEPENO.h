#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GCBOEGEPENO;

#define GCBOEGEPENO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFD8E0)
#define GCBOEGEPENO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDFD8F0)
#define GCBOEGEPENO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDFD8A0)

inline static constexpr unsigned int GCBOEGEPENO_TypeDefinitionIndex = 24387;

	class GCBOEGEPENO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean KDHCICFNAOC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBOEGEPENO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GCBOEGEPENO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GCBOEGEPENO*))((::PBYTE)hIl2Cpp + GCBOEGEPENO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GCBOEGEPENO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GCBOEGEPENO*))((::PBYTE)hIl2Cpp + GCBOEGEPENO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
