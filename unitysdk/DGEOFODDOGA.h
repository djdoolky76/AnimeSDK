#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerInputType.h"
class DGEOFODDOGA;
class FCOEMCEDLNL;

#define DGEOFODDOGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1D640)
#define DGEOFODDOGA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD1D650)
#define DGEOFODDOGA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD1D610)

inline static constexpr unsigned int DGEOFODDOGA_TypeDefinitionIndex = 21553;

	class DGEOFODDOGA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamTowersPlayerInputType PLEMHLIAKPF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEOFODDOGA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DGEOFODDOGA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DGEOFODDOGA*))((::PBYTE)hIl2Cpp + DGEOFODDOGA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DGEOFODDOGA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DGEOFODDOGA*))((::PBYTE)hIl2Cpp + DGEOFODDOGA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
