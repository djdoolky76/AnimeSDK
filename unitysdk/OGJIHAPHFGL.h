#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"
class GMIFBFGDGJK;
class PBGNKMMDBGD;

#define OGJIHAPHFGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7A0510)

inline static constexpr unsigned int OGJIHAPHFGL_TypeDefinitionIndex = 37441;

	class OGJIHAPHFGL : public ::Entitas::Systems
	{
	public:
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x30
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x38
		::System::Void _ctor(::GMIFBFGDGJK* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMIFBFGDGJK*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + OGJIHAPHFGL_CTOR_OFFSET))(this, a1, a2);
		}

	};
