#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class SetDynamicValueByRandom; }
namespace RPG::GameCore { class TaskContext; }

#define MJJBGMMDMFC_CTOR_OFFSET UNITYSDK_OFFSET(0xB96CF60)
#define MJJBGMMDMFC_DKBCIEFDJEO_OFFSET UNITYSDK_OFFSET(0xB96D150)
#define MJJBGMMDMFC_KILJOMKAMMM_OFFSET UNITYSDK_OFFSET(0xB96D870)
#define MJJBGMMDMFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB96D040)

	class MJJBGMMDMFC
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByRandom* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByRandom*))((::PBYTE)hIl2Cpp + MJJBGMMDMFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJBGMMDMFC_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint KILJOMKAMMM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJBGMMDMFC_KILJOMKAMMM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint DKBCIEFDJEO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJBGMMDMFC_DKBCIEFDJEO_OFFSET))(this);
		}

	};
