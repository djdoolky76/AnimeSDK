#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CJENPNIKBAA_CTOR_OFFSET UNITYSDK_OFFSET(0x177C6000)

inline static constexpr unsigned int CJENPNIKBAA_TypeDefinitionIndex = 84776;

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
