#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GJMAAIHEABO;

#define GJMAAIHEABO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE29720)
#define GJMAAIHEABO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE29730)
#define GJMAAIHEABO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE29660)

inline static constexpr unsigned int GJMAAIHEABO_TypeDefinitionIndex = 23808;

	class GJMAAIHEABO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMAAIHEABO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GJMAAIHEABO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJMAAIHEABO*))((::PBYTE)hIl2Cpp + GJMAAIHEABO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GJMAAIHEABO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJMAAIHEABO*))((::PBYTE)hIl2Cpp + GJMAAIHEABO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
