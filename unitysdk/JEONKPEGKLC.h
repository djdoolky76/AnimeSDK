#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJKLAEILHPK.h"
#include "unitysdk/System/Object.h"
class NNKDKMBKFHC;
class PELKNPKGJJN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class TaskContext; }

#define JEONKPEGKLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1662E5D0)
#define JEONKPEGKLC_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1662E600)
#define JEONKPEGKLC_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1662E620)
#define JEONKPEGKLC_GET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x1662E610)
#define JEONKPEGKLC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1662EB40)
#define JEONKPEGKLC_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x1662E640)
#define JEONKPEGKLC_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0x1662E890)
#define JEONKPEGKLC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1662E970)
#define JEONKPEGKLC_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x1662EAF0)
#define JEONKPEGKLC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1662E6A0)
#define JEONKPEGKLC_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1662E630)

inline static constexpr unsigned int JEONKPEGKLC_TypeDefinitionIndex = 53543;

	class JEONKPEGKLC : public ::System::Object
	{
	public:
		::MJKLAEILHPK BJCHCAIMLFE; // 0x10
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x40
		::RPG::GameCore::LevelGraph* _OwnerGraph_k__BackingField; // 0x48
		::PELKNPKGJJN* IGHAHBNLIJA; // 0x50
		::NNKDKMBKFHC* IEEOLIHJOIK; // 0x58
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x60
		::System::Boolean _IsFinished_k__BackingField; // 0x68
		::System::Boolean OIEPFNCCGJP; // 0x69
		::System::Byte _padding0[0x2];
		::System::UInt32 JIJLLOLONLA; // 0x6C
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
