#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define AMICEBDGNOG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CCB1440)
#define AMICEBDGNOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB1520)
#define AMICEBDGNOG_EBBGNFPNGFE_OFFSET UNITYSDK_OFFSET(0x1CCB1450)
#define AMICEBDGNOG_EFBEDKJGDII_OFFSET UNITYSDK_OFFSET(0x1CCB1490)

inline static constexpr unsigned int AMICEBDGNOG_TypeDefinitionIndex = 10637;

	class AMICEBDGNOG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMICEBDGNOG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMICEBDGNOG_CLEAR_OFFSET))(this);
		}

		::System::Void EBBGNFPNGFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMICEBDGNOG_EBBGNFPNGFE_OFFSET))(this);
		}

		::System::Object* EFBEDKJGDII()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMICEBDGNOG_EFBEDKJGDII_OFFSET))(this);
		}

	};
