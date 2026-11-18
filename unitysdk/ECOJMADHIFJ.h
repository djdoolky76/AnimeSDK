#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIJGGGANLLD.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define ECOJMADHIFJ_BDBKFGMPLEC_OFFSET UNITYSDK_OFFSET(0x17225560)
#define ECOJMADHIFJ_EBAAGGHDBEF_OFFSET UNITYSDK_OFFSET(0x17224DC0)
#define ECOJMADHIFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x17224D50)
#define ECOJMADHIFJ_GIHJACFIIPP_OFFSET UNITYSDK_OFFSET(0x172252F0)
#define ECOJMADHIFJ_MOJMMGMNGLB_OFFSET UNITYSDK_OFFSET(0x17225300)
#define ECOJMADHIFJ_OAEEBBLBBHA_OFFSET UNITYSDK_OFFSET(0x17224DB0)
#define ECOJMADHIFJ_PEDIFDIIBAA_OFFSET UNITYSDK_OFFSET(0x172251A0)
#define ECOJMADHIFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17224DA0)

inline static constexpr unsigned int ECOJMADHIFJ_TypeDefinitionIndex = 90243;

class ECOJMADHIFJ : public ::System::Object
{
public:
	::AIJGGGANLLD HGIJHODLIBC; // 0x10
	::System::Int32 KOMCHMAIGIL; // 0x30
	::System::Boolean MCJCCJOEKGN; // 0x34
	::System::Boolean LKAAMCAHGMC; // 0x35
	::System::Byte _padding0[0x2];
	::System::Int32 JBKHECDPGGE; // 0x38
	::System::Int32 EKMMBLCNPHE; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOJMADHIFJ__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::ECOJMADHIFJ* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ECOJMADHIFJ*))((::PBYTE)hIl2Cpp + ECOJMADHIFJ_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Void OAEEBBLBBHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOJMADHIFJ_OAEEBBLBBHA_OFFSET))(this);
	}

	::System::Void EBAAGGHDBEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOJMADHIFJ_EBAAGGHDBEF_OFFSET))(this);
	}

	::System::Void PEDIFDIIBAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOJMADHIFJ_PEDIFDIIBAA_OFFSET))(this);
	}

	::System::Void GIHJACFIIPP(::DJDDGKFCNAJ_IGOPHLMOGAO PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + ECOJMADHIFJ_GIHJACFIIPP_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void MOJMMGMNGLB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECOJMADHIFJ_MOJMMGMNGLB_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void BDBKFGMPLEC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ECOJMADHIFJ_BDBKFGMPLEC_OFFSET))(this, KOIBHLHLMFC);
	}
};
