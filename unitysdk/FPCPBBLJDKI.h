#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENDBKLKOBFP;
class IFBFJDCECML;
class PBGNKMMDBGD;

#define FPCPBBLJDKI_CFKHEAJHMHJ_OFFSET UNITYSDK_OFFSET(0x1C5F9630)
#define FPCPBBLJDKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F91F0)
#define FPCPBBLJDKI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C5F9200)

inline static constexpr unsigned int FPCPBBLJDKI_TypeDefinitionIndex = 37447;

	class FPCPBBLJDKI : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + FPCPBBLJDKI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCPBBLJDKI_EXECUTE_OFFSET))(this);
		}

		::System::Void CFKHEAJHMHJ(::IFBFJDCECML* a1, ::ENDBKLKOBFP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::ENDBKLKOBFP*))((::PBYTE)hIl2Cpp + FPCPBBLJDKI_CFKHEAJHMHJ_OFFSET))(this, a1, a2);
		}

	};
