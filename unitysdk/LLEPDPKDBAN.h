#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNLEEFGEKFB.h"
#include "unitysdk/System/Object.h"
class GMIFBFGDGJK;
class PBGNKMMDBGD;

#define LLEPDPKDBAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC1E400)
#define LLEPDPKDBAN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AC1E490)
#define LLEPDPKDBAN_FINPIFMJJBM_OFFSET UNITYSDK_OFFSET(0x1AC210E0)

inline static constexpr unsigned int LLEPDPKDBAN_TypeDefinitionIndex = 38370;

	class LLEPDPKDBAN : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x18
		::CNLEEFGEKFB PFEAMLCIMDB; // 0x20
		::CNLEEFGEKFB GMLCPMIOAEF; // 0x34
		::System::Void _ctor(::GMIFBFGDGJK* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMIFBFGDGJK*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + LLEPDPKDBAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEPDPKDBAN_EXECUTE_OFFSET))(this);
		}

		::System::Void FINPIFMJJBM(::CNLEEFGEKFB a1, ::CNLEEFGEKFB a2)
		{
			return ((::System::Void(*)(::PVOID, ::CNLEEFGEKFB, ::CNLEEFGEKFB))((::PBYTE)hIl2Cpp + LLEPDPKDBAN_FINPIFMJJBM_OFFSET))(this, a1, a2);
		}

	};
