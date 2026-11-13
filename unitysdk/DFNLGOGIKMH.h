#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DFNLGOGIKMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E782890)

inline static constexpr unsigned int DFNLGOGIKMH_TypeDefinitionIndex = 42884;

	class DFNLGOGIKMH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNLGOGIKMH_CTOR_OFFSET))(this);
		}

	};
