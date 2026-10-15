#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveAdventureModifier; }
namespace RPG::GameCore { class TaskContext; }

#define MLJKDOEPAFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB9ABBD0)
#define MLJKDOEPAFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9ABC00)

inline static constexpr unsigned int MLJKDOEPAFN_TypeDefinitionIndex = 58383;

	class MLJKDOEPAFN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveAdventureModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveAdventureModifier*))((::PBYTE)hIl2Cpp + MLJKDOEPAFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJKDOEPAFN_ONTASKBEGIN_OFFSET))(this);
		}

	};
