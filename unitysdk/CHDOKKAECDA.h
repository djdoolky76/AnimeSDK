#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class MJAOHLLPLGK;

#define CHDOKKAECDA_CTOR_OFFSET UNITYSDK_OFFSET(0xD640BE0)
#define CHDOKKAECDA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD640C00)

inline static constexpr unsigned int CHDOKKAECDA_TypeDefinitionIndex = 79990;

	class CHDOKKAECDA : public ::System::Object
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + CHDOKKAECDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDOKKAECDA_EXECUTE_OFFSET))(this);
		}

	};
