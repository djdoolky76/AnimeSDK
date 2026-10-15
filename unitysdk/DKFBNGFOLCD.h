#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKFBNGFOLCD;

#define DKFBNGFOLCD_CTOR_OFFSET UNITYSDK_OFFSET(0xF87A390)
#define DKFBNGFOLCD_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0xF87A3A0)
#define DKFBNGFOLCD_GAJGBBFELEL_OFFSET UNITYSDK_OFFSET(0xF87A1D0)

inline static constexpr unsigned int DKFBNGFOLCD_TypeDefinitionIndex = 68237;

	class DKFBNGFOLCD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFBNGFOLCD_CTOR_OFFSET))(this);
		}

		static ::DKFBNGFOLCD* GAJGBBFELEL()
		{
			return ((::DKFBNGFOLCD*(*)())((::PBYTE)hIl2Cpp + DKFBNGFOLCD_GAJGBBFELEL_OFFSET))();
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFBNGFOLCD_FFHNOMIDEDE_OFFSET))(this);
		}

	};
