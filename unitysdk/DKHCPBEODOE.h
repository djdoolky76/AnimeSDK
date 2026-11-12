#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKHCPBEODOE;
namespace RPG::GameCore { class IronTombNormalModeThresholdConfig; }
namespace RPG::GameCore { class TaskContext; }

#define DKHCPBEODOE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xFFE1D00)
#define DKHCPBEODOE_CTOR_OFFSET UNITYSDK_OFFSET(0xFFE1EE0)
#define DKHCPBEODOE_JDDOLBNGDAO_OFFSET UNITYSDK_OFFSET(0xFFE1EF0)

inline static constexpr unsigned int DKHCPBEODOE_TypeDefinitionIndex = 56716;

	class DKHCPBEODOE : public ::System::Object
	{
	public:
		::System::Int32 PMIODBOODIG; // 0x10
		::System::Int32 IKBJDOOFIHB; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCPBEODOE_CTOR_OFFSET))(this);
		}

		static ::DKHCPBEODOE* BPLPBPMEODA(::RPG::GameCore::IronTombNormalModeThresholdConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::DKHCPBEODOE*(*)(::RPG::GameCore::IronTombNormalModeThresholdConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + DKHCPBEODOE_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::DKHCPBEODOE* JDDOLBNGDAO()
		{
			return ((::DKHCPBEODOE*(*)())((::PBYTE)hIl2Cpp + DKHCPBEODOE_JDDOLBNGDAO_OFFSET))();
		}

	};
