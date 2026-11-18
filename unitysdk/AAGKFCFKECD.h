#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

namespace System { class String; }

#define AAGKFCFKECD_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x17DB8C10)
#define AAGKFCFKECD_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x17DB8B80)
#define AAGKFCFKECD_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x17DB8AA0)
#define AAGKFCFKECD__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB8B70)

inline static constexpr unsigned int AAGKFCFKECD_TypeDefinitionIndex = 71559;

class AAGKFCFKECD : public ::KCIPADHDIIN
{
public:
	::System::String* DAJMCJCGGNP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGKFCFKECD__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGKFCFKECD_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::AAGKFCFKECD* BBPCBEEHALC()
	{
		return ((::AAGKFCFKECD*(*)())((::PBYTE)hIl2Cpp + AAGKFCFKECD_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGKFCFKECD_ANEOCOIFDDJ_OFFSET))(this);
	}
};
