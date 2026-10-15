#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GHMBKJFBPII_CTOR_OFFSET UNITYSDK_OFFSET(0x15A1DF80)

inline static constexpr unsigned int GHMBKJFBPII_TypeDefinitionIndex = 48931;

	class GHMBKJFBPII : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* Pos; // 0x10
		::System::String* Id; // 0x18
		::System::String* Name; // 0x20
		::System::String* Description; // 0x28
		::System::Nullable_1<::System::Single> Radius; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMBKJFBPII_CTOR_OFFSET))(this);
		}

	};
