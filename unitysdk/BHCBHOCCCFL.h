#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJHOJHBEJGL.h"
#include "unitysdk/System/Object.h"
class EDNFOIODAHO;

#define BHCBHOCCCFL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C88CBD0)
#define BHCBHOCCCFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88CC90)
#define BHCBHOCCCFL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C88CB70)

inline static constexpr unsigned int BHCBHOCCCFL_TypeDefinitionIndex = 43384;

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
