#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ByTargetListAny; }
namespace RPG::GameCore { class TaskContext; }

#define FNDLLJDDGAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1586B2C0)
#define FNDLLJDDGAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1586B700)
#define FNDLLJDDGAN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1586B390)

	class FNDLLJDDGAN
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetListAny* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetListAny*))((::PBYTE)hIl2Cpp + FNDLLJDDGAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDLLJDDGAN_EVALUATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDLLJDDGAN_DISPOSE_OFFSET))(this);
		}

	};
