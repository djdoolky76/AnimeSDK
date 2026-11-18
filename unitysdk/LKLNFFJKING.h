#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPKABGIGJOO.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define LKLNFFJKING_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1258E450)
#define LKLNFFJKING_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1258E4B0)
#define LKLNFFJKING_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1258E4F0)
#define LKLNFFJKING_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1258E3C0)
#define LKLNFFJKING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1258E2C0)
#define LKLNFFJKING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1258E340)
#define LKLNFFJKING__CTOR_OFFSET UNITYSDK_OFFSET(0x1258E3B0)

inline static constexpr unsigned int LKLNFFJKING_TypeDefinitionIndex = 82708;

class LKLNFFJKING : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x81; // 0x0
	::DPKABGIGJOO LDJDFKINLKJ; // 0x20
	::System::UInt32 MGNMJMACKLO; // 0x24
	::System::UInt32 AOGNNJLKHGL; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKLNFFJKING__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLNFFJKING__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLNFFJKING_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLNFFJKING_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::DPKABGIGJOO EABEIBILPBF, ::System::UInt32 BKLGNCBNEGM, ::System::UInt32 KMMGKJPAOMF)
	{
		return ((::System::Void(*)(::PVOID, ::DPKABGIGJOO, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LKLNFFJKING_CNHBDOMKKDE_OFFSET))(this, EABEIBILPBF, BKLGNCBNEGM, KMMGKJPAOMF);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLNFFJKING_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLNFFJKING_FIGPAOKNJLN_OFFSET))(this);
	}
};
