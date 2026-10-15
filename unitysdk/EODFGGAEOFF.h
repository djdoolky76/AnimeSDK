#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBPDHHAHKJP;

#define EODFGGAEOFF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA61B90)
#define EODFGGAEOFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA61BF0)

inline static constexpr unsigned int EODFGGAEOFF_TypeDefinitionIndex = 43338;

	class EODFGGAEOFF : public ::System::Object
	{
	public:
		::JBPDHHAHKJP* PNPCFAJNGLH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EODFGGAEOFF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EODFGGAEOFF_CLEAR_OFFSET))(this);
		}

	};
