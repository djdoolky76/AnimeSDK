#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WIN_BILIBILIANTIADDICTIONMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliAntiAddictionModel_TypeDefinitionIndex = 13022;

	class BiliBiliAntiAddictionModel : public ::System::Object
	{
	public:
		::System::String* server_id; // 0x10
		::System::String* channel_id; // 0x18
		::System::String* ver; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIANTIADDICTIONMODEL__CTOR_OFFSET))(this);
		}
	};
}
