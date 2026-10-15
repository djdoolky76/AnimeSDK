#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_TEXTCURVEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15657C00)

namespace EnviromentSystemV2Space
{
	class TextCurveData : public ::System::Object
	{
	public:
		::System::Single time; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* path; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_TEXTCURVEDATA_CTOR_OFFSET))(this);
		}

	};
}
