#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CCHBEOBCCCP_CTOR_OFFSET UNITYSDK_OFFSET(0xC73C280)

	class CCHBEOBCCCP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* Pos; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHBEOBCCCP_CTOR_OFFSET))(this);
		}

	};
