#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BAEDBIJINGO;

#define FDOCOFNGOOB_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x169CB2B0)
#define FDOCOFNGOOB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x169CB630)
#define FDOCOFNGOOB_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x169CB250)
#define FDOCOFNGOOB_INIT_OFFSET UNITYSDK_OFFSET(0x169CB5C0)
#define FDOCOFNGOOB_ONSYNC_OFFSET UNITYSDK_OFFSET(0x169CB450)
#define FDOCOFNGOOB_POLISH_OFFSET UNITYSDK_OFFSET(0x169CB4F0)
#define FDOCOFNGOOB_RECYCLE_OFFSET UNITYSDK_OFFSET(0x169CB530)
#define FDOCOFNGOOB__CTOR_OFFSET UNITYSDK_OFFSET(0x169CB620)

inline static constexpr unsigned int FDOCOFNGOOB_TypeDefinitionIndex = 68456;

class FDOCOFNGOOB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOCOFNGOOB__CTOR_OFFSET))(this);
	}

	::System::Void ComputeSync(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + FDOCOFNGOOB_COMPUTESYNC_OFFSET))(this, MAHAOAIGPEH, PMNLNNGEIFM);
	}

	::System::Void ApplySyncToWwise(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + FDOCOFNGOOB_APPLYSYNCTOWWISE_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::Void OnSync(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + FDOCOFNGOOB_ONSYNC_OFFSET))(this, MAHAOAIGPEH, PMNLNNGEIFM);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOCOFNGOOB_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDOCOFNGOOB_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + FDOCOFNGOOB_INIT_OFFSET))(this, MAHAOAIGPEH);
	}

	static ::FDOCOFNGOOB* COKNIICCODC()
	{
		return ((::FDOCOFNGOOB*(*)())((::PBYTE)hIl2Cpp + FDOCOFNGOOB_COKNIICCODC_OFFSET))();
	}
};
