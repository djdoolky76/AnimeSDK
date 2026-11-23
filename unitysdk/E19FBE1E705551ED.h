#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F74567AE9F22BCE7.h"
#include "unitysdk/System/Object.h"

class ED3F41CFC41515AB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E19FBE1E705551ED__CTOR_OFFSET UNITYSDK_OFFSET(0x40416F0)

inline static constexpr unsigned int E19FBE1E705551ED_TypeDefinitionIndex = 20364;

class E19FBE1E705551ED : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::F74567AE9F22BCE7>* F3F8AFAABFEFE117; // 0x10
	::ED3F41CFC41515AB* E329E25F5DE97439; // 0x18
	::System::IntPtr A1CB6D3738F917A9; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E19FBE1E705551ED__CTOR_OFFSET))(this);
	}
};
