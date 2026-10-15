#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IBNJKFGBNGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15E435B0)
#define IBNJKFGBNGJ_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x15E435C0)

inline static constexpr unsigned int IBNJKFGBNGJ_TypeDefinitionIndex = 80716;

	class IBNJKFGBNGJ : public ::System::Object
	{
	public:
		::System::Boolean _Enabled_k__BackingField; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBNJKFGBNGJ_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNJKFGBNGJ_GET_ENABLED_OFFSET))(this);
		}

	};
