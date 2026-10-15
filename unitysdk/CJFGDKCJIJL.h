#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CJFGDKCJIJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA09890)

	class CJFGDKCJIJL : public ::System::Object
	{
	public:
		::System::String* CELBFEDOGKO; // 0x10
		::System::Boolean CAGCHKJHMPD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFGDKCJIJL_CTOR_OFFSET))(this);
		}

	};
