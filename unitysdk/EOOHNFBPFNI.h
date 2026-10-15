#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchHandResetGame; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define EOOHNFBPFNI_CTOR_OFFSET UNITYSDK_OFFSET(0x155CB930)
#define EOOHNFBPFNI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155CB940)
#define EOOHNFBPFNI_GLHGOLCLHBJ_OFFSET UNITYSDK_OFFSET(0x155CC0A0)
#define EOOHNFBPFNI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155CBAB0)
#define EOOHNFBPFNI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155CB990)
#define EOOHNFBPFNI_TICK_OFFSET UNITYSDK_OFFSET(0x155CBA50)

	class EOOHNFBPFNI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchHandResetGame* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandResetGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandResetGame*))((::PBYTE)hIl2Cpp + EOOHNFBPFNI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOHNFBPFNI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EOOHNFBPFNI_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOHNFBPFNI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOHNFBPFNI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GLHGOLCLHBJ(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + EOOHNFBPFNI_GLHGOLCLHBJ_OFFSET))(this, a1, a2);
		}

	};
