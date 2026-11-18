#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Diagnostics { class StackFrame; }

#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_GETNATIVEIMAGEBASE_OFFSET UNITYSDK_OFFSET(0x1E0B6FD0)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_GETNATIVEIP_OFFSET UNITYSDK_OFFSET(0x1E0B7010)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASILOFFSET_OFFSET UNITYSDK_OFFSET(0x1E0B7050)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASMETHOD_OFFSET UNITYSDK_OFFSET(0x1E0B7090)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASNATIVEIMAGE_OFFSET UNITYSDK_OFFSET(0x1E0B70D0)
#define SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASSOURCE_OFFSET UNITYSDK_OFFSET(0x1E0B7110)

namespace System::Diagnostics
{
	inline static constexpr unsigned int StackFrameExtensions_TypeDefinitionIndex = 4187;

	class StackFrameExtensions : public ::System::Object
	{
	public:
		static ::System::IntPtr GetNativeImageBase(::System::Diagnostics::StackFrame* stackFrame)
		{
			return ((::System::IntPtr(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_GETNATIVEIMAGEBASE_OFFSET))(stackFrame);
		}

		static ::System::IntPtr GetNativeIP(::System::Diagnostics::StackFrame* stackFrame)
		{
			return ((::System::IntPtr(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_GETNATIVEIP_OFFSET))(stackFrame);
		}

		static ::System::Boolean HasILOffset(::System::Diagnostics::StackFrame* stackFrame)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASILOFFSET_OFFSET))(stackFrame);
		}

		static ::System::Boolean HasMethod(::System::Diagnostics::StackFrame* stackFrame)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASMETHOD_OFFSET))(stackFrame);
		}

		static ::System::Boolean HasNativeImage(::System::Diagnostics::StackFrame* stackFrame)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASNATIVEIMAGE_OFFSET))(stackFrame);
		}

		static ::System::Boolean HasSource(::System::Diagnostics::StackFrame* stackFrame)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKFRAMEEXTENSIONS_HASSOURCE_OFFSET))(stackFrame);
		}
	};
}
