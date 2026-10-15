#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMusicCompositionStageStartEvent; }
namespace System { class Object; }

#define FAHINIEDBKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1567BB50)
#define FAHINIEDBKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1567BCF0)
#define FAHINIEDBKN_OEIGHILHALB_OFFSET UNITYSDK_OFFSET(0x1567BE40)
#define FAHINIEDBKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1567BBE0)
#define FAHINIEDBKN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1567BCA0)
#define FAHINIEDBKN_TICK_OFFSET UNITYSDK_OFFSET(0x1567BF50)

	class FAHINIEDBKN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitMusicCompositionStageStartEvent* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::KFELGAIGHAP* ILEMLGEGLCC; // 0x28
		::System::Boolean BHEIANKOOPN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMusicCompositionStageStartEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMusicCompositionStageStartEvent*))((::PBYTE)hIl2Cpp + FAHINIEDBKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHINIEDBKN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHINIEDBKN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHINIEDBKN_DISPOSE_OFFSET))(this);
		}

		::System::Void OEIGHILHALB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAHINIEDBKN_OEIGHILHALB_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FAHINIEDBKN_TICK_OFFSET))(this, a1);
		}

	};
