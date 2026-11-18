#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POEFNHLMODJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D7BC0)

inline static constexpr unsigned int POEFNHLMODJ_TypeDefinitionIndex = 58329;

class POEFNHLMODJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* OIMIDFOMAPK; // 0x10
	::System::Boolean HBOAKHNIPCK; // 0x18
	::System::Boolean JAEDACGAFPC; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEFNHLMODJ__CTOR_OFFSET))(this);
	}
};
