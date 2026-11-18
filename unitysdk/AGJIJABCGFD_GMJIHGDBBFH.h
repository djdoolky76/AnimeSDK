#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JMHIOADBIPH;

#define AGJIJABCGFD_GMJIHGDBBFH_BNMHNNENJOL_OFFSET UNITYSDK_OFFSET(0x11B94780)
#define AGJIJABCGFD_GMJIHGDBBFH_DAMCFEIAFPE_OFFSET UNITYSDK_OFFSET(0x11B94790)
#define AGJIJABCGFD_GMJIHGDBBFH__CTOR_OFFSET UNITYSDK_OFFSET(0x11B94770)

inline static constexpr unsigned int AGJIJABCGFD_GMJIHGDBBFH_TypeDefinitionIndex = 59811;

class AGJIJABCGFD_GMJIHGDBBFH : public ::System::Object
{
public:
	::JMHIOADBIPH* IGAAKDOIPNN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJIJABCGFD_GMJIHGDBBFH__CTOR_OFFSET))(this);
	}

	::System::Void BNMHNNENJOL(::JMHIOADBIPH* JBIGPEHHEFA)
	{
		return ((::System::Void(*)(::PVOID, ::JMHIOADBIPH*))((::PBYTE)hIl2Cpp + AGJIJABCGFD_GMJIHGDBBFH_BNMHNNENJOL_OFFSET))(this, JBIGPEHHEFA);
	}

	::System::Boolean DAMCFEIAFPE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJIJABCGFD_GMJIHGDBBFH_DAMCFEIAFPE_OFFSET))(this);
	}
};
