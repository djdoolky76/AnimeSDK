#pragma once
#include "unitysdk/unitysdk.h"
class DEEGAJPPPBG;
namespace RPG::GameCore { class AdvSetNpcConicalVisionsConfig; }
namespace RPG::GameCore { class TaskContext; }

#define KLPJCAMEECK_CTOR_OFFSET UNITYSDK_OFFSET(0xB53B060)
#define KLPJCAMEECK_JPNKCHCPOAO_OFFSET UNITYSDK_OFFSET(0xB53B090)
#define KLPJCAMEECK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB53B140)

	class KLPJCAMEECK
	{
	public:
		::DEEGAJPPPBG* FAOEOJJKLLB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig*))((::PBYTE)hIl2Cpp + KLPJCAMEECK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JPNKCHCPOAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPJCAMEECK_JPNKCHCPOAO_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPJCAMEECK_ONTASKBEGIN_OFFSET))(this);
		}

	};
