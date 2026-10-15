#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define BIDFKKAKOLB_CTOR_OFFSET UNITYSDK_OFFSET(0xB49E100)
#define BIDFKKAKOLB_GET_ISDISKFULL_OFFSET UNITYSDK_OFFSET(0xB49E160)
#define BIDFKKAKOLB_SET_ISDISKFULL_OFFSET UNITYSDK_OFFSET(0xB49E170)

inline static constexpr unsigned int BIDFKKAKOLB_TypeDefinitionIndex = 61272;

	class BIDFKKAKOLB : public ::System::Exception
	{
	public:
		::System::Boolean _IsDiskFull_k__BackingField; // 0x88
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIDFKKAKOLB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDiskFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDFKKAKOLB_GET_ISDISKFULL_OFFSET))(this);
		}

		::System::Void set_IsDiskFull(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIDFKKAKOLB_SET_ISDISKFULL_OFFSET))(this, a1);
		}

	};
