#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEGAELKIHBI.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NMFDMKMIDKB;
namespace RPG::GameCore { class TargetEvaluator; }

#define NMFDMKMIDKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2096E0)
#define NMFDMKMIDKB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2096F0)
#define NMFDMKMIDKB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2096B0)

inline static constexpr unsigned int NMFDMKMIDKB_TypeDefinitionIndex = 21078;

	class NMFDMKMIDKB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* EGMDGDCHCOI; // 0x18
		::AEGAELKIHBI KDHPKOFLNFM; // 0x20
		::System::Boolean BBLMMNLCMGM; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFDMKMIDKB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NMFDMKMIDKB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMFDMKMIDKB*))((::PBYTE)hIl2Cpp + NMFDMKMIDKB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NMFDMKMIDKB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMFDMKMIDKB*))((::PBYTE)hIl2Cpp + NMFDMKMIDKB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
