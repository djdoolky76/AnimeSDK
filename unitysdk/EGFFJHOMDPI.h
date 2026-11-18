#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECNKMPJKDPD.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGFFJHOMDPI_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x14A88800)
#define EGFFJHOMDPI_BNDGGOHLHEM_OFFSET UNITYSDK_OFFSET(0x14A883D0)
#define EGFFJHOMDPI_COHDMPBBMPO_OFFSET UNITYSDK_OFFSET(0x14A88660)
#define EGFFJHOMDPI_JNBGBKMJGAG_OFFSET UNITYSDK_OFFSET(0x14A885F0)
#define EGFFJHOMDPI__CTOR_OFFSET UNITYSDK_OFFSET(0x14A88370)

inline static constexpr unsigned int EGFFJHOMDPI_TypeDefinitionIndex = 77792;

class EGFFJHOMDPI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::ECNKMPJKDPD>* NDEBPJFBHHK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFFJHOMDPI__CTOR_OFFSET))(this);
	}

	::System::Void BNDGGOHLHEM(::System::Action_1<::ECNKMPJKDPD>* OGHLALEKAEG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::ECNKMPJKDPD>*))((::PBYTE)hIl2Cpp + EGFFJHOMDPI_BNDGGOHLHEM_OFFSET))(this, OGHLALEKAEG);
	}

	::System::Void JNBGBKMJGAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFFJHOMDPI_JNBGBKMJGAG_OFFSET))(this);
	}

	::System::Boolean COHDMPBBMPO(::ECNKMPJKDPD HNOPAJLDCFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::ECNKMPJKDPD))((::PBYTE)hIl2Cpp + EGFFJHOMDPI_COHDMPBBMPO_OFFSET))(this, HNOPAJLDCFB);
	}

	::System::Void ANPBCLAFCJB(::ECNKMPJKDPD HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::ECNKMPJKDPD))((::PBYTE)hIl2Cpp + EGFFJHOMDPI_ANPBCLAFCJB_OFFSET))(this, HNOPAJLDCFB);
	}
};
