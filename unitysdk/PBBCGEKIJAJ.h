#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class HardLevelGroupRow; }
namespace RPG::GameCore { class SetDynamicValueByHardLevelProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define PBBCGEKIJAJ_AOFHMOGBIBH_OFFSET UNITYSDK_OFFSET(0xBFDA220)
#define PBBCGEKIJAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD9EF0)
#define PBBCGEKIJAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFD9FD0)

inline static constexpr unsigned int PBBCGEKIJAJ_TypeDefinitionIndex = 55447;

	class PBBCGEKIJAJ
	{
	public:
		::RPG::GameCore::StringHash PGNGOCPHJBJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByHardLevelProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByHardLevelProperty*))((::PBYTE)hIl2Cpp + PBBCGEKIJAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBCGEKIJAJ_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint AOFHMOGBIBH(::RPG::GameCore::HardLevelGroupRow* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::HardLevelGroupRow*, ::System::String*))((::PBYTE)hIl2Cpp + PBBCGEKIJAJ_AOFHMOGBIBH_OFFSET))(this, a1, a2);
		}

	};
