#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBKBBKFNAGN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class IJLOBIGIEDO;
namespace System { class String; }

#define MJNEGKJMIJI_KBANEPMGJFP_DLIBMKMHJCJ_OFFSET UNITYSDK_OFFSET(0x1A65E510)
#define MJNEGKJMIJI_KBANEPMGJFP_DPILGOAEGCM_OFFSET UNITYSDK_OFFSET(0x1A65E4F0)
#define MJNEGKJMIJI_KBANEPMGJFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65E4E0)

inline static constexpr unsigned int MJNEGKJMIJI_KBANEPMGJFP_TypeDefinitionIndex = 81573;

class MJNEGKJMIJI_KBANEPMGJFP : public ::System::Object
{
public:
	::MoleMole::EntityHandle AMNIHACKELI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNEGKJMIJI_KBANEPMGJFP__CTOR_OFFSET))(this);
	}

	::System::Void DPILGOAEGCM(::LBKBBKFNAGN KDEHMPGOCEP, ::LBKBBKFNAGN PADJNMGMGHO, ::IJLOBIGIEDO* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::LBKBBKFNAGN, ::LBKBBKFNAGN, ::IJLOBIGIEDO*))((::PBYTE)hIl2Cpp + MJNEGKJMIJI_KBANEPMGJFP_DPILGOAEGCM_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, ECMMKCJLBMD);
	}

	::System::Void DLIBMKMHJCJ(::System::UInt32 KDEHMPGOCEP, ::System::UInt32 HODAIDNDKHD, ::System::String* BHDNBGLCNOM, ::System::Object* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MJNEGKJMIJI_KBANEPMGJFP_DLIBMKMHJCJ_OFFSET))(this, KDEHMPGOCEP, HODAIDNDKHD, BHDNBGLCNOM, EGEGIMGMJHN);
	}
};
