#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define RPG_CLIENT_PLANESLICE_GDALMNIDFNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F024A0)
#define RPG_CLIENT_PLANESLICE_GDALMNIDFNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3F024B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlaneSlice_GDALMNIDFNI_TypeDefinitionIndex = 72678;

	struct alignas(4) PlaneSlice_GDALMNIDFNI
	{
		::System::Int32 NBPINLGNJOJ; // 0x10
		::System::Int32 CBLMJGECJON; // 0x14
		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_GDALMNIDFNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_GDALMNIDFNI_GETHASHCODE_OFFSET))(this);
		}

	};
}
