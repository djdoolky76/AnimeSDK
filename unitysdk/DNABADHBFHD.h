#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DNABADHBFHD;
class FCOEMCEDLNL;

#define DNABADHBFHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD49550)
#define DNABADHBFHD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD49560)
#define DNABADHBFHD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD49520)

inline static constexpr unsigned int DNABADHBFHD_TypeDefinitionIndex = 10187;

	class DNABADHBFHD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean OHMHJFANEIF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNABADHBFHD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DNABADHBFHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DNABADHBFHD*))((::PBYTE)hIl2Cpp + DNABADHBFHD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DNABADHBFHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DNABADHBFHD*))((::PBYTE)hIl2Cpp + DNABADHBFHD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
