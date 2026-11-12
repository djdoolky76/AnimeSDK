#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class IDisposable; }
namespace System { class String; }

#define R3_TRACKABLEDISPOSABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB190)
#define R3_TRACKABLEDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D5ABE20)
#define R3_TRACKABLEDISPOSABLE_GET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x1D5ABE10)
#define R3_TRACKABLEDISPOSABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D5AC040)

namespace R3
{
	inline static constexpr unsigned int TrackableDisposable_TypeDefinitionIndex = 36855;

	class TrackableDisposable : public ::System::Object
	{
	public:
		::System::IDisposable* _disposable_P; // 0x10
		::System::Int32 disposed; // 0x18
		::System::Int32 _trackingId_P; // 0x1C
		::System::Void _ctor(::System::IDisposable* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IDisposable*, ::System::Int32))((::PBYTE)hIl2Cpp + R3_TRACKABLEDISPOSABLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::IDisposable* get_Disposable()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_TRACKABLEDISPOSABLE_GET_DISPOSABLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_TRACKABLEDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_TRACKABLEDISPOSABLE_TOSTRING_OFFSET))(this);
		}

	};
}
