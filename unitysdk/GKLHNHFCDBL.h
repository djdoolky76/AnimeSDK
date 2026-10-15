#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define GKLHNHFCDBL_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA1490)

inline static constexpr unsigned int GKLHNHFCDBL_TypeDefinitionIndex = 67778;

	class GKLHNHFCDBL : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* DataList; // 0x10
		::System::UInt32 DataVersion; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLHNHFCDBL_CTOR_OFFSET))(this);
		}

	};
