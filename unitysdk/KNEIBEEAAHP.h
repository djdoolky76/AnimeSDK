#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELEJCHBKNBF.h"

class GONKHDAJLNE;
namespace System { class String; }

#define KNEIBEEAAHP_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x17670430)
#define KNEIBEEAAHP_LGGIJKBLAIN_OFFSET UNITYSDK_OFFSET(0x176703A0)
#define KNEIBEEAAHP__CTOR_OFFSET UNITYSDK_OFFSET(0x17670390)

inline static constexpr unsigned int KNEIBEEAAHP_TypeDefinitionIndex = 54074;

class KNEIBEEAAHP : public ::ELEJCHBKNBF
{
public:
	::System::String* AIJBCIPAIAB; // 0x18

	::System::Void _ctor(::GONKHDAJLNE* AEJAMJDBHAM, ::System::String* GPLCKOICKJN)
	{
		return ((::System::Void(*)(::PVOID, ::GONKHDAJLNE*, ::System::String*))((::PBYTE)hIl2Cpp + KNEIBEEAAHP__CTOR_OFFSET))(this, AEJAMJDBHAM, GPLCKOICKJN);
	}

	::System::Void LGGIJKBLAIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEIBEEAAHP_LGGIJKBLAIN_OFFSET))(this);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEIBEEAAHP_HBPLINHBFFK_OFFSET))(this);
	}
};
