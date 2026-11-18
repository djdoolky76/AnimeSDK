#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PNJDGHBEMLK;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define OMBCMMJMEFL_GDIHIHLBBEB_DKIAJBILHIF_OFFSET UNITYSDK_OFFSET(0x12949F30)
#define OMBCMMJMEFL_GDIHIHLBBEB_KMMIEDCCAED_OFFSET UNITYSDK_OFFSET(0x12949D90)
#define OMBCMMJMEFL_GDIHIHLBBEB__CTOR_OFFSET UNITYSDK_OFFSET(0x12949D80)

inline static constexpr unsigned int OMBCMMJMEFL_GDIHIHLBBEB_TypeDefinitionIndex = 75135;

class OMBCMMJMEFL_GDIHIHLBBEB : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* ANKNDFPDGDH; // 0x10
	::PNJDGHBEMLK* GBBGMCOPLAC; // 0x18
	::UnityEngine::Vector3 IACKHFCLPJI; // 0x20
	::UnityEngine::Vector3 AKAGDEFAGJA; // 0x2C
	::System::Single ALBNHHLPFNG; // 0x38
	::System::Single HPBKLNALJLG; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBCMMJMEFL_GDIHIHLBBEB__CTOR_OFFSET))(this);
	}

	::System::Void KMMIEDCCAED(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMBCMMJMEFL_GDIHIHLBBEB_KMMIEDCCAED_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DKIAJBILHIF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBCMMJMEFL_GDIHIHLBBEB_DKIAJBILHIF_OFFSET))(this);
	}
};
