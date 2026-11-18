#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDBNONPKCBC.h"
#include "unitysdk/FLPFOHKGOIJ.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }

#define DFFLOBODENG_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1974D000)
#define DFFLOBODENG_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1974CFB0)
#define DFFLOBODENG_EGGBKCGJIIE_OFFSET UNITYSDK_OFFSET(0x1974D1B0)
#define DFFLOBODENG_EHDKBAFICOE_OFFSET UNITYSDK_OFFSET(0x1974D840)
#define DFFLOBODENG_HKDLPJLOKOJ_OFFSET UNITYSDK_OFFSET(0x1974D380)
#define DFFLOBODENG_IPCOIFBOEPA_OFFSET UNITYSDK_OFFSET(0x1974D230)
#define DFFLOBODENG_KBEJGLKFIKJ_OFFSET UNITYSDK_OFFSET(0x1974D850)
#define DFFLOBODENG_NHKAAMPCLGO_OFFSET UNITYSDK_OFFSET(0x1974DAC0)
#define DFFLOBODENG_OAAOGKBAAMB_OFFSET UNITYSDK_OFFSET(0x1974D6F0)
#define DFFLOBODENG_ODMFENIMPHG_OFFSET UNITYSDK_OFFSET(0x1974D890)
#define DFFLOBODENG_OHOCAPINGAO_OFFSET UNITYSDK_OFFSET(0x1974CF00)
#define DFFLOBODENG_OJIEJPLEEIE_OFFSET UNITYSDK_OFFSET(0x1974D130)
#define DFFLOBODENG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1974CE70)
#define DFFLOBODENG__CTOR_OFFSET UNITYSDK_OFFSET(0x1974CE60)

inline static constexpr unsigned int DFFLOBODENG_TypeDefinitionIndex = 62006;

class DFFLOBODENG : public ::System::Object
{
public:
	::DDBNONPKCBC BLBMOOPDBLB; // 0x10
	::System::Action* PLEJMLIFFHG; // 0x20
	::System::Collections::Generic::IList_1<::System::String*>* GCODDKNABPK; // 0x28
	::System::String* GFIPEKCEEPM; // 0x30
	::System::Func_1<::System::Boolean>* BBMMEFEHIEG; // 0x38
	::UnityEngine::GameObject* OKDBJMMAKFC; // 0x40
	::System::Int32 MLNKCNJEOMI; // 0x48
	::System::Single MOMAIAHJBIL; // 0x4C
	::System::Single KLKKPMHPBDP; // 0x50
	::System::Boolean GCIDOLKOBPG; // 0x54
	::System::Boolean CCMEEBOEPOJ; // 0x55
	::System::Byte _padding0[0x2];
	::FLPFOHKGOIJ EJHGOKAMACC; // 0x58
	::System::UInt32 AIGIANIKOCF; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLOBODENG__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFFLOBODENG_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLOBODENG_EDEFLFIKNFK_OFFSET))(this);
	}

	static ::DFFLOBODENG* COKNIICCODC(::FLPFOHKGOIJ GEJCKFFFKCL, ::System::String* OBKMLEFFCOC, ::System::Collections::Generic::IList_1<::System::String*>* PKDDLKNHGCG, ::UnityEngine::GameObject* MAHAOAIGPEH, ::System::Func_1<::System::Boolean>* PBAJKOKJLGF, ::System::Action* PABLEDCGDGM, ::DDBNONPKCBC OHBGODOJFIK, ::System::Single ODJKHILDBAL)
	{
		return ((::DFFLOBODENG*(*)(::FLPFOHKGOIJ, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::UnityEngine::GameObject*, ::System::Func_1<::System::Boolean>*, ::System::Action*, ::DDBNONPKCBC, ::System::Single))((::PBYTE)hIl2Cpp + DFFLOBODENG_COKNIICCODC_OFFSET))(GEJCKFFFKCL, OBKMLEFFCOC, PKDDLKNHGCG, MAHAOAIGPEH, PBAJKOKJLGF, PABLEDCGDGM, OHBGODOJFIK, ODJKHILDBAL);
	}

	::System::Void OJIEJPLEEIE(::System::UInt32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFFLOBODENG_OJIEJPLEEIE_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void OHOCAPINGAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLOBODENG_OHOCAPINGAO_OFFSET))(this);
	}

	::System::String* EHDKBAFICOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLOBODENG_EHDKBAFICOE_OFFSET))(this);
	}

	::System::Void IPCOIFBOEPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLOBODENG_IPCOIFBOEPA_OFFSET))(this);
	}

	::System::Void KBEJGLKFIKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLOBODENG_KBEJGLKFIKJ_OFFSET))(this);
	}

	::System::Void ODMFENIMPHG(::System::String* BCPPCELDALM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DFFLOBODENG_ODMFENIMPHG_OFFSET))(this, BCPPCELDALM);
	}

	::System::Void EGGBKCGJIIE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLOBODENG_EGGBKCGJIIE_OFFSET))(this);
	}

	::System::Void HKDLPJLOKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLOBODENG_HKDLPJLOKOJ_OFFSET))(this);
	}

	::System::Void OAAOGKBAAMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLOBODENG_OAAOGKBAAMB_OFFSET))(this);
	}

	::System::Void NHKAAMPCLGO(::System::UInt32 PIIPCLCCOIG, ::System::UInt32 MINPNEAOEMM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DFFLOBODENG_NHKAAMPCLGO_OFFSET))(this, PIIPCLCCOIG, MINPNEAOEMM);
	}
};
