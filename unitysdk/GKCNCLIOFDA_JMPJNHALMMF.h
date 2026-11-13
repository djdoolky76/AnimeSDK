#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKCNCLIOFDA_JMPJNHALMMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CB970)
#define GKCNCLIOFDA_JMPJNHALMMF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1A8CC870)

inline static constexpr unsigned int GKCNCLIOFDA_JMPJNHALMMF_TypeDefinitionIndex = 54696;

	class GKCNCLIOFDA_JMPJNHALMMF : public ::System::Object
	{
	public:
		::System::Single HFDCEMJGHNN; // 0x10
		::System::Single BAJFNPFEIEM; // 0x14
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JMPJNHALMMF_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JMPJNHALMMF_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
