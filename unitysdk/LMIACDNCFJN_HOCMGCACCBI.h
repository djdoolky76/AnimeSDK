#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LMIACDNCFJN_HOCMGCACCBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB77CF50)

inline static constexpr unsigned int LMIACDNCFJN_HOCMGCACCBI_TypeDefinitionIndex = 64697;

	class LMIACDNCFJN_HOCMGCACCBI : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EquipIDs; // 0x10
		::System::UInt32 Star; // 0x18
		::System::UInt32 RoleID; // 0x1C
		::System::UInt32 Pos; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIACDNCFJN_HOCMGCACCBI_CTOR_OFFSET))(this);
		}

	};
