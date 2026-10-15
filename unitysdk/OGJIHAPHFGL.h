#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"
class GMIFBFGDGJK;
class PBGNKMMDBGD;

#define OGJIHAPHFGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CE700)

	class OGJIHAPHFGL : public ::Entitas::Systems
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x30
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x38
		::System::Void _ctor(::GMIFBFGDGJK* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMIFBFGDGJK*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + OGJIHAPHFGL_CTOR_OFFSET))(this, a1, a2);
		}

	};
