#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class IDisposable; }

#define R3_SINGLEASSIGNMENTDISPOSABLECORE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3FA3050)
#define R3_SINGLEASSIGNMENTDISPOSABLECORE_SET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x3FA3040)
#define R3_SINGLEASSIGNMENTDISPOSABLECORE_THROWALREADYASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x2091D440)

namespace R3
{
	inline static constexpr unsigned int SingleAssignmentDisposableCore_TypeDefinitionIndex = 36897;

	struct alignas(8) SingleAssignmentDisposableCore
	{
		::System::IDisposable* current; // 0x10
		::System::Void set_Disposable(::System::IDisposable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IDisposable*))((::PBYTE)hIl2Cpp + R3_SINGLEASSIGNMENTDISPOSABLECORE_SET_DISPOSABLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_SINGLEASSIGNMENTDISPOSABLECORE_DISPOSE_OFFSET))(this);
		}

		static ::System::Void ThrowAlreadyAssignment()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_SINGLEASSIGNMENTDISPOSABLECORE_THROWALREADYASSIGNMENT_OFFSET))();
		}

	};
}
