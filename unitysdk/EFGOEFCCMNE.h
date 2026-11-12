#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class FinishRogueAeonTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define EFGOEFCCMNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1480D310)
#define EFGOEFCCMNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1480D320)
#define EFGOEFCCMNE_IIDFGKLDGDD_OFFSET UNITYSDK_OFFSET(0x1480D4D0)
#define EFGOEFCCMNE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1480D360)
#define EFGOEFCCMNE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1480D420)
#define EFGOEFCCMNE_TICK_OFFSET UNITYSDK_OFFSET(0x1480D470)

inline static constexpr unsigned int EFGOEFCCMNE_TypeDefinitionIndex = 59362;

	class EFGOEFCCMNE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::FinishRogueAeonTalk* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishRogueAeonTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishRogueAeonTalk*))((::PBYTE)hIl2Cpp + EFGOEFCCMNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGOEFCCMNE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGOEFCCMNE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGOEFCCMNE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFGOEFCCMNE_TICK_OFFSET))(this, a1);
		}

		::System::Void IIDFGKLDGDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFGOEFCCMNE_IIDFGKLDGDD_OFFSET))(this, a1);
		}

	};
