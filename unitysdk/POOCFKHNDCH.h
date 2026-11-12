#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
class POOCFKHNDCH;
namespace RPG::GameCore { class PerformanceRecallRow; }
namespace System { class String; }

#define POOCFKHNDCH_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xCCA99C0)
#define POOCFKHNDCH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCCA9960)
#define POOCFKHNDCH_CTOR_OFFSET UNITYSDK_OFFSET(0xCCA9BD0)
#define POOCFKHNDCH_EPAMIIDFNEA_OFFSET UNITYSDK_OFFSET(0xCCA9C00)
#define POOCFKHNDCH_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xCCA9C90)
#define POOCFKHNDCH_GET_PERFORMANCEPATH_OFFSET UNITYSDK_OFFSET(0xCCA9CB0)
#define POOCFKHNDCH_GET_PERFORMANCETYPE_OFFSET UNITYSDK_OFFSET(0xCCA9C50)
#define POOCFKHNDCH_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xCCA9C70)
#define POOCFKHNDCH_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCCA9BE0)
#define POOCFKHNDCH_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xCCA9CA0)
#define POOCFKHNDCH_SET_PERFORMANCEPATH_OFFSET UNITYSDK_OFFSET(0xCCA9CC0)
#define POOCFKHNDCH_SET_PERFORMANCETYPE_OFFSET UNITYSDK_OFFSET(0xCCA9C60)
#define POOCFKHNDCH_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0xCCA9C80)
#define POOCFKHNDCH_SET_ROW_OFFSET UNITYSDK_OFFSET(0xCCA9BF0)

inline static constexpr unsigned int POOCFKHNDCH_TypeDefinitionIndex = 68379;

	class POOCFKHNDCH : public ::System::Object
	{
	public:
		::System::String* _PerformancePath_k__BackingField; // 0x10
		::RPG::GameCore::PerformanceRecallRow* _Row_k__BackingField; // 0x18
		::RPG::GameCore::ELevelPerformanceType _PerformanceType_k__BackingField; // 0x20
		::System::UInt32 _PlaneID_k__BackingField; // 0x24
		::System::UInt32 _FloorID_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOCFKHNDCH_CTOR_OFFSET))(this);
		}

		static ::POOCFKHNDCH* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::POOCFKHNDCH*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + POOCFKHNDCH_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::POOCFKHNDCH* BPLPBPMEODA_1(::RPG::GameCore::PerformanceRecallRow* a1)
		{
			return ((::POOCFKHNDCH*(*)(::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + POOCFKHNDCH_BPLPBPMEODA_1_OFFSET))(a1);
		}

		::RPG::GameCore::PerformanceRecallRow* get_Row()
		{
			return ((::RPG::GameCore::PerformanceRecallRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + POOCFKHNDCH_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::PerformanceRecallRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + POOCFKHNDCH_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 EPAMIIDFNEA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POOCFKHNDCH_EPAMIIDFNEA_OFFSET))(this);
		}

		::RPG::GameCore::ELevelPerformanceType get_PerformanceType()
		{
			return ((::RPG::GameCore::ELevelPerformanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + POOCFKHNDCH_GET_PERFORMANCETYPE_OFFSET))(this);
		}

		::System::Void set_PerformanceType(::RPG::GameCore::ELevelPerformanceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + POOCFKHNDCH_SET_PERFORMANCETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POOCFKHNDCH_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POOCFKHNDCH_SET_PLANEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POOCFKHNDCH_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POOCFKHNDCH_SET_FLOORID_OFFSET))(this, a1);
		}

		::System::String* get_PerformancePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POOCFKHNDCH_GET_PERFORMANCEPATH_OFFSET))(this);
		}

		::System::Void set_PerformancePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + POOCFKHNDCH_SET_PERFORMANCEPATH_OFFSET))(this, a1);
		}

	};
