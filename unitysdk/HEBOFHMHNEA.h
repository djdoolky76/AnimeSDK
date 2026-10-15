#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEBOFHMHNEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C43750)
#define HEBOFHMHNEA_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x15C43710)

inline static constexpr unsigned int HEBOFHMHNEA_TypeDefinitionIndex = 62444;

	class HEBOFHMHNEA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBOFHMHNEA_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBOFHMHNEA_JJNFOPNOPBF_OFFSET))(this);
		}

	};
