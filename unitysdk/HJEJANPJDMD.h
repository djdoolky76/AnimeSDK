#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BAEDBIJINGO;
namespace UnityEngine { class Transform; }

#define HJEJANPJDMD_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x140BADB0)
#define HJEJANPJDMD_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x140BB180)
#define HJEJANPJDMD_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x140BA810)
#define HJEJANPJDMD_INIT_OFFSET UNITYSDK_OFFSET(0x140BB0D0)
#define HJEJANPJDMD_ONSYNC_OFFSET UNITYSDK_OFFSET(0x140BAF50)
#define HJEJANPJDMD_POLISH_OFFSET UNITYSDK_OFFSET(0x140BAFD0)
#define HJEJANPJDMD_RECYCLE_OFFSET UNITYSDK_OFFSET(0x140BB030)
#define HJEJANPJDMD__CTOR_OFFSET UNITYSDK_OFFSET(0x140BB170)

inline static constexpr unsigned int HJEJANPJDMD_TypeDefinitionIndex = 42479;

class HJEJANPJDMD : public ::System::Object
{
public:
	::UnityEngine::Transform* GKBJOPJKCLB; // 0x10
	::UnityEngine::Vector3 BOGPAHGJOJK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEJANPJDMD__CTOR_OFFSET))(this);
	}

	::System::Void ComputeSync(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + HJEJANPJDMD_COMPUTESYNC_OFFSET))(this, MAHAOAIGPEH, PMNLNNGEIFM);
	}

	::System::Void ApplySyncToWwise(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + HJEJANPJDMD_APPLYSYNCTOWWISE_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::Void OnSync(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + HJEJANPJDMD_ONSYNC_OFFSET))(this, MAHAOAIGPEH, PMNLNNGEIFM);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEJANPJDMD_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEJANPJDMD_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + HJEJANPJDMD_INIT_OFFSET))(this, MAHAOAIGPEH);
	}

	static ::HJEJANPJDMD* COKNIICCODC(::UnityEngine::Transform* DDNIHAIOCBD, ::UnityEngine::Vector3 BOGPAHGJOJK)
	{
		return ((::HJEJANPJDMD*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HJEJANPJDMD_COKNIICCODC_OFFSET))(DDNIHAIOCBD, BOGPAHGJOJK);
	}
};
