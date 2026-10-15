#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PMKGLBJEMNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F8E50)

inline static constexpr unsigned int PMKGLBJEMNM_TypeDefinitionIndex = 42944;

	class PMKGLBJEMNM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKGLBJEMNM_CTOR_OFFSET))(this);
		}

	};
