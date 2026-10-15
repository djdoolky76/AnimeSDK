#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKLHNHFCDBL_BPCAEANBJKA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A95940)

inline static constexpr unsigned int GKLHNHFCDBL_BPCAEANBJKA_TypeDefinitionIndex = 67779;

	class GKLHNHFCDBL_BPCAEANBJKA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Paths; // 0x10
		::System::UInt32 AvatarID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLHNHFCDBL_BPCAEANBJKA_CTOR_OFFSET))(this);
		}

	};
