#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IAIDCGPPLFJ;
class LLFEPJOMMMP;
class PFHKPPECKKD;
namespace System { class String; }

#define JCNKGLMKDPE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1FD0A9E0)
#define JCNKGLMKDPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD0A970)
#define JCNKGLMKDPE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD0A880)
#define JCNKGLMKDPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0A790)

inline static constexpr unsigned int JCNKGLMKDPE_TypeDefinitionIndex = 28853;

class JCNKGLMKDPE : public ::System::Object
{
public:
	::LLFEPJOMMMP* PLPONJAKNEB; // 0x10
	::IAIDCGPPLFJ* HBPLINHBFFK; // 0x18
	::PFHKPPECKKD* JINCFIGEAKM; // 0x20

	::System::Void _ctor(::System::String* FHCKJMMOFJG, ::PFHKPPECKKD* PPGNHAPPHCH, ::LLFEPJOMMMP* GDNHHAOKLFG, ::IAIDCGPPLFJ* BHFBEHKHNPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::PFHKPPECKKD*, ::LLFEPJOMMMP*, ::IAIDCGPPLFJ*))((::PBYTE)hIl2Cpp + JCNKGLMKDPE__CTOR_OFFSET))(this, FHCKJMMOFJG, PPGNHAPPHCH, GDNHHAOKLFG, BHFBEHKHNPI);
	}

	::System::Void _ctor_1(::PFHKPPECKKD* PPGNHAPPHCH, ::LLFEPJOMMMP* GDNHHAOKLFG, ::IAIDCGPPLFJ* BHFBEHKHNPI)
	{
		return ((::System::Void(*)(::PVOID, ::PFHKPPECKKD*, ::LLFEPJOMMMP*, ::IAIDCGPPLFJ*))((::PBYTE)hIl2Cpp + JCNKGLMKDPE__CTOR_1_OFFSET))(this, PPGNHAPPHCH, GDNHHAOKLFG, BHFBEHKHNPI);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNKGLMKDPE_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNKGLMKDPE_DPIHOJBBGLA_OFFSET))(this);
	}
};
