#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JGGAKCPPEPM_CTOR_OFFSET UNITYSDK_OFFSET(0xB199940)

	class JGGAKCPPEPM : public ::System::Object
	{
	public:
		::System::String* BABELILGFOO; // 0x10
		::System::String* AABNPBGMOFN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGAKCPPEPM_CTOR_OFFSET))(this);
		}

	};
