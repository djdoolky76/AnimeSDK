#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNKOPDEKLKG.h"
#include "unitysdk/NFPJHHNGFEF.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAKAEKHONIN_ABBEHPBENJI_OFFSET UNITYSDK_OFFSET(0x726C00)
#define GAKAEKHONIN_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x726C70)
#define GAKAEKHONIN_FADAGONECKI_OFFSET UNITYSDK_OFFSET(0x388A70)
#define GAKAEKHONIN_HOKLHHFGGKD_OFFSET UNITYSDK_OFFSET(0x726C20)
#define GAKAEKHONIN_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x726C60)
#define GAKAEKHONIN_LNAOGMCNGHJ_OFFSET UNITYSDK_OFFSET(0x726C50)
#define GAKAEKHONIN__CTOR_OFFSET UNITYSDK_OFFSET(0x726B30)

inline static constexpr unsigned int GAKAEKHONIN_TypeDefinitionIndex = 87048;

struct alignas(8) GAKAEKHONIN
{
	::System::String* LHCBCLICEMA; // 0x10
	::System::Collections::Generic::Dictionary_2<::FNKOPDEKLKG, ::System::String*>* NCCNFHLNCOK; // 0x18
	::NFPJHHNGFEF NIMCIFGCLGC; // 0x20
	::System::Boolean _MECHDBEHDIN_k__BackingField; // 0x40

	::System::Void _ctor(::System::String* LHCBCLICEMA, ::System::Boolean PDFEDOCLDHG, ::System::Action_1<::System::Boolean>* OIIGKOLGMMO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + GAKAEKHONIN__CTOR_OFFSET))(this, LHCBCLICEMA, PDFEDOCLDHG, OIIGKOLGMMO);
	}

	::FNKOPDEKLKG ABBEHPBENJI(::System::Int32 DKOFFFNEFJC, ::System::String* AELLPLBJELA)
	{
		return ((::FNKOPDEKLKG(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GAKAEKHONIN_ABBEHPBENJI_OFFSET))(this, DKOFFFNEFJC, AELLPLBJELA);
	}

	::System::Boolean HOKLHHFGGKD(::FNKOPDEKLKG PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FNKOPDEKLKG))((::PBYTE)hIl2Cpp + GAKAEKHONIN_HOKLHHFGGKD_OFFSET))(this, PHHDHIBOCKA);
	}

	::NFPJHHNGFEF FADAGONECKI()
	{
		return ((::NFPJHHNGFEF(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKAEKHONIN_FADAGONECKI_OFFSET))(this);
	}

	::System::Void LNAOGMCNGHJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAKAEKHONIN_LNAOGMCNGHJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKAEKHONIN_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKAEKHONIN_BJANDJKKNCD_OFFSET))(this);
	}
};
