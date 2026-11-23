#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_ENUM_AC4B853B9389FB2D__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5180)

namespace System
{
	inline static constexpr unsigned int Enum_AC4B853B9389FB2D_TypeDefinitionIndex = 11585;

	class Enum_AC4B853B9389FB2D : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt64>* BB5CD6EB3B9A6E7C; // 0x10
		::Il2CppArray<::System::String*>* BF0012EC5A31F87B; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::UInt64>* BFC23782BAD1518D, ::Il2CppArray<::System::String*>* A2AC4976855B375E)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt64>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_ENUM_AC4B853B9389FB2D__CTOR_OFFSET))(this, BFC23782BAD1518D, A2AC4976855B375E);
		}
	};
}
