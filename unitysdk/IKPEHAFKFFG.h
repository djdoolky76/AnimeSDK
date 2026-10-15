#pragma once
#include "unitysdk/unitysdk.h"
class DEEGAJPPPBG;
namespace RPG::GameCore { class AdvSetNpcVisionsConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VisionBaseConfig; }

#define IKPEHAFKFFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1649F480)
#define IKPEHAFKFFG_JPNKCHCPOAO_OFFSET UNITYSDK_OFFSET(0x1649F720)
#define IKPEHAFKFFG_MGGOJFGNIGH_OFFSET UNITYSDK_OFFSET(0x1649F4B0)
#define IKPEHAFKFFG_MJILALHMOJB_OFFSET UNITYSDK_OFFSET(0x1649F630)
#define IKPEHAFKFFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1649F7C0)

inline static constexpr unsigned int IKPEHAFKFFG_TypeDefinitionIndex = 52501;

	class IKPEHAFKFFG
	{
	public:
		::DEEGAJPPPBG* FAOEOJJKLLB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetNpcVisionsConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetNpcVisionsConfig*))((::PBYTE)hIl2Cpp + IKPEHAFKFFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MGGOJFGNIGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPEHAFKFFG_MGGOJFGNIGH_OFFSET))(this);
		}

		::System::Void JPNKCHCPOAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPEHAFKFFG_JPNKCHCPOAO_OFFSET))(this);
		}

		::System::Void MJILALHMOJB(::RPG::GameCore::VisionBaseConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VisionBaseConfig*))((::PBYTE)hIl2Cpp + IKPEHAFKFFG_MJILALHMOJB_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPEHAFKFFG_ONTASKBEGIN_OFFSET))(this);
		}

	};
