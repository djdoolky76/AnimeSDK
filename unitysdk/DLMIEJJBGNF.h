#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLMIEJJBGNF_CTOR_OFFSET UNITYSDK_OFFSET(0xF8B2950)

	class DLMIEJJBGNF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* IFNAGLOMHBK; // 0x10
		::System::Boolean HLEIDANOEIA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMIEJJBGNF_CTOR_OFFSET))(this);
		}

	};
