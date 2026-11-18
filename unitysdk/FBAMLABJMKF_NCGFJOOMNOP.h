#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNPCIOMPKDN.h"
#include "unitysdk/System/Object.h"

#define FBAMLABJMKF_NCGFJOOMNOP_ANGCGHCGMGP_OFFSET UNITYSDK_OFFSET(0x172615D0)
#define FBAMLABJMKF_NCGFJOOMNOP_CFFJDPPHADO_OFFSET UNITYSDK_OFFSET(0x172615B0)
#define FBAMLABJMKF_NCGFJOOMNOP_GKNBIEPMLBN_OFFSET UNITYSDK_OFFSET(0x172615F0)
#define FBAMLABJMKF_NCGFJOOMNOP_MCECJLLLIBE_OFFSET UNITYSDK_OFFSET(0x17261590)
#define FBAMLABJMKF_NCGFJOOMNOP__CTOR_OFFSET UNITYSDK_OFFSET(0x17261580)

inline static constexpr unsigned int FBAMLABJMKF_NCGFJOOMNOP_TypeDefinitionIndex = 78156;

class FBAMLABJMKF_NCGFJOOMNOP : public ::System::Object
{
public:
	::HNPCIOMPKDN FCEIKAIDHPM; // 0x10
	::System::Boolean ENKFIOEDIBF; // 0x28
	::System::Boolean IOAJLNGCCOE; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NCGFJOOMNOP__CTOR_OFFSET))(this);
	}

	::System::Void MCECJLLLIBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NCGFJOOMNOP_MCECJLLLIBE_OFFSET))(this);
	}

	::System::Void ANGCGHCGMGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NCGFJOOMNOP_ANGCGHCGMGP_OFFSET))(this);
	}

	::System::Void CFFJDPPHADO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NCGFJOOMNOP_CFFJDPPHADO_OFFSET))(this);
	}

	::System::Void GKNBIEPMLBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NCGFJOOMNOP_GKNBIEPMLBN_OFFSET))(this);
	}
};
