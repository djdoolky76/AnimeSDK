#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;

#define HBFLAIHOIIG_CTOR_OFFSET UNITYSDK_OFFSET(0x16B43F60)
#define HBFLAIHOIIG_PJJOMKDAGLN_OFFSET UNITYSDK_OFFSET(0x16B43F70)

inline static constexpr unsigned int HBFLAIHOIIG_TypeDefinitionIndex = 79756;

	class HBFLAIHOIIG : public ::System::Object
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::JMHHBMNIJJB* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + HBFLAIHOIIG_CTOR_OFFSET))(this, a1, a2);
		}

		::LPHINGPIEAJ* PJJOMKDAGLN(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + HBFLAIHOIIG_PJJOMKDAGLN_OFFSET))(this, a1, a2, a3);
		}

	};
