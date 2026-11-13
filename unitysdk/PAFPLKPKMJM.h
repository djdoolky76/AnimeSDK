#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PAFPLKPKMJM;

#define PAFPLKPKMJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1EA100)
#define PAFPLKPKMJM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F1EA110)
#define PAFPLKPKMJM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F1EA040)

inline static constexpr unsigned int PAFPLKPKMJM_TypeDefinitionIndex = 21892;

	class PAFPLKPKMJM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFPLKPKMJM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PAFPLKPKMJM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PAFPLKPKMJM*))((::PBYTE)hIl2Cpp + PAFPLKPKMJM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PAFPLKPKMJM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PAFPLKPKMJM*))((::PBYTE)hIl2Cpp + PAFPLKPKMJM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
