#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJFAPMDGKMK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BJFAPMDGKMK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7994E0)

	class BJFAPMDGKMK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Char, ::BJFAPMDGKMK*>* EGGCADJJJOD; // 0x10
		::System::Boolean NGIMGPLFEBO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFAPMDGKMK_CTOR_OFFSET))(this);
		}

	};
