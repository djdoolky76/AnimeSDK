#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LDLJIEJGJOC;
namespace RPG::GameCore { class FateRinCaseBoardEffectInfo; }

#define LDLJIEJGJOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E1EF0)
#define LDLJIEJGJOC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0E1F00)
#define LDLJIEJGJOC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0E1EC0)

inline static constexpr unsigned int LDLJIEJGJOC_TypeDefinitionIndex = 19924;

	class LDLJIEJGJOC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FateRinCaseBoardEffectInfo*>* LDCJONHGDAN; // 0x18
		::System::Boolean GNDCCBNILML; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLJIEJGJOC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDLJIEJGJOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDLJIEJGJOC*))((::PBYTE)hIl2Cpp + LDLJIEJGJOC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LDLJIEJGJOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDLJIEJGJOC*))((::PBYTE)hIl2Cpp + LDLJIEJGJOC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
