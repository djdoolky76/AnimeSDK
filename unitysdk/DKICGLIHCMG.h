#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DKICGLIHCMG_CTOR_OFFSET UNITYSDK_OFFSET(0xF880A40)
#define DKICGLIHCMG_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xF8809A0)

inline static constexpr unsigned int DKICGLIHCMG_TypeDefinitionIndex = 62453;

	class DKICGLIHCMG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKICGLIHCMG_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKICGLIHCMG_JJNFOPNOPBF_OFFSET))(this);
		}

	};
