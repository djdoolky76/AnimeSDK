#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class MJAOHLLPLGK;

#define IIBLGOAONFH_CTOR_OFFSET UNITYSDK_OFFSET(0x193C9980)
#define IIBLGOAONFH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x193C99A0)
#define IIBLGOAONFH_NGLKEPJHGMB_OFFSET UNITYSDK_OFFSET(0x193C9D30)
#define IIBLGOAONFH_OJKKDBDLEFM_OFFSET UNITYSDK_OFFSET(0x193C9C80)

inline static constexpr unsigned int IIBLGOAONFH_TypeDefinitionIndex = 80021;

	class IIBLGOAONFH : public ::System::Object
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + IIBLGOAONFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBLGOAONFH_EXECUTE_OFFSET))(this);
		}

		::System::Single NGLKEPJHGMB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIBLGOAONFH_NGLKEPJHGMB_OFFSET))(this, a1);
		}

		::System::Void OJKKDBDLEFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBLGOAONFH_OJKKDBDLEFM_OFFSET))(this);
		}

	};
