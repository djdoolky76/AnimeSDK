#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class ScalePropByCollectionProgress; }
namespace RPG::GameCore { class TaskContext; }

#define JEFACKHBIKH_AJMHFCJAKEJ_OFFSET UNITYSDK_OFFSET(0xB964B20)
#define JEFACKHBIKH_CTOR_OFFSET UNITYSDK_OFFSET(0xB964860)
#define JEFACKHBIKH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB964890)

inline static constexpr unsigned int JEFACKHBIKH_TypeDefinitionIndex = 59769;

	class JEFACKHBIKH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScalePropByCollectionProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScalePropByCollectionProgress*))((::PBYTE)hIl2Cpp + JEFACKHBIKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFACKHBIKH_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::Client::QuestData* AJMHFCJAKEJ()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFACKHBIKH_AJMHFCJAKEJ_OFFSET))(this);
		}

	};
