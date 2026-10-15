#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define KKJMAOMDCAE_CTOR_OFFSET UNITYSDK_OFFSET(0xB4CE7A0)

	class KKJMAOMDCAE : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* DataList; // 0x10
		::System::UInt32 Version; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJMAOMDCAE_CTOR_OFFSET))(this);
		}

	};
