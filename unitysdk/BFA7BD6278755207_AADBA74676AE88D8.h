#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAD7E526D2841BDA.h"
#include "unitysdk/System/Object.h"

class A2831158EF9781BE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFA7BD6278755207_AADBA74676AE88D8_B7CCE1048018E053_OFFSET UNITYSDK_OFFSET(0x1D2F6E0)
#define BFA7BD6278755207_AADBA74676AE88D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BFA7BD6278755207_AADBA74676AE88D8_TypeDefinitionIndex = 9984;

class BFA7BD6278755207_AADBA74676AE88D8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FAD7E526D2841BDA>* E6A90DF3E7A1D334; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFA7BD6278755207_AADBA74676AE88D8__CTOR_OFFSET))(this);
	}

	::System::Void B7CCE1048018E053(::A2831158EF9781BE* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::A2831158EF9781BE*))((::PBYTE)hIl2Cpp + BFA7BD6278755207_AADBA74676AE88D8_B7CCE1048018E053_OFFSET))(this, F220A2D27F7C6B6C);
	}
};
