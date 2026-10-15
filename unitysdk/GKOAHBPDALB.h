#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAndWaitMonopolyEvent; }
namespace System { class Object; }

#define GKOAHBPDALB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A99DF0)
#define GKOAHBPDALB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A9A310)
#define GKOAHBPDALB_DOCDACGJEDE_OFFSET UNITYSDK_OFFSET(0x15A9A540)
#define GKOAHBPDALB_JMGAIEIDGGH_OFFSET UNITYSDK_OFFSET(0x15A9A730)
#define GKOAHBPDALB_KJDJLAKBPIL_OFFSET UNITYSDK_OFFSET(0x15A99E50)
#define GKOAHBPDALB_NMKPHIGANPC_OFFSET UNITYSDK_OFFSET(0x15A9A4B0)
#define GKOAHBPDALB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A99E00)
#define GKOAHBPDALB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A9A260)
#define GKOAHBPDALB_TICK_OFFSET UNITYSDK_OFFSET(0x15A9A200)

inline static constexpr unsigned int GKOAHBPDALB_TypeDefinitionIndex = 58769;

	class GKOAHBPDALB : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::LuaUIController* CPIIOIPAAKK; // 0x18
		::RPG::GameCore::TriggerAndWaitMonopolyEvent* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAndWaitMonopolyEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAndWaitMonopolyEvent*))((::PBYTE)hIl2Cpp + GKOAHBPDALB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOAHBPDALB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKOAHBPDALB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOAHBPDALB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOAHBPDALB_DISPOSE_OFFSET))(this);
		}

		::System::Void NMKPHIGANPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOAHBPDALB_NMKPHIGANPC_OFFSET))(this);
		}

		::System::Void KJDJLAKBPIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOAHBPDALB_KJDJLAKBPIL_OFFSET))(this);
		}

		::System::Void JMGAIEIDGGH(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + GKOAHBPDALB_JMGAIEIDGGH_OFFSET))(this, a1, a2);
		}

		::System::Void DOCDACGJEDE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKOAHBPDALB_DOCDACGJEDE_OFFSET))(this, a1);
		}

	};
