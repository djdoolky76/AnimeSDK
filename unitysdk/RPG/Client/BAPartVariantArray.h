#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BAPartVariantRef; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BAPARTVARIANTARRAY_CTOR_OFFSET UNITYSDK_OFFSET(0xC7D2000)

namespace RPG::Client
{
	class BAPartVariantArray : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BAPartVariantRef*>* partVariants; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAPARTVARIANTARRAY_CTOR_OFFSET))(this);
		}

	};
}
