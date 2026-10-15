#pragma once
#include "unitysdk/unitysdk.h"
class BCNALJEILCD;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define JAAKPINGFPI_CTOR_OFFSET UNITYSDK_OFFSET(0x16539EC0)
#define JAAKPINGFPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16539EF0)
#define JAAKPINGFPI__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x1653A090)
#define JAAKPINGFPI__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x1653A0A0)

	class JAAKPINGFPI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BCNALJEILCD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BCNALJEILCD*))((::PBYTE)hIl2Cpp + JAAKPINGFPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAKPINGFPI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAKPINGFPI__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + JAAKPINGFPI__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
