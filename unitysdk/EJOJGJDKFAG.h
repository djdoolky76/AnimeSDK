#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDIBGBGPCMN.h"
#include "unitysdk/OKGLILBPOFO.h"

class HIDPAPFBACC;

#define EJOJGJDKFAG_EKBCHKAHJFP_OFFSET UNITYSDK_OFFSET(0x11CACAC0)
#define EJOJGJDKFAG_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x11CAC640)
#define EJOJGJDKFAG_IIAJENBFAEC_OFFSET UNITYSDK_OFFSET(0x11CACCC0)
#define EJOJGJDKFAG__CTOR_OFFSET UNITYSDK_OFFSET(0x11CAC630)

inline static constexpr unsigned int EJOJGJDKFAG_TypeDefinitionIndex = 72842;

class EJOJGJDKFAG : public ::OKGLILBPOFO
{
public:
	::JDIBGBGPCMN MHKAJCBKKNG; // 0x20

	::System::Void _ctor(::HIDPAPFBACC* DEKJDEPKKLH, ::JDIBGBGPCMN AHNPEMJHJMG)
	{
		return ((::System::Void(*)(::PVOID, ::HIDPAPFBACC*, ::JDIBGBGPCMN))((::PBYTE)hIl2Cpp + EJOJGJDKFAG__CTOR_OFFSET))(this, DEKJDEPKKLH, AHNPEMJHJMG);
	}

	::System::Void GLEJMKLOMBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOJGJDKFAG_GLEJMKLOMBP_OFFSET))(this);
	}

	::System::Void EKBCHKAHJFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOJGJDKFAG_EKBCHKAHJFP_OFFSET))(this);
	}

	::System::Void IIAJENBFAEC(::System::Int32 IENHLBFCKFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJOJGJDKFAG_IIAJENBFAEC_OFFSET))(this, IENHLBFCKFC);
	}
};
