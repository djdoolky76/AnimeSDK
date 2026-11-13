#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AdvWaitTickValueFinish; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define ILJHACODHLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A39B0)
#define ILJHACODHLL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B5A3A30)
#define ILJHACODHLL_ELMNLDCPIMP_OFFSET UNITYSDK_OFFSET(0x1B5A3E20)
#define ILJHACODHLL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B5A3C50)
#define ILJHACODHLL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B5A3B80)
#define ILJHACODHLL_TICK_OFFSET UNITYSDK_OFFSET(0x1B5A3D80)

inline static constexpr unsigned int ILJHACODHLL_TypeDefinitionIndex = 59132;

	class ILJHACODHLL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x20
		::System::String* IJMGEMMNNPI; // 0x28
		::RPG::GameCore::AdvWaitTickValueFinish* OFKGLJOAMLD; // 0x30
		::KFELGAIGHAP* HFOFIODMFGB; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvWaitTickValueFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvWaitTickValueFinish*))((::PBYTE)hIl2Cpp + ILJHACODHLL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJHACODHLL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJHACODHLL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJHACODHLL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILJHACODHLL_TICK_OFFSET))(this, a1);
		}

		::System::Void ELMNLDCPIMP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILJHACODHLL_ELMNLDCPIMP_OFFSET))(this, a1);
		}

	};
