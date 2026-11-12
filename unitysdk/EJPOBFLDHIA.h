#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EJPOBFLDHIA;
class FCOEMCEDLNL;

#define EJPOBFLDHIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF66720)
#define EJPOBFLDHIA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF66730)
#define EJPOBFLDHIA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF666E0)

inline static constexpr unsigned int EJPOBFLDHIA_TypeDefinitionIndex = 23039;

	class EJPOBFLDHIA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::NihiluxElationUIType GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPOBFLDHIA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EJPOBFLDHIA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJPOBFLDHIA*))((::PBYTE)hIl2Cpp + EJPOBFLDHIA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EJPOBFLDHIA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJPOBFLDHIA*))((::PBYTE)hIl2Cpp + EJPOBFLDHIA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
