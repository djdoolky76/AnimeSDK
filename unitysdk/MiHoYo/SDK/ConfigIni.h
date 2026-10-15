#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_CONFIGINI_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC4DEC0)

namespace MiHoYo::SDK
{
	class ConfigIni : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* keyVal; // 0x10
		::System::String* path; // 0x18
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGINI_CTOR_OFFSET))(this, a1);
		}

	};
}
