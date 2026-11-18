#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMFAHGEFDFJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPJJODGOGD_FHPFHLBMEHG_OFFSET UNITYSDK_OFFSET(0x170F0750)
#define NAPJJODGOGD_IOMOLDKKPJO_OFFSET UNITYSDK_OFFSET(0x170F08D0)
#define NAPJJODGOGD_MBGNFPHIFAH_OFFSET UNITYSDK_OFFSET(0x170F0800)
#define NAPJJODGOGD_MMBEHMMNLPE_OFFSET UNITYSDK_OFFSET(0x170F0660)
#define NAPJJODGOGD__CTOR_OFFSET UNITYSDK_OFFSET(0x170F05B0)

inline static constexpr unsigned int NAPJJODGOGD_TypeDefinitionIndex = 59756;

class NAPJJODGOGD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* IHMKJNILMDC; // 0x10
	::System::Collections::Generic::List_1<::AMFAHGEFDFJ*>* GIHBBKNGFOM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPJJODGOGD__CTOR_OFFSET))(this);
	}

	::System::Int32 MMBEHMMNLPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPJJODGOGD_MMBEHMMNLPE_OFFSET))(this);
	}

	::AMFAHGEFDFJ* FHPFHLBMEHG(::System::Int32 ABHBKFJKINO)
	{
		return ((::AMFAHGEFDFJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPJJODGOGD_FHPFHLBMEHG_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void MBGNFPHIFAH(::System::Int32 ABHBKFJKINO, ::AMFAHGEFDFJ* GNNEGBHJJKG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + NAPJJODGOGD_MBGNFPHIFAH_OFFSET))(this, ABHBKFJKINO, GNNEGBHJJKG);
	}

	::System::Void IOMOLDKKPJO(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPJJODGOGD_IOMOLDKKPJO_OFFSET))(this, ABHBKFJKINO);
	}
};
