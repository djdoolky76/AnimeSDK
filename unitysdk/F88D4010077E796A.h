#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B3687AB065DF94CB;

#define F88D4010077E796A_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x271ADC0)
#define F88D4010077E796A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F88D4010077E796A_TypeDefinitionIndex = 2930;

class F88D4010077E796A : public ::System::Object
{
public:
	::System::Single B9F150B6045A3586; // 0x10
	::System::Byte _padding0[0x4];
	::B3687AB065DF94CB* E3E9C5AA11112C75; // 0x18
	::UnityEngine::Vector3 E26AE3C940A9D0CA; // 0x20
	::UnityEngine::Vector3 F539A4507A454175; // 0x2C
	::UnityEngine::Vector3 B4A07A3DC5DDF6FD; // 0x38

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F88D4010077E796A*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F88D4010077E796A*&))((::PBYTE)hIl2Cpp + F88D4010077E796A_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F88D4010077E796A__CTOR_OFFSET))(this);
	}
};
