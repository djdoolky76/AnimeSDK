#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_GETREGIONTRANSLATIONERRORRESPONSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE44DE0)

namespace MiHoYo::SDK
{
	class GetRegionTranslationErrorResponse : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* message; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GETREGIONTRANSLATIONERRORRESPONSE_CTOR_OFFSET))(this);
		}

	};
}
