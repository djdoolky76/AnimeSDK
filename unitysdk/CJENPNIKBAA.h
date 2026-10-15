#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CJENPNIKBAA_CTOR_OFFSET UNITYSDK_OFFSET(0xD1FB1C0)

inline static constexpr unsigned int CJENPNIKBAA_TypeDefinitionIndex = 81995;

	class CJENPNIKBAA : public ::System::Object
	{
	public:
		::System::Boolean NBCKMAFIBPI; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 JOGMEBDMGNG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJENPNIKBAA_CTOR_OFFSET))(this);
		}

	};
