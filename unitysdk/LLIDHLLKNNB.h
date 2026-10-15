#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetBPSortType; }
namespace RPG::GameCore { class TaskContext; }

#define LLIDHLLKNNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB770450)
#define LLIDHLLKNNB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB770480)

inline static constexpr unsigned int LLIDHLLKNNB_TypeDefinitionIndex = 55350;

	class LLIDHLLKNNB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBPSortType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBPSortType*))((::PBYTE)hIl2Cpp + LLIDHLLKNNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIDHLLKNNB_ONTASKBEGIN_OFFSET))(this);
		}

	};
