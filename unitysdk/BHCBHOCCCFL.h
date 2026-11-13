#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJHOJHBEJGL.h"
#include "unitysdk/System/Object.h"
class EDNFOIODAHO;

#define BHCBHOCCCFL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D2B7390)
#define BHCBHOCCCFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B7450)
#define BHCBHOCCCFL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1D2B7330)

inline static constexpr unsigned int BHCBHOCCCFL_TypeDefinitionIndex = 44365;

	class BHCBHOCCCFL : public ::System::Object
	{
	public:
		::EDNFOIODAHO* FDMNBHNAEED; // 0x10
		::IJHOJHBEJGL NPAOBGDKLHB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCBHOCCCFL_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCBHOCCCFL_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCBHOCCCFL_CLEAR_OFFSET))(this);
		}

	};
