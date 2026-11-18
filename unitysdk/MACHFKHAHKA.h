#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCHOANCLADD;
class DENGNOJFDLA;
class DLCLDCNHOPO;
class JOMOCFHNBLB;
namespace MoleMole::HollowChessboard { class RenderSequenceBase; }

#define MACHFKHAHKA_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x151B9380)
#define MACHFKHAHKA_BNFDOJPKBMO_OFFSET UNITYSDK_OFFSET(0x151B9480)
#define MACHFKHAHKA_DESTRUCTOR_OFFSET UNITYSDK_OFFSET(0x151B9400)
#define MACHFKHAHKA_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x151B94E0)
#define MACHFKHAHKA_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x151B98E0)
#define MACHFKHAHKA_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x151B9800)
#define MACHFKHAHKA_OIFEKOKIGGH_OFFSET UNITYSDK_OFFSET(0x151B9890)
#define MACHFKHAHKA_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x151B9760)
#define MACHFKHAHKA__CTOR_OFFSET UNITYSDK_OFFSET(0x151B9880)

inline static constexpr unsigned int MACHFKHAHKA_TypeDefinitionIndex = 49941;

class MACHFKHAHKA : public ::System::Object
{
public:
	::JOMOCFHNBLB* BFCOOLIGEOB; // 0x10
	::DLCLDCNHOPO* GCAOFHKEHNO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACHFKHAHKA__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACHFKHAHKA_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void Destructor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACHFKHAHKA_DESTRUCTOR_OFFSET))(this);
	}

	::System::Boolean BNFDOJPKBMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MACHFKHAHKA_BNFDOJPKBMO_OFFSET))(this);
	}

	::System::Boolean GLEJMKLOMBP(::BCHOANCLADD* FCHGPPLBGDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::BCHOANCLADD*))((::PBYTE)hIl2Cpp + MACHFKHAHKA_GLEJMKLOMBP_OFFSET))(this, FCHGPPLBGDD);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MACHFKHAHKA_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACHFKHAHKA_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void OIFEKOKIGGH(::JOMOCFHNBLB* GENNIFDPOAM)
	{
		return ((::System::Void(*)(::PVOID, ::JOMOCFHNBLB*))((::PBYTE)hIl2Cpp + MACHFKHAHKA_OIFEKOKIGGH_OFFSET))(this, GENNIFDPOAM);
	}

	::System::Void JMDEKPONKMF(::MoleMole::HollowChessboard::RenderSequenceBase* HPEKBKGBDMA, ::DENGNOJFDLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderSequenceBase*, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + MACHFKHAHKA_JMDEKPONKMF_OFFSET))(this, HPEKBKGBDMA, AAOCANGHBDG);
	}
};
