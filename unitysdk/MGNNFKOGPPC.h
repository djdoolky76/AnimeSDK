#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIFBFGDGJK;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace Entitas { class IGroup; }

#define MGNNFKOGPPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74C4C0)
#define MGNNFKOGPPC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C74C580)

	class MGNNFKOGPPC : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::Entitas::IGroup* JPKEBGGDFPL; // 0x18
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::GMIFBFGDGJK* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMIFBFGDGJK*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + MGNNFKOGPPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNNFKOGPPC_EXECUTE_OFFSET))(this);
		}

	};
