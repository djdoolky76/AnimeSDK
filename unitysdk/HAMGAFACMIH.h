#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierAttachEffect; }
namespace RPG::GameCore { class TaskContext; }

#define HAMGAFACMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x15B93440)
#define HAMGAFACMIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B93450)
#define HAMGAFACMIH_MKGEJPKAPLO_OFFSET UNITYSDK_OFFSET(0x15B94510)
#define HAMGAFACMIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B93490)
#define HAMGAFACMIH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B94610)
#define HAMGAFACMIH_TICK_OFFSET UNITYSDK_OFFSET(0x15B94660)

	class HAMGAFACMIH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ModifierAttachEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifierAttachEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifierAttachEffect*))((::PBYTE)hIl2Cpp + HAMGAFACMIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMGAFACMIH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMGAFACMIH_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::MVector3 MKGEJPKAPLO(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + HAMGAFACMIH_MKGEJPKAPLO_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMGAFACMIH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAMGAFACMIH_TICK_OFFSET))(this, a1);
		}

	};
