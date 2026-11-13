#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CDLPFFIKLOC;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }

#define ADAMNPFAKJN_CTOR_OFFSET UNITYSDK_OFFSET(0x182A3E70)
#define ADAMNPFAKJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x182A3E80)
#define ADAMNPFAKJN_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x182A4320)
#define ADAMNPFAKJN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x182A4070)
#define ADAMNPFAKJN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x182A3F70)
#define ADAMNPFAKJN_TICK_OFFSET UNITYSDK_OFFSET(0x182A42C0)

inline static constexpr unsigned int ADAMNPFAKJN_TypeDefinitionIndex = 56812;

	class ADAMNPFAKJN : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		// static const ::System::String* HDDMIJDNFJL; // 0x0
		// static const ::System::String* KLHOOGDAANP; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CDLPFFIKLOC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CDLPFFIKLOC*))((::PBYTE)hIl2Cpp + ADAMNPFAKJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAMNPFAKJN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAMNPFAKJN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAMNPFAKJN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADAMNPFAKJN_TICK_OFFSET))(this, a1);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAMNPFAKJN_JNIKOAEAEHB_OFFSET))(this);
		}

	};
