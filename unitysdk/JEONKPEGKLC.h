#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJKLAEILHPK.h"
#include "unitysdk/System/Object.h"
class NNKDKMBKFHC;
class PELKNPKGJJN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class TaskContext; }

#define JEONKPEGKLC_CTOR_OFFSET UNITYSDK_OFFSET(0x13086980)
#define JEONKPEGKLC_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x130869B0)
#define JEONKPEGKLC_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x130869D0)
#define JEONKPEGKLC_GET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x130869C0)
#define JEONKPEGKLC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x13086E70)
#define JEONKPEGKLC_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x130869F0)
#define JEONKPEGKLC_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0x13086C00)
#define JEONKPEGKLC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x13086CE0)
#define JEONKPEGKLC_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x13086E20)
#define JEONKPEGKLC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x13086A50)
#define JEONKPEGKLC_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x130869E0)

inline static constexpr unsigned int JEONKPEGKLC_TypeDefinitionIndex = 54706;

	class JEONKPEGKLC : public ::System::Object
	{
	public:
		::MJKLAEILHPK BJCHCAIMLFE; // 0x10
		::PELKNPKGJJN* IGHAHBNLIJA; // 0x40
		::RPG::GameCore::LevelGraph* _OwnerGraph_k__BackingField; // 0x48
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x50
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x58
		::NNKDKMBKFHC* IEEOLIHJOIK; // 0x60
		::System::UInt32 JIJLLOLONLA; // 0x68
		::System::Boolean _IsFinished_k__BackingField; // 0x6C
		::System::Boolean OIEPFNCCGJP; // 0x6D
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::PELKNPKGJJN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::PELKNPKGJJN*))((::PBYTE)hIl2Cpp + JEONKPEGKLC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEONKPEGKLC_GET_ENTITY_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraph* get_OwnerGraph()
		{
			return ((::RPG::GameCore::LevelGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEONKPEGKLC_GET_OWNERGRAPH_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEONKPEGKLC_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEONKPEGKLC_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Void JDEKJLHMPLG(::NNKDKMBKFHC* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::NNKDKMBKFHC*, ::System::UInt32))((::PBYTE)hIl2Cpp + JEONKPEGKLC_JDEKJLHMPLG_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEONKPEGKLC_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEONKPEGKLC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEONKPEGKLC_KAOLPGACCID_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEONKPEGKLC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JDPGFIBLFOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEONKPEGKLC_JDPGFIBLFOP_OFFSET))(this);
		}

	};
