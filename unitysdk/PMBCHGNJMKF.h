#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APKFHDOGGJH.h"
#include "unitysdk/ELECMKLDBJJ.h"
#include "unitysdk/PBKHDCIJJLE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LKEBCNKGCEA.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"

#define PMBCHGNJMKF_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x7E0B20)
#define PMBCHGNJMKF_PHKELKBDAJN_OFFSET UNITYSDK_OFFSET(0x7E0AA0)
#define PMBCHGNJMKF__CCTOR_OFFSET UNITYSDK_OFFSET(0x194B82B0)
#define PMBCHGNJMKF__CTOR_OFFSET UNITYSDK_OFFSET(0x7E0A20)

inline static constexpr unsigned int PMBCHGNJMKF_TypeDefinitionIndex = 52535;

struct alignas(4) PMBCHGNJMKF
{
	static ::PMBCHGNJMKF* StaticGet_FGBLILBNEHG()
	{
		return (::PMBCHGNJMKF*)Il2CppClass::FromTypeDefinitionIndex(PMBCHGNJMKF_TypeDefinitionIndex)->GetStaticField(0xD2F0);
	}
	::PBKHDCIJJLE EFIDCIPAOAM; // 0x10
	::ELECMKLDBJJ JJLANKAPHHP; // 0x60
	::APKFHDOGGJH FBKKLFKPIIK; // 0x90

	::System::Void _ctor(::PBKHDCIJJLE PCMOGDDEPCG, ::ELECMKLDBJJ FIAIEEIHHOM, ::APKFHDOGGJH DEMACIIKIED)
	{
		return ((::System::Void(*)(::PVOID, ::PBKHDCIJJLE, ::ELECMKLDBJJ, ::APKFHDOGGJH))((::PBYTE)hIl2Cpp + PMBCHGNJMKF__CTOR_OFFSET))(this, PCMOGDDEPCG, FIAIEEIHHOM, DEMACIIKIED);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMBCHGNJMKF__CCTOR_OFFSET))();
	}

	::System::Single PHKELKBDAJN(::LKEBCNKGCEA EGEGIMGMJHN, ::UnityEngine::Animations::AnimationStream CPKODGLINAO, ::System::Single JFLDAALEMGB)
	{
		return ((::System::Single(*)(::PVOID, ::LKEBCNKGCEA, ::UnityEngine::Animations::AnimationStream, ::System::Single))((::PBYTE)hIl2Cpp + PMBCHGNJMKF_PHKELKBDAJN_OFFSET))(this, EGEGIMGMJHN, CPKODGLINAO, JFLDAALEMGB);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBCHGNJMKF_NKDCADABLCL_OFFSET))(this);
	}
};
