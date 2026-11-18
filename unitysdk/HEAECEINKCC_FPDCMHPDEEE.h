#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEAECEINKCC_FPDCMHPDEEE_AGFAIPOGHFD_OFFSET UNITYSDK_OFFSET(0x16F28710)
#define HEAECEINKCC_FPDCMHPDEEE_FJENGHDLLEG_OFFSET UNITYSDK_OFFSET(0x16F28730)
#define HEAECEINKCC_FPDCMHPDEEE_IALFDADOFIP_OFFSET UNITYSDK_OFFSET(0x16F28760)
#define HEAECEINKCC_FPDCMHPDEEE_LIGLICEBGCE_OFFSET UNITYSDK_OFFSET(0x16F28720)
#define HEAECEINKCC_FPDCMHPDEEE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F28700)

inline static constexpr unsigned int HEAECEINKCC_FPDCMHPDEEE_TypeDefinitionIndex = 64565;

class HEAECEINKCC_FPDCMHPDEEE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Double>* BDAJIGIOAMM; // 0x10
	::System::Double CIIPCCLOHLH; // 0x18
	::System::Boolean MJLGHGFCHOM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_FPDCMHPDEEE__CTOR_OFFSET))(this);
	}

	::System::Boolean AGFAIPOGHFD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_FPDCMHPDEEE_AGFAIPOGHFD_OFFSET))(this);
	}

	::System::Boolean LIGLICEBGCE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_FPDCMHPDEEE_LIGLICEBGCE_OFFSET))(this);
	}

	::System::Void FJENGHDLLEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_FPDCMHPDEEE_FJENGHDLLEG_OFFSET))(this);
	}

	::System::Void IALFDADOFIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_FPDCMHPDEEE_IALFDADOFIP_OFFSET))(this);
	}
};
