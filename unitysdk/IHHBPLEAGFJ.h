#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJKMHEPLAFK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class ALMILPMLGLJ;
class FCDPECJMCMF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHHBPLEAGFJ_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x16576790)
#define IHHBPLEAGFJ_BICIPLFCEEN_OFFSET UNITYSDK_OFFSET(0x16576420)
#define IHHBPLEAGFJ_FKIIGHFBOCO_OFFSET UNITYSDK_OFFSET(0x165761A0)
#define IHHBPLEAGFJ_HPMHFPOCAGM_OFFSET UNITYSDK_OFFSET(0x165765A0)
#define IHHBPLEAGFJ_IEHDGFDEHIO_OFFSET UNITYSDK_OFFSET(0x16575D30)
#define IHHBPLEAGFJ_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x16576400)
#define IHHBPLEAGFJ_JLKJPPJNEEP_OFFSET UNITYSDK_OFFSET(0x165766F0)
#define IHHBPLEAGFJ_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x16576410)
#define IHHBPLEAGFJ_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16576010)
#define IHHBPLEAGFJ_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16575910)
#define IHHBPLEAGFJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16575860)
#define IHHBPLEAGFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x165763C0)

inline static constexpr unsigned int IHHBPLEAGFJ_TypeDefinitionIndex = 80587;

class IHHBPLEAGFJ
{
public:
	::System::Nullable_1<::FJKMHEPLAFK> ADOABKLDHIG; // 0x28
	::System::Byte _padding0[0x10];
	::ALMILPMLGLJ* BEIBGINGFMG; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* FMDHCKCOHHM; // 0x48
	::System::Boolean LCKFMBFCKJA; // 0x50
	::System::Boolean JLCOMGOANGK; // 0x51
	::System::Boolean PGIHMPHFMIM; // 0x52

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_ONDISABLE_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void IEHDGFDEHIO(::System::Boolean HPFBPFMPPIO, ::ALMILPMLGLJ* JMDONAMBDIH, ::FJKMHEPLAFK LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::ALMILPMLGLJ*, ::FJKMHEPLAFK))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_IEHDGFDEHIO_OFFSET))(this, HPFBPFMPPIO, JMDONAMBDIH, LJBPECKCCEA);
	}

	::System::Void HPMHFPOCAGM(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_HPMHFPOCAGM_OFFSET))(this, HPADNAEINPK);
	}

	::System::Void BICIPLFCEEN(::ALMILPMLGLJ* JMDONAMBDIH)
	{
		return ((::System::Void(*)(::PVOID, ::ALMILPMLGLJ*))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_BICIPLFCEEN_OFFSET))(this, JMDONAMBDIH);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void FKIIGHFBOCO(::System::Boolean HPFBPFMPPIO, ::FJKMHEPLAFK LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FJKMHEPLAFK))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_FKIIGHFBOCO_OFFSET))(this, HPFBPFMPPIO, LJBPECKCCEA);
	}

	::System::Void JLKJPPJNEEP(::FCDPECJMCMF* GBELIHABEDH, ::ALMILPMLGLJ* JMDONAMBDIH)
	{
		return ((::System::Void(*)(::PVOID, ::FCDPECJMCMF*, ::ALMILPMLGLJ*))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_JLKJPPJNEEP_OFFSET))(this, GBELIHABEDH, JMDONAMBDIH);
	}
};
