#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLevelGraphFinish; }

#define HFFCKNLCHPM_CTOR_OFFSET UNITYSDK_OFFSET(0x15C6A0A0)
#define HFFCKNLCHPM_DDHMDAFEGCO_OFFSET UNITYSDK_OFFSET(0x15C6A280)
#define HFFCKNLCHPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C6A130)
#define HFFCKNLCHPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C6A300)
#define HFFCKNLCHPM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C6A4E0)
#define HFFCKNLCHPM_TICK_OFFSET UNITYSDK_OFFSET(0x15C6A530)

inline static constexpr unsigned int HFFCKNLCHPM_TypeDefinitionIndex = 56481;

	class HFFCKNLCHPM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitLevelGraphFinish* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* ECMFFNPIHGD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Boolean HFDCEKACNAJ; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLevelGraphFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLevelGraphFinish*))((::PBYTE)hIl2Cpp + HFFCKNLCHPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCKNLCHPM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCKNLCHPM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCKNLCHPM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFFCKNLCHPM_TICK_OFFSET))(this, a1);
		}

		::System::Void DDHMDAFEGCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCKNLCHPM_DDHMDAFEGCO_OFFSET))(this);
		}

	};
