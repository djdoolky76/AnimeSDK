#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GEOJAFFIJOB;

#define GEOJAFFIJOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E016230)
#define GEOJAFFIJOB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E016240)
#define GEOJAFFIJOB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E016170)

inline static constexpr unsigned int GEOJAFFIJOB_TypeDefinitionIndex = 21837;

	class GEOJAFFIJOB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOJAFFIJOB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GEOJAFFIJOB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GEOJAFFIJOB*))((::PBYTE)hIl2Cpp + GEOJAFFIJOB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GEOJAFFIJOB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GEOJAFFIJOB*))((::PBYTE)hIl2Cpp + GEOJAFFIJOB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
