#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class BAEDBIJINGO;

#define PPCGJJMJJAP_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x1EBC0230)
#define PPCGJJMJJAP_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1EBC05E0)
#define PPCGJJMJJAP_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x1EBC0010)
#define PPCGJJMJJAP_INIT_OFFSET UNITYSDK_OFFSET(0x1EBC0450)
#define PPCGJJMJJAP_ONSYNC_OFFSET UNITYSDK_OFFSET(0x1EBC03D0)
#define PPCGJJMJJAP_POLISH_OFFSET UNITYSDK_OFFSET(0x1EBC04F0)
#define PPCGJJMJJAP_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1EBC0540)
#define PPCGJJMJJAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC05D0)

inline static constexpr unsigned int PPCGJJMJJAP_TypeDefinitionIndex = 41835;

class PPCGJJMJJAP : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle HDIEABKPPNF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCGJJMJJAP__CTOR_OFFSET))(this);
	}

	::System::Void ComputeSync(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + PPCGJJMJJAP_COMPUTESYNC_OFFSET))(this, MAHAOAIGPEH, PMNLNNGEIFM);
	}

	::System::Void ApplySyncToWwise(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + PPCGJJMJJAP_APPLYSYNCTOWWISE_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::Void OnSync(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Single))((::PBYTE)hIl2Cpp + PPCGJJMJJAP_ONSYNC_OFFSET))(this, MAHAOAIGPEH, PMNLNNGEIFM);
	}

	::System::Void Init(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + PPCGJJMJJAP_INIT_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCGJJMJJAP_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCGJJMJJAP_RECYCLE_OFFSET))(this);
	}

	static ::PPCGJJMJJAP* COKNIICCODC(::Foundation::ViewObject::ViewObjectHandle PHHDHIBOCKA)
	{
		return ((::PPCGJJMJJAP*(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + PPCGJJMJJAP_COKNIICCODC_OFFSET))(PHHDHIBOCKA);
	}
};
