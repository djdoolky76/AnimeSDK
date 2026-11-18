#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBNOJPHIALB.h"
#include "unitysdk/PIKAMDOBGNL.h"

class DGLCCLCLNHC;
class MEKLIGLLJKM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLEGKJEINDA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xD400C10)
#define KLEGKJEINDA_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0xD4011B0)
#define KLEGKJEINDA_CHJGMMPBFIF_OFFSET UNITYSDK_OFFSET(0xD401100)
#define KLEGKJEINDA_DOMNHNAIAOB_OFFSET UNITYSDK_OFFSET(0xD4012F0)
#define KLEGKJEINDA_HPEMDAHJGOB_OFFSET UNITYSDK_OFFSET(0xD4014C0)
#define KLEGKJEINDA_JGNMKFAOBCH_OFFSET UNITYSDK_OFFSET(0xD400CE0)
#define KLEGKJEINDA_OHNOBMIKJID_OFFSET UNITYSDK_OFFSET(0xD401250)
#define KLEGKJEINDA_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0xD401070)
#define KLEGKJEINDA_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0xD401430)
#define KLEGKJEINDA__CTOR_OFFSET UNITYSDK_OFFSET(0xD4011A0)

inline static constexpr unsigned int KLEGKJEINDA_TypeDefinitionIndex = 79304;

class KLEGKJEINDA : public ::PIKAMDOBGNL
{
public:
	::DGLCCLCLNHC* GIPAEJLBCPM; // 0x10
	::System::Collections::Generic::List_1<::CBNOJPHIALB>* KKPIJKCFKDC; // 0x18
	::MEKLIGLLJKM* POJEDACFDOF; // 0x20
	::System::Single HMHFKAODELJ; // 0x28
	::System::Boolean ACJAGIBFLHJ; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEGKJEINDA__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MEKLIGLLJKM* POJEDACFDOF)
	{
		return ((::System::Void(*)(::PVOID, ::MEKLIGLLJKM*))((::PBYTE)hIl2Cpp + KLEGKJEINDA_BBOMJDBNHIC_OFFSET))(this, POJEDACFDOF);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLEGKJEINDA_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLEGKJEINDA_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JGNMKFAOBCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEGKJEINDA_JGNMKFAOBCH_OFFSET))(this);
	}

	::System::Void OHNOBMIKJID(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLEGKJEINDA_OHNOBMIKJID_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Boolean DOMNHNAIAOB(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KLEGKJEINDA_DOMNHNAIAOB_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Void PNHPDOBPKKE(::MEKLIGLLJKM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MEKLIGLLJKM*))((::PBYTE)hIl2Cpp + KLEGKJEINDA_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CHJGMMPBFIF(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLEGKJEINDA_CHJGMMPBFIF_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Boolean HPEMDAHJGOB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEGKJEINDA_HPEMDAHJGOB_OFFSET))(this);
	}
};
