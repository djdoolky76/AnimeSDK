#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class NGCOKAIKPHC;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }

#define ABADODLOIBB_CTOR_OFFSET UNITYSDK_OFFSET(0x18C93AD0)
#define ABADODLOIBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C93AE0)
#define ABADODLOIBB_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x18C94280)
#define ABADODLOIBB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C93CD0)
#define ABADODLOIBB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18C93BD0)
#define ABADODLOIBB_TICK_OFFSET UNITYSDK_OFFSET(0x18C94220)

inline static constexpr unsigned int ABADODLOIBB_TypeDefinitionIndex = 56816;

	class ABADODLOIBB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NGCOKAIKPHC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NGCOKAIKPHC*))((::PBYTE)hIl2Cpp + ABADODLOIBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABADODLOIBB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABADODLOIBB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABADODLOIBB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABADODLOIBB_TICK_OFFSET))(this, a1);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABADODLOIBB_JNIKOAEAEHB_OFFSET))(this);
		}

	};
