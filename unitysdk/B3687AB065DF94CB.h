#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define B3687AB065DF94CB_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x23EE050)
#define B3687AB065DF94CB_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23EDE10)
#define B3687AB065DF94CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B3687AB065DF94CB_TypeDefinitionIndex = 3894;

class B3687AB065DF94CB : public ::System::Object
{
public:
	::UnityEngine::Vector3 E26AE3C940A9D0CA; // 0x10
	::UnityEngine::Vector3 B4A07A3DC5DDF6FD; // 0x1C

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + B3687AB065DF94CB_EA28CF291EBB2931_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B3687AB065DF94CB*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B3687AB065DF94CB*&))((::PBYTE)hIl2Cpp + B3687AB065DF94CB_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3687AB065DF94CB__CTOR_OFFSET))(this);
	}
};
