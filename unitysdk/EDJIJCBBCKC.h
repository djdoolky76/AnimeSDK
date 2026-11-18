#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPDNMFONAEH.h"
#include "unitysdk/ALODNBLGKKM.h"

class OPLNNODNIJJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDJIJCBBCKC_EFMCNJGCMNM_OFFSET UNITYSDK_OFFSET(0x13E729F0)
#define EDJIJCBBCKC_KIIONEDFMPN_OFFSET UNITYSDK_OFFSET(0x13E72E70)
#define EDJIJCBBCKC_KMGIOBEPIDI_OFFSET UNITYSDK_OFFSET(0x13E72EE0)
#define EDJIJCBBCKC_OJEFBNNBELP_OFFSET UNITYSDK_OFFSET(0x13E72F70)
#define EDJIJCBBCKC__CTOR_OFFSET UNITYSDK_OFFSET(0x13E72950)

inline static constexpr unsigned int EDJIJCBBCKC_TypeDefinitionIndex = 80807;

class EDJIJCBBCKC : public ::PPDNMFONAEH
{
public:
	::System::Collections::Generic::List_1<::OPLNNODNIJJ*>* PNGGJPLMMIA; // 0x60

	::System::Void _ctor(::ALODNBLGKKM KPGAFJBIBCC)
	{
		return ((::System::Void(*)(::PVOID, ::ALODNBLGKKM))((::PBYTE)hIl2Cpp + EDJIJCBBCKC__CTOR_OFFSET))(this, KPGAFJBIBCC);
	}

	::System::Void EFMCNJGCMNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJIJCBBCKC_EFMCNJGCMNM_OFFSET))(this);
	}

	::System::String* KIIONEDFMPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJIJCBBCKC_KIIONEDFMPN_OFFSET))(this);
	}

	::System::Void KMGIOBEPIDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJIJCBBCKC_KMGIOBEPIDI_OFFSET))(this);
	}

	::System::String* OJEFBNNBELP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJIJCBBCKC_OJEFBNNBELP_OFFSET))(this);
	}
};
