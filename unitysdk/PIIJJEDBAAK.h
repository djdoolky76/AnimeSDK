#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIIJJEDBAAK_CTOR_OFFSET UNITYSDK_OFFSET(0xC261910)
#define PIIJJEDBAAK_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xC261870)

inline static constexpr unsigned int PIIJJEDBAAK_TypeDefinitionIndex = 62455;

	class PIIJJEDBAAK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIJJEDBAAK_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIJJEDBAAK_JJNFOPNOPBF_OFFSET))(this);
		}

	};
