#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define DIDDMHIACEP_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x1343E360)
#define DIDDMHIACEP_ILCKEAFDOKL_OFFSET UNITYSDK_OFFSET(0x1343E390)
#define DIDDMHIACEP_MKCCELNFNDD_OFFSET UNITYSDK_OFFSET(0x1343E370)
#define DIDDMHIACEP_OBCLDNNCLPN_OFFSET UNITYSDK_OFFSET(0x1343E380)
#define DIDDMHIACEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1343E2A0)

inline static constexpr unsigned int DIDDMHIACEP_TypeDefinitionIndex = 65798;

class DIDDMHIACEP : public ::System::Attribute
{
public:
	// static const ::System::Int32 NJLHPPIPCJC = 0x10; // 0x0
	::System::Type* _JHJBODMKONH_k__BackingField; // 0x10
	::System::Type* _KDLKOHKDPAD_k__BackingField; // 0x18
	::System::Int32 _FAEOHACPFNC_k__BackingField; // 0x20

	::System::Void _ctor(::System::Type* JAOOMPBBMMJ, ::System::Type* EHHEFPBKNBP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + DIDDMHIACEP__CTOR_OFFSET))(this, JAOOMPBBMMJ, EHHEFPBKNBP);
	}

	::System::Type* ABNCDAHLPHH()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDDMHIACEP_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Int32 MKCCELNFNDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDDMHIACEP_MKCCELNFNDD_OFFSET))(this);
	}

	::System::Type* OBCLDNNCLPN()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDDMHIACEP_OBCLDNNCLPN_OFFSET))(this);
	}

	::System::Void ILCKEAFDOKL(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIDDMHIACEP_ILCKEAFDOKL_OFFSET))(this, EGEGIMGMJHN);
	}
};
