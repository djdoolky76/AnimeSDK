#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKILJMLMGEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C906DD0)

	class KKILJMLMGEB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* HEIBMGFCJDJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKILJMLMGEB_CTOR_OFFSET))(this);
		}

	};
