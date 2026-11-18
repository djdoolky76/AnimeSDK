#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KKKJEHEGBEI.h"

class KBDGKAJPALP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POPCMBHIDAH_CMHMBMLEFCL_HGFFOLLOBMB_OFFSET UNITYSDK_OFFSET(0x1DE6A600)
#define POPCMBHIDAH_CMHMBMLEFCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6A5F0)

inline static constexpr unsigned int POPCMBHIDAH_CMHMBMLEFCL_TypeDefinitionIndex = 93889;

class POPCMBHIDAH_CMHMBMLEFCL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* CDIBOLIHMID; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* MHMCLPJELKC; // 0x18
	::KBDGKAJPALP* GEEHGDABNJF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCMBHIDAH_CMHMBMLEFCL__CTOR_OFFSET))(this);
	}

	::System::Void HGFFOLLOBMB(::KKKJEHEGBEI IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::KKKJEHEGBEI))((::PBYTE)hIl2Cpp + POPCMBHIDAH_CMHMBMLEFCL_HGFFOLLOBMB_OFFSET))(this, IGAAKDOIPNN);
	}
};
