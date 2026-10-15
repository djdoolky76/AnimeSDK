#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueStart; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HDJFAFEBFLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C37760)
#define HDJFAFEBFLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C37770)
#define HDJFAFEBFLB_FAFAHCKDCCG_OFFSET UNITYSDK_OFFSET(0x15C37C40)
#define HDJFAFEBFLB_FMCFMLJMNPF_OFFSET UNITYSDK_OFFSET(0x15C38250)
#define HDJFAFEBFLB_JJAALDDJDIE_OFFSET UNITYSDK_OFFSET(0x15C37D60)
#define HDJFAFEBFLB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C37880)
#define HDJFAFEBFLB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C37B90)
#define HDJFAFEBFLB_TICK_OFFSET UNITYSDK_OFFSET(0x15C37BE0)

	class HDJFAFEBFLB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RogueStart* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueStart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueStart*))((::PBYTE)hIl2Cpp + HDJFAFEBFLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJFAFEBFLB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJFAFEBFLB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJFAFEBFLB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HDJFAFEBFLB_TICK_OFFSET))(this, a1);
		}

		::System::Void FAFAHCKDCCG(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HDJFAFEBFLB_FAFAHCKDCCG_OFFSET))(this, a1, a2);
		}

		::System::Void JJAALDDJDIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJFAFEBFLB_JJAALDDJDIE_OFFSET))(this);
		}

		::System::Void FMCFMLJMNPF(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HDJFAFEBFLB_FMCFMLJMNPF_OFFSET))(this, a1, a2);
		}

	};
