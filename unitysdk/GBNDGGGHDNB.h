#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IdleLiveUIType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GBNDGGGHDNB;

#define GBNDGGGHDNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE28140)
#define GBNDGGGHDNB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE28150)
#define GBNDGGGHDNB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE28110)

inline static constexpr unsigned int GBNDGGGHDNB_TypeDefinitionIndex = 10224;

	class GBNDGGGHDNB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::IdleLiveUIType EKCABJFBJEK; // 0x18
		::System::Boolean DMHJINGNBIH; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNDGGGHDNB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GBNDGGGHDNB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GBNDGGGHDNB*))((::PBYTE)hIl2Cpp + GBNDGGGHDNB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GBNDGGGHDNB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GBNDGGGHDNB*))((::PBYTE)hIl2Cpp + GBNDGGGHDNB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
