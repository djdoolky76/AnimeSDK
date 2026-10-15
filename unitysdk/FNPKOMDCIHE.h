#pragma once
#include "unitysdk/unitysdk.h"
class PMDAHIHMGFG;
namespace RPG::GameCore { class TaskContext; }

#define FNPKOMDCIHE_CTOR_OFFSET UNITYSDK_OFFSET(0x158DC160)
#define FNPKOMDCIHE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x158DC190)
#define FNPKOMDCIHE_OCGLBHOILBJ_OFFSET UNITYSDK_OFFSET(0x158DC610)

	class FNPKOMDCIHE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PMDAHIHMGFG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PMDAHIHMGFG*))((::PBYTE)hIl2Cpp + FNPKOMDCIHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPKOMDCIHE_EVALUATE_OFFSET))(this);
		}

		::System::Boolean OCGLBHOILBJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FNPKOMDCIHE_OCGLBHOILBJ_OFFSET))(this, a1, a2);
		}

	};
