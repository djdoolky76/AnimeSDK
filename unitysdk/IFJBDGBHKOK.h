#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::GameCore { class ConfirmCheckpointRecover; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define IFJBDGBHKOK_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1ACE0)
#define IFJBDGBHKOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F1AD30)
#define IFJBDGBHKOK_LJMFCBPLEEC_OFFSET UNITYSDK_OFFSET(0x15F1AFB0)
#define IFJBDGBHKOK_LOOEOMNKGHD_OFFSET UNITYSDK_OFFSET(0x15F1B180)
#define IFJBDGBHKOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F1ADD0)
#define IFJBDGBHKOK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F1B370)
#define IFJBDGBHKOK_TICK_OFFSET UNITYSDK_OFFSET(0x15F1AD70)

inline static constexpr unsigned int IFJBDGBHKOK_TypeDefinitionIndex = 58035;

	class IFJBDGBHKOK : public ::GELIALJDFBL
	{
	public:
		::KDJNAAOFMMJ* OMDKFBJCHBO; // 0x18
		::KDJNAAOFMMJ* GDLFJGENBDC; // 0x20
		::RPG::GameCore::ConfirmCheckpointRecover* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConfirmCheckpointRecover* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConfirmCheckpointRecover*))((::PBYTE)hIl2Cpp + IFJBDGBHKOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJBDGBHKOK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFJBDGBHKOK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJBDGBHKOK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void LJMFCBPLEEC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFJBDGBHKOK_LJMFCBPLEEC_OFFSET))(this, a1);
		}

		::System::Void LOOEOMNKGHD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFJBDGBHKOK_LOOEOMNKGHD_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJBDGBHKOK_ONTASKRESET_OFFSET))(this);
		}

	};
