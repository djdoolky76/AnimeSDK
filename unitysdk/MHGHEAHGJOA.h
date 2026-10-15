#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterHeadAddLookAtCurve; }
namespace RPG::GameCore { class TaskContext; }

#define MHGHEAHGJOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB934240)
#define MHGHEAHGJOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB934480)
#define MHGHEAHGJOA_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB934230)
#define MHGHEAHGJOA_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB934590)
#define MHGHEAHGJOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB934250)
#define MHGHEAHGJOA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9344C0)
#define MHGHEAHGJOA_TICK_OFFSET UNITYSDK_OFFSET(0xB934510)

inline static constexpr unsigned int MHGHEAHGJOA_TypeDefinitionIndex = 58002;

	class MHGHEAHGJOA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AdventureCharacterController* NGCHOMCMKPI; // 0x20
		::RPG::GameCore::CharacterHeadAddLookAtCurve* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterHeadAddLookAtCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterHeadAddLookAtCurve*))((::PBYTE)hIl2Cpp + MHGHEAHGJOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGHEAHGJOA_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGHEAHGJOA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGHEAHGJOA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGHEAHGJOA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MHGHEAHGJOA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGHEAHGJOA_ONSKIP_OFFSET))(this);
		}

	};
