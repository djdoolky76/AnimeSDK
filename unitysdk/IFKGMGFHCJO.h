#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddEntityToRelationGroup; }
namespace RPG::GameCore { class TaskContext; }

#define IFKGMGFHCJO_CTOR_OFFSET UNITYSDK_OFFSET(0x15F13070)
#define IFKGMGFHCJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F130A0)

inline static constexpr unsigned int IFKGMGFHCJO_TypeDefinitionIndex = 55022;

	class IFKGMGFHCJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddEntityToRelationGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddEntityToRelationGroup*))((::PBYTE)hIl2Cpp + IFKGMGFHCJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKGMGFHCJO_ONTASKBEGIN_OFFSET))(this);
		}

	};
