#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LNGAKGHOLFK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7DD2E0)
#define LNGAKGHOLFK_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0xB7DD2F0)
#define LNGAKGHOLFK_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xB7DD300)

	class LNGAKGHOLFK : public ::System::Object
	{
	public:
		::System::Int32 _CardIndex_k__BackingField; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LNGAKGHOLFK_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGAKGHOLFK_GET_CARDINDEX_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGAKGHOLFK_JKEONEEPIHH_OFFSET))(this);
		}

	};
