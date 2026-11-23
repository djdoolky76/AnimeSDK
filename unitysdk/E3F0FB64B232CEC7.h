#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F8F0F2FB31C1A785;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E3F0FB64B232CEC7_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26F44B0)
#define E3F0FB64B232CEC7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E3F0FB64B232CEC7_TypeDefinitionIndex = 2791;

class E3F0FB64B232CEC7 : public ::System::Object
{
public:
	::System::String* BB46744281D33C50; // 0x10
	::System::Collections::Generic::List_1<::F8F0F2FB31C1A785*>* AFDF9B7EF3084FD1; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E3F0FB64B232CEC7*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E3F0FB64B232CEC7*&))((::PBYTE)hIl2Cpp + E3F0FB64B232CEC7_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3F0FB64B232CEC7__CTOR_OFFSET))(this);
	}
};
