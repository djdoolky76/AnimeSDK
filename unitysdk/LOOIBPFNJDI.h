#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }

#define LOOIBPFNJDI_CLEAR_OFFSET UNITYSDK_OFFSET(0xB811730)
#define LOOIBPFNJDI_CTOR_OFFSET UNITYSDK_OFFSET(0xB811780)

	class LOOIBPFNJDI : public ::System::Object
	{
	public:
		::System::Nullable* JGNCELNCFOM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOIBPFNJDI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOIBPFNJDI_CLEAR_OFFSET))(this);
		}

	};
