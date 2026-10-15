#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CaptureLocalPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define APEGJHDLEGN_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA7D70)
#define APEGJHDLEGN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BA7D80)
#define APEGJHDLEGN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BA7DC0)
#define APEGJHDLEGN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15BA7F20)
#define APEGJHDLEGN_TICK_OFFSET UNITYSDK_OFFSET(0x15BA7F70)

inline static constexpr unsigned int APEGJHDLEGN_TypeDefinitionIndex = 52635;

	class APEGJHDLEGN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CaptureLocalPlayer* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureLocalPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureLocalPlayer*))((::PBYTE)hIl2Cpp + APEGJHDLEGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APEGJHDLEGN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APEGJHDLEGN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APEGJHDLEGN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APEGJHDLEGN_TICK_OFFSET))(this, a1);
		}

	};
