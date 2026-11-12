#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPOEEGPIIPA.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define HNFANNMNNFA_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x16D32E90)
#define HNFANNMNNFA_CTOR_OFFSET UNITYSDK_OFFSET(0x16D32EE0)
#define HNFANNMNNFA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16D32DA0)

inline static constexpr unsigned int HNFANNMNNFA_TypeDefinitionIndex = 79375;

	class HNFANNMNNFA : public ::MPOEEGPIIPA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFANNMNNFA_CTOR_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNFANNMNNFA_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFANNMNNFA_BPMGPFLHPLC_OFFSET))(this);
		}

	};
