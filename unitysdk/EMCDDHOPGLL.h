#pragma once
#include "unitysdk/unitysdk.h"
class CENEFPOMFKG;
namespace RPG::GameCore { class ST_RtMain_UseSkill; }
namespace RPG::GameCore { class TaskContext; }

#define EMCDDHOPGLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1552FE80)
#define EMCDDHOPGLL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1552FEB0)
#define EMCDDHOPGLL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15530230)
#define EMCDDHOPGLL_TICK_OFFSET UNITYSDK_OFFSET(0x155300C0)

inline static constexpr unsigned int EMCDDHOPGLL_TypeDefinitionIndex = 54149;

	class EMCDDHOPGLL
	{
	public:
		::CENEFPOMFKG* ECFHHFICCHG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_RtMain_UseSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_RtMain_UseSkill*))((::PBYTE)hIl2Cpp + EMCDDHOPGLL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCDDHOPGLL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMCDDHOPGLL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCDDHOPGLL_ONTASKRESET_OFFSET))(this);
		}

	};
