#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JBNIMKGNBKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8AF330)

inline static constexpr unsigned int JBNIMKGNBKB_TypeDefinitionIndex = 53376;

	class JBNIMKGNBKB : public ::System::Object
	{
	public:
		::System::String* CJOACMMCHJP; // 0x10
		::System::Boolean MIDIBFPDDMO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNIMKGNBKB_CTOR_OFFSET))(this);
		}

	};
