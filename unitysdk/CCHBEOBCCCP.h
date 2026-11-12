#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CCHBEOBCCCP_CTOR_OFFSET UNITYSDK_OFFSET(0xCE2E7E0)

inline static constexpr unsigned int CCHBEOBCCCP_TypeDefinitionIndex = 49987;

	class CCHBEOBCCCP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* Pos; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHBEOBCCCP_CTOR_OFFSET))(this);
		}

	};
