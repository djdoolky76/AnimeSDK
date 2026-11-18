#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEDAOLMLPOB.h"
#include "unitysdk/System/Object.h"

class BMPNJCKKHCE;
class IBENDELLLAO;
class NNHBBOBBIAE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EINNDDBIPAM_CMPDHPMMKMF_OFFSET UNITYSDK_OFFSET(0x17115640)
#define EINNDDBIPAM_DFKFAAAFOBB_OFFSET UNITYSDK_OFFSET(0x17114DB0)
#define EINNDDBIPAM_FFKCOGHPHMK_OFFSET UNITYSDK_OFFSET(0x171154B0)
#define EINNDDBIPAM_HHEMFBAEFKB_OFFSET UNITYSDK_OFFSET(0x17114FE0)
#define EINNDDBIPAM_MCIBNPIIKPO_OFFSET UNITYSDK_OFFSET(0x17115700)
#define EINNDDBIPAM_NOBMDEFPOID_OFFSET UNITYSDK_OFFSET(0x17115080)
#define EINNDDBIPAM_OGGADFBBFDC_OFFSET UNITYSDK_OFFSET(0x17114CC0)
#define EINNDDBIPAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17114CB0)

inline static constexpr unsigned int EINNDDBIPAM_TypeDefinitionIndex = 92001;

class EINNDDBIPAM : public ::System::Object
{
public:
	::BMPNJCKKHCE* GBGGHJNNOJI; // 0x10
	::System::Collections::Generic::List_1<::NNHBBOBBIAE*>* IJHBKFDOOGN; // 0x18
	::System::Boolean GFNLLIJJCBA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINNDDBIPAM__CTOR_OFFSET))(this);
	}

	::System::Boolean OGGADFBBFDC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EINNDDBIPAM_OGGADFBBFDC_OFFSET))(this);
	}

	::System::Void HHEMFBAEFKB(::NNHBBOBBIAE* KJEDCMBBDDN)
	{
		return ((::System::Void(*)(::PVOID, ::NNHBBOBBIAE*))((::PBYTE)hIl2Cpp + EINNDDBIPAM_HHEMFBAEFKB_OFFSET))(this, KJEDCMBBDDN);
	}

	::MEDAOLMLPOB DFKFAAAFOBB()
	{
		return ((::MEDAOLMLPOB(*)(::PVOID))((::PBYTE)hIl2Cpp + EINNDDBIPAM_DFKFAAAFOBB_OFFSET))(this);
	}

	::System::Void NOBMDEFPOID(::IBENDELLLAO* OKPPLPIADKF)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + EINNDDBIPAM_NOBMDEFPOID_OFFSET))(this, OKPPLPIADKF);
	}

	::System::Void FFKCOGHPHMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINNDDBIPAM_FFKCOGHPHMK_OFFSET))(this);
	}

	::System::Void CMPDHPMMKMF(::BMPNJCKKHCE* GBGGHJNNOJI)
	{
		return ((::System::Void(*)(::PVOID, ::BMPNJCKKHCE*))((::PBYTE)hIl2Cpp + EINNDDBIPAM_CMPDHPMMKMF_OFFSET))(this, GBGGHJNNOJI);
	}

	::System::Boolean MCIBNPIIKPO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EINNDDBIPAM_MCIBNPIIKPO_OFFSET))(this);
	}
};
