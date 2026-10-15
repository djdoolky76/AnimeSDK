#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKFFDDDBIOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7ED6F0)

	class PKFFDDDBIOO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* HHEAPPJPCCF; // 0x10
		::System::Int32 FFIHGMEPCCJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFFDDDBIOO_CTOR_OFFSET))(this);
		}

	};
