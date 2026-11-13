#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;

#define HBFLAIHOIIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C16D9E0)
#define HBFLAIHOIIG_PJJOMKDAGLN_OFFSET UNITYSDK_OFFSET(0x1C16D9F0)

inline static constexpr unsigned int HBFLAIHOIIG_TypeDefinitionIndex = 79755;

	class HBFLAIHOIIG : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::JMHHBMNIJJB* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + HBFLAIHOIIG_CTOR_OFFSET))(this, a1, a2);
		}

		::LPHINGPIEAJ* PJJOMKDAGLN(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + HBFLAIHOIIG_PJJOMKDAGLN_OFFSET))(this, a1, a2, a3);
		}

	};
