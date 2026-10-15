#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFMDPNPMFCE;

#define AEKGAOHNOIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53C3E0)
#define AEKGAOHNOIA_GET_VALIDITYTRACKER_OFFSET UNITYSDK_OFFSET(0x1C53C1B0)
#define AEKGAOHNOIA_GNJHPPMMLKO_OFFSET UNITYSDK_OFFSET(0x1C53C1C0)

inline static constexpr unsigned int AEKGAOHNOIA_TypeDefinitionIndex = 41839;

	class AEKGAOHNOIA : public ::System::Object
	{
	public:
		::OFMDPNPMFCE* _ValidityTracker_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKGAOHNOIA_CTOR_OFFSET))(this);
		}

		::OFMDPNPMFCE* get_ValidityTracker()
		{
			return ((::OFMDPNPMFCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKGAOHNOIA_GET_VALIDITYTRACKER_OFFSET))(this);
		}

		::System::Boolean GNJHPPMMLKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKGAOHNOIA_GNJHPPMMLKO_OFFSET))(this);
		}

	};
