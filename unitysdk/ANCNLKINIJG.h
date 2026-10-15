#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RogueTournCollectionInfo; }
namespace RPG::GameCore { class ByIsRogueTournCollectionDisplayingCollection; }
namespace RPG::GameCore { class TaskContext; }

#define ANCNLKINIJG_CTOR_OFFSET UNITYSDK_OFFSET(0x15586E80)
#define ANCNLKINIJG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15586EB0)
#define ANCNLKINIJG_OMJDPKMFKOA_OFFSET UNITYSDK_OFFSET(0x155872D0)

inline static constexpr unsigned int ANCNLKINIJG_TypeDefinitionIndex = 57984;

	class ANCNLKINIJG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*))((::PBYTE)hIl2Cpp + ANCNLKINIJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCNLKINIJG_EVALUATE_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournCollectionInfo* OMJDPKMFKOA()
		{
			return ((::RPG::Client::RogueTournCollectionInfo*(*)())((::PBYTE)hIl2Cpp + ANCNLKINIJG_OMJDPKMFKOA_OFFSET))();
		}

	};
