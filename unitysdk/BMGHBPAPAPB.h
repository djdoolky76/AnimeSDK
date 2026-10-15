#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::GameCore { class GridFightWaitOpenOrb; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define BMGHBPAPAPB_AIJLDADIBNM_OFFSET UNITYSDK_OFFSET(0xBDADC10)
#define BMGHBPAPAPB_CTOR_OFFSET UNITYSDK_OFFSET(0xBDAD8D0)
#define BMGHBPAPAPB_IEOGLIENPMN_OFFSET UNITYSDK_OFFSET(0xBDADB00)
#define BMGHBPAPAPB_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xBDADBC0)
#define BMGHBPAPAPB_LNNPGNJDEKN_OFFSET UNITYSDK_OFFSET(0xBDADD80)
#define BMGHBPAPAPB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDAD8E0)
#define BMGHBPAPAPB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBDADCD0)
#define BMGHBPAPAPB___ONGRIDFIGHTREMOVEORB_B__6_0_OFFSET UNITYSDK_OFFSET(0xBDAE170)

	class BMGHBPAPAPB : public ::CMMNJAMJJCN
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::RPG::GameCore::GridFightWaitOpenOrb* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitOpenOrb* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitOpenOrb*))((::PBYTE)hIl2Cpp + BMGHBPAPAPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHBPAPAPB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHBPAPAPB_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHBPAPAPB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void IEOGLIENPMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHBPAPAPB_IEOGLIENPMN_OFFSET))(this);
		}

		::System::Void AIJLDADIBNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHBPAPAPB_AIJLDADIBNM_OFFSET))(this);
		}

		::System::Void LNNPGNJDEKN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMGHBPAPAPB_LNNPGNJDEKN_OFFSET))(this, a1);
		}

		::System::Boolean __OnGridFightRemoveOrb_b__6_0(::RPG::Client::GridFightOrbEntityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + BMGHBPAPAPB___ONGRIDFIGHTREMOVEORB_B__6_0_OFFSET))(this, a1);
		}

	};
