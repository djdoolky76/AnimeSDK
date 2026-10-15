#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MemberData; }
namespace RPG::GameCore { class AdventureRevivePlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CDKGGIEGJJK_CTOR_OFFSET UNITYSDK_OFFSET(0xC768EC0)
#define CDKGGIEGJJK_NHAKPCPMNFF_OFFSET UNITYSDK_OFFSET(0xC7694C0)
#define CDKGGIEGJJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC768EF0)

inline static constexpr unsigned int CDKGGIEGJJK_TypeDefinitionIndex = 57912;

	class CDKGGIEGJJK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureRevivePlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureRevivePlayer*))((::PBYTE)hIl2Cpp + CDKGGIEGJJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKGGIEGJJK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void NHAKPCPMNFF(::RPG::Client::MemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + CDKGGIEGJJK_NHAKPCPMNFF_OFFSET))(this, a1);
		}

	};
