#pragma once
#include "unitysdk/unitysdk.h"

class AFMMAIKKACF;
class EHGPNGPADCB;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FHNHJEBNBBJ_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x10F6C810)
#define FHNHJEBNBBJ_LGDMAAJFKNE_OFFSET UNITYSDK_OFFSET(0x10F6C960)
#define FHNHJEBNBBJ_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x10F6D5D0)
#define FHNHJEBNBBJ_MDKOPLNNBAD_OFFSET UNITYSDK_OFFSET(0x10F6D1A0)
#define FHNHJEBNBBJ_OOPOHHAKFBE_OFFSET UNITYSDK_OFFSET(0x10F6D540)
#define FHNHJEBNBBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10F6C800)

inline static constexpr unsigned int FHNHJEBNBBJ_TypeDefinitionIndex = 88065;

class FHNHJEBNBBJ
{
public:
	::AFMMAIKKACF* DAAAEJDBNFI; // 0x30
	::System::Boolean POMPGGGDAKP; // 0x38
	::System::Boolean NKJGAHMBCBK; // 0x39

	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + FHNHJEBNBBJ__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + FHNHJEBNBBJ_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LGDMAAJFKNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNHJEBNBBJ_LGDMAAJFKNE_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + FHNHJEBNBBJ_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* OOPOHHAKFBE(::System::Single KMKBJKOEBMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHNHJEBNBBJ_OOPOHHAKFBE_OFFSET))(this, KMKBJKOEBMF);
	}

	::System::Void MDKOPLNNBAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNHJEBNBBJ_MDKOPLNNBAD_OFFSET))(this);
	}
};
