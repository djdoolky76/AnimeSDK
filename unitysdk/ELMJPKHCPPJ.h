#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class MJAOHLLPLGK;

#define ELMJPKHCPPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16472130)
#define ELMJPKHCPPJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16472150)

inline static constexpr unsigned int ELMJPKHCPPJ_TypeDefinitionIndex = 80007;

	class ELMJPKHCPPJ : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + ELMJPKHCPPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMJPKHCPPJ_EXECUTE_OFFSET))(this);
		}

	};
