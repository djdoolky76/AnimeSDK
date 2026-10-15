#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class INGMBMCLJAO;

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAMTABCONTENTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE405990)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAMTABCONTENTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE405940)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatPamTabContentControl_TypeDefinitionIndex = 73452;

	class FriendChatPamTabContentControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAMTABCONTENTCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAMTABCONTENTCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
