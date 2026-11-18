#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKAUDIOINTERRUPTIONCALLBACKINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FF4E3B0)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF4E290)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FF4E340)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1FF4E1D0)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_GET_BENTERINTERRUPTION_OFFSET UNITYSDK_OFFSET(0x1FF4E560)
#define AKAUDIOINTERRUPTIONCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1FF4E1E0)
#define AKAUDIOINTERRUPTIONCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF4E5E0)
#define AKAUDIOINTERRUPTIONCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF4E1C0)

inline static constexpr unsigned int AkAudioInterruptionCallbackInfo_TypeDefinitionIndex = 33124;

class AkAudioInterruptionCallbackInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::Byte _padding0[0x7];
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkAudioInterruptionCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkAudioInterruptionCallbackInfo*))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Boolean get_bEnterInterruption()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOINTERRUPTIONCALLBACKINFO_GET_BENTERINTERRUPTION_OFFSET))(this);
	}
};
