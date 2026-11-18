#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class OOECELGJOFM;
template <typename T> class LJHFMILANJA_1;

#define DHOPEBFAMPP_GFHNMBHLLHC_OFFSET UNITYSDK_OFFSET(0x15A47880)
#define DHOPEBFAMPP_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15A477C0)
#define DHOPEBFAMPP__CTOR_OFFSET UNITYSDK_OFFSET(0x15A47870)

inline static constexpr unsigned int DHOPEBFAMPP_TypeDefinitionIndex = 40910;

class DHOPEBFAMPP : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::UInt32>* MGMDJCCEAIB; // 0x88
	::LJHFMILANJA_1<::System::UInt32>* APKIKLPPHEA; // 0x90
	::LJHFMILANJA_1<::System::UInt32>* PJKIMFFJEML; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOPEBFAMPP__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOPEBFAMPP_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void GFHNMBHLLHC(::OOECELGJOFM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::OOECELGJOFM*))((::PBYTE)hIl2Cpp + DHOPEBFAMPP_GFHNMBHLLHC_OFFSET))(this, FFNKDGGHBPP);
	}
};
