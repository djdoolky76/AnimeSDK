#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEnumerator; }

#define FDIPIKOKIIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C444F50)
#define FDIPIKOKIIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C445150)

inline static constexpr unsigned int FDIPIKOKIIH_TypeDefinitionIndex = 41439;

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
