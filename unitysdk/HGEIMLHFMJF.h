#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HGEIMLHFMJF_CTOR_OFFSET UNITYSDK_OFFSET(0x16BE0230)
#define HGEIMLHFMJF_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x16BE0190)

inline static constexpr unsigned int HGEIMLHFMJF_TypeDefinitionIndex = 63869;

	class HGEIMLHFMJF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEIMLHFMJF_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEIMLHFMJF_JJNFOPNOPBF_OFFSET))(this);
		}

	};
