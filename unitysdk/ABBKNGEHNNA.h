#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ABBKNGEHNNA;
class FCOEMCEDLNL;

#define ABBKNGEHNNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9CB40)
#define ABBKNGEHNNA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CC9CB50)
#define ABBKNGEHNNA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC9CB00)

inline static constexpr unsigned int ABBKNGEHNNA_TypeDefinitionIndex = 21464;

	class ABBKNGEHNNA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean PJOBGMNIOIE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBKNGEHNNA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ABBKNGEHNNA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ABBKNGEHNNA*))((::PBYTE)hIl2Cpp + ABBKNGEHNNA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ABBKNGEHNNA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ABBKNGEHNNA*))((::PBYTE)hIl2Cpp + ABBKNGEHNNA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
