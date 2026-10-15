#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPGEJLFBDNP_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD3F50)

	class CPGEJLFBDNP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* GDLJBGKGGIC; // 0x10
		::System::Int32 OEMBIDNANCM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGEJLFBDNP_CTOR_OFFSET))(this);
		}

	};
