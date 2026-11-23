#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BB7525182A6620B9;
class E679C740DCE72F58;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }

#define BB7525182A6620B9_BA272CAA4DFA73D5_A5E9CDB6B654E6E1_OFFSET UNITYSDK_OFFSET(0x39E4C60)
#define BB7525182A6620B9_BA272CAA4DFA73D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BB7525182A6620B9_BA272CAA4DFA73D5_TypeDefinitionIndex = 12668;

class BB7525182A6620B9_BA272CAA4DFA73D5 : public ::System::Object
{
public:
	::BB7525182A6620B9* A544919C800E2923; // 0x10
	::E679C740DCE72F58* F9ADA718944F49ED; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB7525182A6620B9_BA272CAA4DFA73D5__CTOR_OFFSET))(this);
	}

	::System::Void A5E9CDB6B654E6E1(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + BB7525182A6620B9_BA272CAA4DFA73D5_A5E9CDB6B654E6E1_OFFSET))(this, A6CAE7339066B0FB);
	}
};
