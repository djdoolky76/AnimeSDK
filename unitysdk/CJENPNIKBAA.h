#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CJENPNIKBAA_CTOR_OFFSET UNITYSDK_OFFSET(0xD2023B0)

inline static constexpr unsigned int CJENPNIKBAA_TypeDefinitionIndex = 81996;

	class CJENPNIKBAA : public ::System::Object
	{
	public:
		::System::Int32 JOGMEBDMGNG; // 0x10
		::System::Boolean NBCKMAFIBPI; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJENPNIKBAA_CTOR_OFFSET))(this);
		}

	};
