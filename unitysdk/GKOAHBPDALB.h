#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAndWaitMonopolyEvent; }
namespace System { class Object; }

#define GKOAHBPDALB_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA5980)
#define GKOAHBPDALB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AA5EA0)
#define GKOAHBPDALB_DOCDACGJEDE_OFFSET UNITYSDK_OFFSET(0x15AA60D0)
#define GKOAHBPDALB_JMGAIEIDGGH_OFFSET UNITYSDK_OFFSET(0x15AA62C0)
#define GKOAHBPDALB_KJDJLAKBPIL_OFFSET UNITYSDK_OFFSET(0x15AA59E0)
#define GKOAHBPDALB_NMKPHIGANPC_OFFSET UNITYSDK_OFFSET(0x15AA6040)
#define GKOAHBPDALB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AA5990)
#define GKOAHBPDALB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AA5DF0)
#define GKOAHBPDALB_TICK_OFFSET UNITYSDK_OFFSET(0x15AA5D90)

inline static constexpr unsigned int GKOAHBPDALB_TypeDefinitionIndex = 58769;

	class GKOAHBPDALB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerAndWaitMonopolyEvent* OFKGLJOAMLD; // 0x18
		::RPG::Client::LuaUIController* CPIIOIPAAKK; // 0x20
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
