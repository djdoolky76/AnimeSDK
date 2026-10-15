#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropCurveMoveStart; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define ILGIPIIOOCA_CTOR_OFFSET UNITYSDK_OFFSET(0x164B0EA0)
#define ILGIPIIOOCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164B0EB0)
#define ILGIPIIOOCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164B0F50)
#define ILGIPIIOOCA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164B0F00)
#define ILGIPIIOOCA_TICK_OFFSET UNITYSDK_OFFSET(0x164B1B70)

inline static constexpr unsigned int ILGIPIIOOCA_TypeDefinitionIndex = 58309;

	class ILGIPIIOOCA : public ::GELIALJDFBL
	{
	public:
		::System::String* IJMGEMMNNPI; // 0x18
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x20
		::RPG::GameCore::PropCurveMoveStart* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveStart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveStart*))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_TICK_OFFSET))(this, a1);
		}

	};
