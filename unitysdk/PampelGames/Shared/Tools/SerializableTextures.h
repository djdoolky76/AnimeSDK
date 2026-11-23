#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETEXTURES__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace PampelGames::Shared::Tools
{
	inline static constexpr unsigned int SerializableTextures_TypeDefinitionIndex = 21180;

	class SerializableTextures : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* flatArray; // 0x10
		::System::Int32 layer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETEXTURES__CTOR_OFFSET))(this);
		}
	};
}
