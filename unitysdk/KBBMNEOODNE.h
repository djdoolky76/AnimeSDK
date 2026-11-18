#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"
#include "unitysdk/PEHAKAOLEGJ.h"
#include "unitysdk/PGDOEDKIBPH.h"

namespace System { class String; }

#define KBBMNEOODNE_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x18A31170)
#define KBBMNEOODNE_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x18A31200)
#define KBBMNEOODNE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18A31290)
#define KBBMNEOODNE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x18A31130)
#define KBBMNEOODNE_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x18A30BD0)
#define KBBMNEOODNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18A30CB0)
#define KBBMNEOODNE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A31120)

inline static constexpr unsigned int KBBMNEOODNE_TypeDefinitionIndex = 42461;

class KBBMNEOODNE : public ::LICBHCFJLNF
{
public:
	::PGDOEDKIBPH JAPMOCGFNAL; // 0x10
	::System::Int32 OOLGCLCKKPK; // 0x14
	::System::Int32 BAOELILBOOG; // 0x18
	::System::Boolean FBFMHPFHKLM; // 0x1C
	::System::Boolean MGFPDLFLBGN; // 0x1D
	::System::Byte _padding0[0x2];
	::PEHAKAOLEGJ CGMHPIKJFNB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBMNEOODNE__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBMNEOODNE_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBMNEOODNE_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBMNEOODNE_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBMNEOODNE_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::KBBMNEOODNE* BBPCBEEHALC()
	{
		return ((::KBBMNEOODNE*(*)())((::PBYTE)hIl2Cpp + KBBMNEOODNE_BBPCBEEHALC_OFFSET))();
	}

	::KBBMNEOODNE* DGNAAPGKIPL()
	{
		return ((::KBBMNEOODNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBMNEOODNE_DGNAAPGKIPL_OFFSET))(this);
	}
};
