#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define AMICEBDGNOG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DE89070)
#define AMICEBDGNOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE89150)
#define AMICEBDGNOG_EBBGNFPNGFE_OFFSET UNITYSDK_OFFSET(0x1DE89080)
#define AMICEBDGNOG_EFBEDKJGDII_OFFSET UNITYSDK_OFFSET(0x1DE890C0)

inline static constexpr unsigned int AMICEBDGNOG_TypeDefinitionIndex = 10652;

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
