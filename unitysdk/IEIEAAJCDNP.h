#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEIEAAJCDNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C664890)

inline static constexpr unsigned int IEIEAAJCDNP_TypeDefinitionIndex = 36527;

	class IEIEAAJCDNP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* PBLPLDJKPEI; // 0x10
		::System::UInt32 DHJANOFGDNP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEAAJCDNP_CTOR_OFFSET))(this);
		}

	};
