#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SceneGachaListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DFDOGNBKHGL_CTOR_OFFSET UNITYSDK_OFFSET(0xE825010)
#define DFDOGNBKHGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE825100)
#define DFDOGNBKHGL_JGEFLDPCOBH_OFFSET UNITYSDK_OFFSET(0xE8258D0)
#define DFDOGNBKHGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE825730)
#define DFDOGNBKHGL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE8253D0)
#define DFDOGNBKHGL_TICK_OFFSET UNITYSDK_OFFSET(0xE825580)

	class DFDOGNBKHGL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x20
		::KFELGAIGHAP* GAOBOFDMIDO; // 0x28
		::RPG::GameCore::SceneGachaListener* OFKGLJOAMLD; // 0x30
		::KFELGAIGHAP* GLNNENJGEJC; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SceneGachaListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SceneGachaListener*))((::PBYTE)hIl2Cpp + DFDOGNBKHGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDOGNBKHGL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDOGNBKHGL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFDOGNBKHGL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDOGNBKHGL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JGEFLDPCOBH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFDOGNBKHGL_JGEFLDPCOBH_OFFSET))(this, a1);
		}

	};
