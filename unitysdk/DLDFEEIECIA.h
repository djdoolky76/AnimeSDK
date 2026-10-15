#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ByTargetListAll; }
namespace RPG::GameCore { class TaskContext; }

#define DLDFEEIECIA_CTOR_OFFSET UNITYSDK_OFFSET(0xF898700)
#define DLDFEEIECIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF898B40)
#define DLDFEEIECIA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF8987D0)

	class DLDFEEIECIA
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetListAll* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetListAll*))((::PBYTE)hIl2Cpp + DLDFEEIECIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDFEEIECIA_EVALUATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDFEEIECIA_DISPOSE_OFFSET))(this);
		}

	};
