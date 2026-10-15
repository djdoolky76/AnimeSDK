#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEnumerator; }

#define FDIPIKOKIIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4735C0)
#define FDIPIKOKIIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4737C0)

	class FDIPIKOKIIH : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* HJLNGDPAMOD; // 0x10
		::System::Void _ctor(::System::Collections::IEnumerable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + FDIPIKOKIIH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIPIKOKIIH_DISPOSE_OFFSET))(this);
		}

	};
