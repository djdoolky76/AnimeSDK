#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterHeadLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CKPJNGKPKGG_CTOR_OFFSET UNITYSDK_OFFSET(0xD76FCA0)
#define CKPJNGKPKGG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD770370)
#define CKPJNGKPKGG_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xD76FC90)
#define CKPJNGKPKGG_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD7704D0)
#define CKPJNGKPKGG_ONSKIP_OFFSET UNITYSDK_OFFSET(0xD770480)
#define CKPJNGKPKGG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD76FCB0)
#define CKPJNGKPKGG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD7703B0)
#define CKPJNGKPKGG_TICK_OFFSET UNITYSDK_OFFSET(0xD770400)

inline static constexpr unsigned int CKPJNGKPKGG_TypeDefinitionIndex = 58003;

	class CKPJNGKPKGG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdventureCharacterController* NGCHOMCMKPI; // 0x18
		::RPG::GameCore::CharacterHeadLookAt* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterHeadLookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterHeadLookAt*))((::PBYTE)hIl2Cpp + CKPJNGKPKGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPJNGKPKGG_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPJNGKPKGG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPJNGKPKGG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPJNGKPKGG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKPJNGKPKGG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPJNGKPKGG_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKPJNGKPKGG_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

	};
