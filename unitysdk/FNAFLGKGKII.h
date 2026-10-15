#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraph.h"
class JBFFCBPMKEF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace System { class String; }

#define FNAFLGKGKII_CTOR_OFFSET UNITYSDK_OFFSET(0x15867EB0)
#define FNAFLGKGKII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15867F00)
#define FNAFLGKGKII_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x15867F60)
#define FNAFLGKGKII_GET_GRAPHID_OFFSET UNITYSDK_OFFSET(0x15867F80)
#define FNAFLGKGKII_SET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x15867F70)

	class FNAFLGKGKII : public ::RPG::GameCore::LevelGraph
	{
	public:
		::JBFFCBPMKEF* _CustomData_k__BackingField; // 0x50
		::System::Int32 _GraphID_k__BackingField; // 0x58
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::LevelGraphConfig* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*))((::PBYTE)hIl2Cpp + FNAFLGKGKII_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFLGKGKII_DISPOSE_OFFSET))(this);
		}

		::JBFFCBPMKEF* get_CustomData()
		{
			return ((::JBFFCBPMKEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFLGKGKII_GET_CUSTOMDATA_OFFSET))(this);
		}

		::System::Void set_CustomData(::JBFFCBPMKEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFFCBPMKEF*))((::PBYTE)hIl2Cpp + FNAFLGKGKII_SET_CUSTOMDATA_OFFSET))(this, a1);
		}

		::System::Int32 get_GraphID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFLGKGKII_GET_GRAPHID_OFFSET))(this);
		}

	};
