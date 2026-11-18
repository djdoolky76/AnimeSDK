#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;
class KFMDJFHBBAD;
class OBKNEEOLOPB;
class PNJDGHBEMLK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMFFNMNPMBI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15C1EF60)
#define IMFFNMNPMBI_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x15C1EFA0)
#define IMFFNMNPMBI_HCJGGHLFKKE_OFFSET UNITYSDK_OFFSET(0x15C1F010)
#define IMFFNMNPMBI_LCGFOBOHNBL_OFFSET UNITYSDK_OFFSET(0x15C1F2F0)
#define IMFFNMNPMBI_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x15C1F340)
#define IMFFNMNPMBI__CTOR_OFFSET UNITYSDK_OFFSET(0x15C1EE10)

inline static constexpr unsigned int IMFFNMNPMBI_TypeDefinitionIndex = 83960;

class IMFFNMNPMBI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KFMDJFHBBAD*>* BFJONIPNMBI; // 0x10
	::OBKNEEOLOPB* EKHAPLAFMCB; // 0x18
	::FBAMLABJMKF* GFFCBBDKCGC; // 0x20

	::System::Void _ctor(::FBAMLABJMKF* COBEJJHGMPO)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + IMFFNMNPMBI__CTOR_OFFSET))(this, COBEJJHGMPO);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFFNMNPMBI_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IMFFNMNPMBI_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void HCJGGHLFKKE(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IMFFNMNPMBI_HCJGGHLFKKE_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void LCGFOBOHNBL(::PNJDGHBEMLK* NLIDNDCGOMK)
	{
		return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + IMFFNMNPMBI_LCGFOBOHNBL_OFFSET))(this, NLIDNDCGOMK);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFFNMNPMBI_MHHJPBJILBJ_OFFSET))(this);
	}
};
