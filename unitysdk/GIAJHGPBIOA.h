#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define GIAJHGPBIOA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2E1F0)
#define GIAJHGPBIOA_NDOIBJEHDEE_OFFSET UNITYSDK_OFFSET(0x15A2E250)

	class GIAJHGPBIOA : public ::System::Exception
	{
	public:
		::System::String* LFOODCDGFKH; // 0x88
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GIAJHGPBIOA_CTOR_OFFSET))(this, a1);
		}

		::System::String* NDOIBJEHDEE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAJHGPBIOA_NDOIBJEHDEE_OFFSET))(this);
		}

	};
