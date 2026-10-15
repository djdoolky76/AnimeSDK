#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBPOAAFJECJ;

#define GJBHJOKCCKD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAAFE80)
#define GJBHJOKCCKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAAFF00)

inline static constexpr unsigned int GJBHJOKCCKD_TypeDefinitionIndex = 43663;

	class GJBHJOKCCKD : public ::System::Object
	{
	public:
		::JBPOAAFJECJ* APHHKHIJJDJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBHJOKCCKD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBHJOKCCKD_CLEAR_OFFSET))(this);
		}

	};
