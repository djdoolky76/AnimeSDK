#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int F6C027D9C0F1D839_TypeDefinitionIndex = 10816;

	enum class F6C027D9C0F1D839 : ::System::Int32
	{
		CodeTypeMask = 3,
		IL = 0,
		Native = 1,
		OPTIL = 2,
		Runtime = 3,
		ManagedMask = 4,
		Unmanaged = 4,
		Managed = 0,
		ForwardRef = 16,
		PreserveSig = 128,
		InternalCall = 4096,
		Synchronized = 32,
		NoInlining = 8,
		AggressiveInlining = 256,
		NoOptimization = 64,
		MaxMethodImplVal = 65535,
		SecurityMitigations = 1024,
	};
}
