#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HEPJEEHMABM;

#define HEPJEEHMABM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E079480)
#define HEPJEEHMABM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E079490)
#define HEPJEEHMABM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E079450)

inline static constexpr unsigned int HEPJEEHMABM_TypeDefinitionIndex = 24777;

	class HEPJEEHMABM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PFDHNIJBGKO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPJEEHMABM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HEPJEEHMABM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HEPJEEHMABM*))((::PBYTE)hIl2Cpp + HEPJEEHMABM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HEPJEEHMABM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HEPJEEHMABM*))((::PBYTE)hIl2Cpp + HEPJEEHMABM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
