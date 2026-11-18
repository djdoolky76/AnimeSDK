#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BAEDBIJINGO;
namespace UnityEngine { class Transform; }

#define PMHGFGBBPGB_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x1D632260)
#define PMHGFGBBPGB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1D632750)
#define PMHGFGBBPGB_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x1D6317A0)
#define PMHGFGBBPGB_INIT_OFFSET UNITYSDK_OFFSET(0x1D6326A0)
#define PMHGFGBBPGB_ONSYNC_OFFSET UNITYSDK_OFFSET(0x1D6324F0)
#define PMHGFGBBPGB_POLISH_OFFSET UNITYSDK_OFFSET(0x1D632570)
#define PMHGFGBBPGB_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1D6325E0)
#define PMHGFGBBPGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D632740)

inline static constexpr unsigned int PMHGFGBBPGB_TypeDefinitionIndex = 73930;

class PMHGFGBBPGB : public ::System::Object
{
public:
	::UnityEngine::Transform* GKBJOPJKCLB; // 0x10
	::UnityEngine::Vector3 BOGPAHGJOJK; // 0x18
	::UnityEngine::Vector3 LJIOPEEACPL; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHGFGBBPGB__CTOR_OFFSET))(this);
	}

	::System::Void ComputeSync(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + PMHGFGBBPGB_COMPUTESYNC_OFFSET))(this, MAHAOAIGPEH, PMNLNNGEIFM);
	}

	::System::Void ApplySyncToWwise(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + PMHGFGBBPGB_APPLYSYNCTOWWISE_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::Void OnSync(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + PMHGFGBBPGB_ONSYNC_OFFSET))(this, MAHAOAIGPEH, PMNLNNGEIFM);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHGFGBBPGB_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHGFGBBPGB_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + PMHGFGBBPGB_INIT_OFFSET))(this, MAHAOAIGPEH);
	}

	static ::PMHGFGBBPGB* COKNIICCODC(::UnityEngine::Transform* GKBJOPJKCLB, ::UnityEngine::Vector3 LJIOPEEACPL, ::UnityEngine::Vector3 BOGPAHGJOJK)
	{
		return ((::PMHGFGBBPGB*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PMHGFGBBPGB_COKNIICCODC_OFFSET))(GKBJOPJKCLB, LJIOPEEACPL, BOGPAHGJOJK);
	}
};
