#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIFBFGDGJK;
class PBGNKMMDBGD;

#define MGIELAIHNCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74AF70)
#define MGIELAIHNCP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C74AF80)

	class MGIELAIHNCP : public ::System::Object
	{
	public:
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x10
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::GMIFBFGDGJK* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMIFBFGDGJK*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + MGIELAIHNCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIELAIHNCP_EXECUTE_OFFSET))(this);
		}

	};
