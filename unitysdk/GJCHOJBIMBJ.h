#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GJCHOJBIMBJ;

#define GJCHOJBIMBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE27030)
#define GJCHOJBIMBJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE27040)
#define GJCHOJBIMBJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE27000)

inline static constexpr unsigned int GJCHOJBIMBJ_TypeDefinitionIndex = 23297;

	class GJCHOJBIMBJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean NEMIDJCLONB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCHOJBIMBJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GJCHOJBIMBJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJCHOJBIMBJ*))((::PBYTE)hIl2Cpp + GJCHOJBIMBJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GJCHOJBIMBJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJCHOJBIMBJ*))((::PBYTE)hIl2Cpp + GJCHOJBIMBJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
