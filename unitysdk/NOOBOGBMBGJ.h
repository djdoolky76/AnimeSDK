#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;

#define NOOBOGBMBGJ_AMGNJMKPJEC_OFFSET UNITYSDK_OFFSET(0xC5E6350)
#define NOOBOGBMBGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC5E6340)

inline static constexpr unsigned int NOOBOGBMBGJ_TypeDefinitionIndex = 79792;

	class NOOBOGBMBGJ : public ::System::Object
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::JMHHBMNIJJB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::JMHHBMNIJJB*))((::PBYTE)hIl2Cpp + NOOBOGBMBGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 AMGNJMKPJEC(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NOOBOGBMBGJ_AMGNJMKPJEC_OFFSET))(this, a1, a2, a3);
		}

	};
