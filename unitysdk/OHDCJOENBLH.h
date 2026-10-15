#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OHDCJOENBLH;

#define OHDCJOENBLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D249860)
#define OHDCJOENBLH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D249870)
#define OHDCJOENBLH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D249830)

inline static constexpr unsigned int OHDCJOENBLH_TypeDefinitionIndex = 21297;

	class OHDCJOENBLH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ALMAIHKDFKL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDCJOENBLH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OHDCJOENBLH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHDCJOENBLH*))((::PBYTE)hIl2Cpp + OHDCJOENBLH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OHDCJOENBLH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHDCJOENBLH*))((::PBYTE)hIl2Cpp + OHDCJOENBLH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
