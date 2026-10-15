#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultConditionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HGDOFGNAMDM;

#define HGDOFGNAMDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE760D0)
#define HGDOFGNAMDM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE75FA0)

inline static constexpr unsigned int HGDOFGNAMDM_TypeDefinitionIndex = 15139;

	class HGDOFGNAMDM : public ::System::Object
	{
	public:
		::System::UInt32 JIDLKIHJLFL; // 0x10
		::RPG::GameCore::BattleResultConditionType LOAGIPDPLFM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDOFGNAMDM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HGDOFGNAMDM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HGDOFGNAMDM*))((::PBYTE)hIl2Cpp + HGDOFGNAMDM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
