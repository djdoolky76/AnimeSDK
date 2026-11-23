#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITYENGINE_AEF15FF8FF0613CF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x27592A0)
#define UNITYENGINE_AEF15FF8FF0613CF__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

namespace UnityEngine
{
	inline static constexpr unsigned int AEF15FF8FF0613CF_TypeDefinitionIndex = 17408;

	class AEF15FF8FF0613CF : public ::System::Attribute
	{
	public:
		::System::Type* EC4C786FCB6F963C; // 0x10
		::System::Type* BB16D4B6D04BAC4D; // 0x18
		::System::Type* AF25807FA5B28D31; // 0x20

		::System::Void _ctor(::System::Type* E0C130F6AFFD1B37)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_AEF15FF8FF0613CF__CTOR_OFFSET))(this, E0C130F6AFFD1B37);
		}

		::System::Void _ctor_1(::System::Type* E0C130F6AFFD1B37, ::System::Type* A24383AEA27222E9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_AEF15FF8FF0613CF__CTOR_1_OFFSET))(this, E0C130F6AFFD1B37, A24383AEA27222E9);
		}
	};
}
