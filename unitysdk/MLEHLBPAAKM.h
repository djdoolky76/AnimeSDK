#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TacticsPointConditionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MLEHLBPAAKM;

#define MLEHLBPAAKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A3700)
#define MLEHLBPAAKM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F5A34A0)

inline static constexpr unsigned int MLEHLBPAAKM_TypeDefinitionIndex = 11358;

	class MLEHLBPAAKM : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BEEFBPGJJOD; // 0x10
		::RPG::GameCore::TacticsPointConditionType LOAGIPDPLFM; // 0x18
		::System::UInt32 BDGECKGNFFM; // 0x1C
		::RPG::Client::TextID KEGANNHEKHA; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLEHLBPAAKM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MLEHLBPAAKM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLEHLBPAAKM*))((::PBYTE)hIl2Cpp + MLEHLBPAAKM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
