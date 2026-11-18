#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BAEDBIJINGO;
namespace UnityEngine { class Transform; }

#define HOKCDOLPPLC_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x1819AFC0)
#define HOKCDOLPPLC_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1819B490)
#define HOKCDOLPPLC_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x1819A980)
#define HOKCDOLPPLC_INIT_OFFSET UNITYSDK_OFFSET(0x1819B3E0)
#define HOKCDOLPPLC_ONSYNC_OFFSET UNITYSDK_OFFSET(0x1819B250)
#define HOKCDOLPPLC_POLISH_OFFSET UNITYSDK_OFFSET(0x1819B2D0)
#define HOKCDOLPPLC_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1819B330)
#define HOKCDOLPPLC__CTOR_OFFSET UNITYSDK_OFFSET(0x1819B480)

inline static constexpr unsigned int HOKCDOLPPLC_TypeDefinitionIndex = 68043;

class HOKCDOLPPLC : public ::System::Object
{
public:
	::UnityEngine::Transform* GKBJOPJKCLB; // 0x10
	::UnityEngine::Vector3 BOGPAHGJOJK; // 0x18
	::System::Single NCCDJLDKFGA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKCDOLPPLC__CTOR_OFFSET))(this);
	}

	::System::Void ComputeSync(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + HOKCDOLPPLC_COMPUTESYNC_OFFSET))(this, MAHAOAIGPEH, PMNLNNGEIFM);
	}

	::System::Void ApplySyncToWwise(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + HOKCDOLPPLC_APPLYSYNCTOWWISE_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::Void OnSync(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + HOKCDOLPPLC_ONSYNC_OFFSET))(this, MAHAOAIGPEH, PMNLNNGEIFM);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKCDOLPPLC_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKCDOLPPLC_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + HOKCDOLPPLC_INIT_OFFSET))(this, MAHAOAIGPEH);
	}

	static ::HOKCDOLPPLC* COKNIICCODC(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single NCCDJLDKFGA, ::UnityEngine::Vector3 BOGPAHGJOJK)
	{
		return ((::HOKCDOLPPLC*(*)(::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOKCDOLPPLC_COKNIICCODC_OFFSET))(GKBJOPJKCLB, NCCDJLDKFGA, BOGPAHGJOJK);
	}
};
