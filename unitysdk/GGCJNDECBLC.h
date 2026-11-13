#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GGCJNDECBLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A0840)

inline static constexpr unsigned int GGCJNDECBLC_TypeDefinitionIndex = 49989;

	class GGCJNDECBLC : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* HandleRight; // 0x10
		::Il2CppArray<::System::Single>* Pos; // 0x18
		::Il2CppArray<::System::Single>* HandleLeft; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCJNDECBLC_CTOR_OFFSET))(this);
		}

	};
