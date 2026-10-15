#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EEANPGAPLDB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }

#define EEANPGAPLDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD43DB0)
#define EEANPGAPLDB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD43DC0)
#define EEANPGAPLDB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD43D80)

inline static constexpr unsigned int EEANPGAPLDB_TypeDefinitionIndex = 24153;

	class EEANPGAPLDB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* JDABEACCKPM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANPGAPLDB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EEANPGAPLDB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEANPGAPLDB*))((::PBYTE)hIl2Cpp + EEANPGAPLDB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EEANPGAPLDB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEANPGAPLDB*))((::PBYTE)hIl2Cpp + EEANPGAPLDB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
