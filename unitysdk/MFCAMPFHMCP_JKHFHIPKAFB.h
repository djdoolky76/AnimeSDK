#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKCPBAAEJJO.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CLBFDOIGIMB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFCAMPFHMCP_JKHFHIPKAFB_FIEOIAIDLEP_OFFSET UNITYSDK_OFFSET(0x1852FFF0)
#define MFCAMPFHMCP_JKHFHIPKAFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1852FF70)

inline static constexpr unsigned int MFCAMPFHMCP_JKHFHIPKAFB_TypeDefinitionIndex = 57746;

class MFCAMPFHMCP_JKHFHIPKAFB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CLBFDOIGIMB*>* ABMOHLBOBOP; // 0x10
	::System::Single CCBDPKPBNHH; // 0x18
	::UnityEngine::Vector3 CKPGOKHECCH; // 0x1C
	::FKCPBAAEJJO ANABLMFCGBH; // 0x28
	::System::Nullable_1<::System::Object*> KMGJPMEJDJJ; // 0x2C
	::System::Byte _padding0[0x4];
	::System::Int32 OIKFFGKDHME; // 0x38
	::System::Boolean MKFNCEIIPKH; // 0x3C
	::System::Byte _padding1[0x3];
	::System::Int32 JHFKDGBCOBA; // 0x40
	::UnityEngine::Vector3 FMJGOHNLJNA; // 0x44
	::System::Int32 NOKMIJNFMBH; // 0x50

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF, ::System::Int32 CBLGCIFLMKL, ::UnityEngine::Vector3 NNCEPJBADJF, ::FKCPBAAEJJO AAMCFCGLIIB, ::UnityEngine::Vector3 JNDDJMAHNAI, ::System::Single CFJFMMGPGKE, ::System::Boolean FIPHFGHNNBE, ::System::Int32 NOKMIJNFMBH, ::System::Nullable_1<::System::Object*> KMGJPMEJDJJ, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>* ABMOHLBOBOP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::FKCPBAAEJJO, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::System::Object*>, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>*))((::PBYTE)hIl2Cpp + MFCAMPFHMCP_JKHFHIPKAFB__CTOR_OFFSET))(this, MGMDLMBEDJF, CBLGCIFLMKL, NNCEPJBADJF, AAMCFCGLIIB, JNDDJMAHNAI, CFJFMMGPGKE, FIPHFGHNNBE, NOKMIJNFMBH, KMGJPMEJDJJ, ABMOHLBOBOP);
	}

	::System::Void FIEOIAIDLEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCAMPFHMCP_JKHFHIPKAFB_FIEOIAIDLEP_OFFSET))(this);
	}
};
