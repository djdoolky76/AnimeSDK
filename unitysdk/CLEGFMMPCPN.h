#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByIsWeakTypeActive; }
namespace RPG::GameCore { class TaskContext; }

#define CLEGFMMPCPN_CTOR_OFFSET UNITYSDK_OFFSET(0xD77B850)
#define CLEGFMMPCPN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD77B880)

	class CLEGFMMPCPN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsWeakTypeActive*))((::PBYTE)hIl2Cpp + CLEGFMMPCPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEGFMMPCPN_EVALUATE_OFFSET))(this);
		}

	};
