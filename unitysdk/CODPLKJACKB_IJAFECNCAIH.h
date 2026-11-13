#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CODPLKJACKB_IJAFECNCAIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1915D600)

inline static constexpr unsigned int CODPLKJACKB_IJAFECNCAIH_TypeDefinitionIndex = 66308;

	class CODPLKJACKB_IJAFECNCAIH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Equips; // 0x10
		::System::UInt32 Star; // 0x18
		::System::UInt32 RoleID; // 0x1C
		::System::UInt32 PosIndex; // 0x20
		::System::Boolean IsMain; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODPLKJACKB_IJAFECNCAIH_CTOR_OFFSET))(this);
		}

	};
