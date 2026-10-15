#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByRollShopResult; }
namespace RPG::GameCore { class TaskContext; }

#define EHDEEBKGHJD_CTOR_OFFSET UNITYSDK_OFFSET(0x154A3F20)
#define EHDEEBKGHJD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x154A3F50)

	class EHDEEBKGHJD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByRollShopResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByRollShopResult*))((::PBYTE)hIl2Cpp + EHDEEBKGHJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDEEBKGHJD_EVALUATE_OFFSET))(this);
		}

	};
