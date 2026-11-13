#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SceneGachaListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DFDOGNBKHGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B38A0B0)
#define DFDOGNBKHGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B38A1A0)
#define DFDOGNBKHGL_JGEFLDPCOBH_OFFSET UNITYSDK_OFFSET(0x1B38A8B0)
#define DFDOGNBKHGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B38A710)
#define DFDOGNBKHGL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B38A470)
#define DFDOGNBKHGL_TICK_OFFSET UNITYSDK_OFFSET(0x1B38A620)

inline static constexpr unsigned int DFDOGNBKHGL_TypeDefinitionIndex = 59770;

	class DFDOGNBKHGL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x18
		::RPG::GameCore::SceneGachaListener* OFKGLJOAMLD; // 0x20
		::KFELGAIGHAP* GAOBOFDMIDO; // 0x28
		::KFELGAIGHAP* GLNNENJGEJC; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
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
