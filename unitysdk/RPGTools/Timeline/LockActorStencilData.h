#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_LOCKACTORSTENCILDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF3E79B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LockActorStencilData_TypeDefinitionIndex = 49220;

	class LockActorStencilData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Int32 StencilIndex; // 0x18
		::System::Boolean ApplyToBody; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LOCKACTORSTENCILDATA_CTOR_OFFSET))(this);
		}

	};
}
