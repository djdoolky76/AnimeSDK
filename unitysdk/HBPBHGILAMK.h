#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOJOHDFGJLB;

#define HBPBHGILAMK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C13B10)
#define HBPBHGILAMK_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x15C13B00)

inline static constexpr unsigned int HBPBHGILAMK_TypeDefinitionIndex = 75564;

	class HBPBHGILAMK : public ::System::Object
	{
	public:
		::DOJOHDFGJLB* _Response_k__BackingField; // 0x10
		::System::Void _ctor(::DOJOHDFGJLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOJOHDFGJLB*))((::PBYTE)hIl2Cpp + HBPBHGILAMK_CTOR_OFFSET))(this, a1);
		}

		::DOJOHDFGJLB* get_Response()
		{
			return ((::DOJOHDFGJLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPBHGILAMK_GET_RESPONSE_OFFSET))(this);
		}

	};
