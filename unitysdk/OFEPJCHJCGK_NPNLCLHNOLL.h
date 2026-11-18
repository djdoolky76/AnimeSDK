#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/OFEPJCHJCGK_LGOKMHJKGKM.h"
#include "unitysdk/System/Object.h"

#define OFEPJCHJCGK_NPNLCLHNOLL_EFFBOFKKDID_OFFSET UNITYSDK_OFFSET(0x12929690)
#define OFEPJCHJCGK_NPNLCLHNOLL_EPIJEADKFDF_OFFSET UNITYSDK_OFFSET(0x129295D0)
#define OFEPJCHJCGK_NPNLCLHNOLL_LCLJJBPHOCH_OFFSET UNITYSDK_OFFSET(0x12929630)
#define OFEPJCHJCGK_NPNLCLHNOLL_PDIALNCEDMH_OFFSET UNITYSDK_OFFSET(0x12929570)
#define OFEPJCHJCGK_NPNLCLHNOLL__CTOR_OFFSET UNITYSDK_OFFSET(0x129294E0)

inline static constexpr unsigned int OFEPJCHJCGK_NPNLCLHNOLL_TypeDefinitionIndex = 70712;

class OFEPJCHJCGK_NPNLCLHNOLL : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle PHHDHIBOCKA; // 0x10
	::System::Int32 DMFEFGOCKGJ; // 0x30
	::OFEPJCHJCGK_LGOKMHJKGKM AKEGOHABAAB; // 0x34
	::System::Int32 KDPMCAMCEIN; // 0x38

	::System::Void _ctor(::OFEPJCHJCGK_LGOKMHJKGKM JCPNDFAEOLI, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::OFEPJCHJCGK_LGOKMHJKGKM, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NPNLCLHNOLL__CTOR_OFFSET))(this, JCPNDFAEOLI, MGMDLMBEDJF);
	}

	::System::Boolean PDIALNCEDMH(::System::Int32 GIAOKGFENJD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NPNLCLHNOLL_PDIALNCEDMH_OFFSET))(this, GIAOKGFENJD);
	}

	::System::Boolean EPIJEADKFDF(::System::Int32 COMDNFILAIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NPNLCLHNOLL_EPIJEADKFDF_OFFSET))(this, COMDNFILAIC);
	}

	::System::Boolean LCLJJBPHOCH(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NPNLCLHNOLL_LCLJJBPHOCH_OFFSET))(this, LEHABHCOMGH);
	}

	::System::Boolean EFFBOFKKDID()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NPNLCLHNOLL_EFFBOFKKDID_OFFSET))(this);
	}
};
