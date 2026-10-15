#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class SwordTrainingCheckCanEnterGame; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPDHKDJKKJC_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A2490)
#define BPDHKDJKKJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1A2A50)
#define BPDHKDJKKJC_DLAFDJDIABG_OFFSET UNITYSDK_OFFSET(0xC1A2720)
#define BPDHKDJKKJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1A25A0)
#define BPDHKDJKKJC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC1A2970)
#define BPDHKDJKKJC_TICK_OFFSET UNITYSDK_OFFSET(0xC1A2B30)

	class BPDHKDJKKJC : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* FJLIEJHPNOB; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* DLJHJKLMADI; // 0x28
		::RPG::GameCore::SwordTrainingCheckCanEnterGame* OFKGLJOAMLD; // 0x30
		::KFELGAIGHAP* CHCKAOKBLGA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingCheckCanEnterGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingCheckCanEnterGame*))((::PBYTE)hIl2Cpp + BPDHKDJKKJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDHKDJKKJC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* DLAFDJDIABG()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDHKDJKKJC_DLAFDJDIABG_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDHKDJKKJC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDHKDJKKJC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPDHKDJKKJC_TICK_OFFSET))(this, a1);
		}

	};
