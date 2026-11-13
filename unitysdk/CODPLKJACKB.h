#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define CODPLKJACKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1915D5D0)

inline static constexpr unsigned int CODPLKJACKB_TypeDefinitionIndex = 66307;

	class CODPLKJACKB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* DataList; // 0x10
		::System::UInt32 Version; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODPLKJACKB_CTOR_OFFSET))(this);
		}

	};
