#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OLPPOJJADDO.h"

class CFHOEGBMPKN;
class MKNBLBOIFAJ;
template <typename T1, typename T2> class ABIDMLIHJCI_2;

#define DNPEFAEGFPM_APPCLMIANHI_OFFSET UNITYSDK_OFFSET(0x1060A230)
#define DNPEFAEGFPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1060A050)
#define DNPEFAEGFPM_ILJPPJLPLEC_OFFSET UNITYSDK_OFFSET(0x1060AB10)
#define DNPEFAEGFPM_MJIPDLBCHNH_OFFSET UNITYSDK_OFFSET(0x1060A160)
#define DNPEFAEGFPM_OKGHEJMOJFI_OFFSET UNITYSDK_OFFSET(0x1060ACA0)
#define DNPEFAEGFPM_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x1060A7C0)
#define DNPEFAEGFPM__CTOR_OFFSET UNITYSDK_OFFSET(0x10609D90)

inline static constexpr unsigned int DNPEFAEGFPM_TypeDefinitionIndex = 91990;

class DNPEFAEGFPM : public ::System::Object
{
public:
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x10
	::ABIDMLIHJCI_2<::System::Int32, ::System::Int32>* ADOANEJNOGK; // 0x18
	::Foundation::ViewObject::GroupMemberIdentifier CGMJBFKEFME; // 0x20

	::System::Void _ctor(::MKNBLBOIFAJ* ABCMODOAPFF)
	{
		return ((::System::Void(*)(::PVOID, ::MKNBLBOIFAJ*))((::PBYTE)hIl2Cpp + DNPEFAEGFPM__CTOR_OFFSET))(this, ABCMODOAPFF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPEFAEGFPM_DISPOSE_OFFSET))(this);
	}

	::System::UInt64 MJIPDLBCHNH()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPEFAEGFPM_MJIPDLBCHNH_OFFSET))(this);
	}

	::System::Void APPCLMIANHI(::MKNBLBOIFAJ* JKHIHIBHDPH)
	{
		return ((::System::Void(*)(::PVOID, ::MKNBLBOIFAJ*))((::PBYTE)hIl2Cpp + DNPEFAEGFPM_APPCLMIANHI_OFFSET))(this, JKHIHIBHDPH);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPEFAEGFPM_PGKDINGDONO_OFFSET))(this);
	}

	::System::Int32 ILJPPJLPLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPEFAEGFPM_ILJPPJLPLEC_OFFSET))(this);
	}

	::System::Int32 OKGHEJMOJFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPEFAEGFPM_OKGHEJMOJFI_OFFSET))(this);
	}
};
