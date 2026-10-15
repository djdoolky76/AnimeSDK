#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SRDebugger::Internal { class SRDebugStrings; }
namespace System { class String; }

#define SRDEBUGGER_INTERNAL_SRDEBUGSTRINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED3A890)
#define SRDEBUGGER_INTERNAL_SRDEBUGSTRINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED3A800)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int SRDebugStrings_TypeDefinitionIndex = 38107;

	class SRDebugStrings : public ::System::Object
	{
	public:
		::System::String* Profiler_DisableProfilerInfo; // 0x10
		::System::String* Console_MessageTruncated; // 0x18
		::System::String* Profiler_NotSupported; // 0x20
		::System::String* Console_NoStackTrace; // 0x28
		::System::String* Profiler_EnableProfilerInfo; // 0x30
		::System::String* PinEntryPrompt; // 0x38
		::System::String* Profiler_NoProInfo; // 0x40
		::System::String* ProfilerCameraListenerHelp; // 0x48
		static ::SRDebugger::Internal::SRDebugStrings** StaticGet_Current()
		{
			return (::SRDebugger::Internal::SRDebugStrings**)UnitySDK::FromName("SRDebugger.Internal", "SRDebugStrings")->GetStaticField(0x39780);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGSTRINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGSTRINGS_CCTOR_OFFSET))();
		}

	};
}
