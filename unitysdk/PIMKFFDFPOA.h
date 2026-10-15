#pragma once
#include "unitysdk/unitysdk.h"
class NMMMDIEGLEI;
namespace RPG::GameCore { class TaskContext; }

#define PIMKFFDFPOA_CTOR_OFFSET UNITYSDK_OFFSET(0xC271490)
#define PIMKFFDFPOA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC2714C0)
#define PIMKFFDFPOA_PICOOGCCFGD_OFFSET UNITYSDK_OFFSET(0xC271670)

	class PIMKFFDFPOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NMMMDIEGLEI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NMMMDIEGLEI*))((::PBYTE)hIl2Cpp + PIMKFFDFPOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMKFFDFPOA_EVALUATE_OFFSET))(this);
		}

		::System::Boolean PICOOGCCFGD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIMKFFDFPOA_PICOOGCCFGD_OFFSET))(this, a1);
		}

	};
