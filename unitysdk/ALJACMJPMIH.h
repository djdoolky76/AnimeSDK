#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeCharacterRowData; }
namespace RPG::GameCore { class TaskContext; }

#define ALJACMJPMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x15561BF0)
#define ALJACMJPMIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15561C20)

inline static constexpr unsigned int ALJACMJPMIH_TypeDefinitionIndex = 54916;

	class ALJACMJPMIH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeCharacterRowData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeCharacterRowData*))((::PBYTE)hIl2Cpp + ALJACMJPMIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJACMJPMIH_ONTASKBEGIN_OFFSET))(this);
		}

	};
