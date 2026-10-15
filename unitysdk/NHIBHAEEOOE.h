#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NHIBHAEEOOE;

#define NHIBHAEEOOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E1960)
#define NHIBHAEEOOE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1E1830)

inline static constexpr unsigned int NHIBHAEEOOE_TypeDefinitionIndex = 14367;

	class NHIBHAEEOOE : public ::System::Object
	{
	public:
		::System::UInt32 HNPDLANHONH; // 0x10
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIBHAEEOOE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NHIBHAEEOOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NHIBHAEEOOE*))((::PBYTE)hIl2Cpp + NHIBHAEEOOE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
