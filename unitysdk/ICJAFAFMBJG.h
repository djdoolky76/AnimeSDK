#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/ICJAFAFMBJG_DEHNIOCIIKL.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICJAFAFMBJG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x12EA49F0)
#define ICJAFAFMBJG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x12EA4960)
#define ICJAFAFMBJG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x12EA48D0)
#define ICJAFAFMBJG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EA4850)
#define ICJAFAFMBJG__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA48C0)

inline static constexpr unsigned int ICJAFAFMBJG_TypeDefinitionIndex = 45139;

class ICJAFAFMBJG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x5; // 0x0
	::System::String* KKJEJNMLIFP; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* LFEICKDLDNB; // 0x28
	::ICJAFAFMBJG_DEHNIOCIIKL BPINANLEDPD; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICJAFAFMBJG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJAFAFMBJG__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJAFAFMBJG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJAFAFMBJG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 PPNALIJJAJL, ::ICJAFAFMBJG_DEHNIOCIIKL OBNIAHNMHPF, ::System::String* KKJEJNMLIFP, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* LFEICKDLDNB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::ICJAFAFMBJG_DEHNIOCIIKL, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + ICJAFAFMBJG_CNHBDOMKKDE_OFFSET))(this, PPNALIJJAJL, OBNIAHNMHPF, KKJEJNMLIFP, LFEICKDLDNB);
	}
};
