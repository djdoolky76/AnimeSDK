#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PMKGLBJEMNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBBC560)

inline static constexpr unsigned int PMKGLBJEMNM_TypeDefinitionIndex = 43925;

	class PMKGLBJEMNM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKGLBJEMNM_CTOR_OFFSET))(this);
		}

	};
