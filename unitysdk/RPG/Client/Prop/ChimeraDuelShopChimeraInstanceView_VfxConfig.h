#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_VFXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDC721B0)

namespace RPG::Client::Prop
{
	class ChimeraDuelShopChimeraInstanceView_VfxConfig : public ::System::Object
	{
	public:
		::System::String* AnchorName; // 0x10
		::System::String* EffectPath; // 0x18
		::System::String* UniqueName; // 0x20
		::System::Single Scale; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPCHIMERAINSTANCEVIEW_VFXCONFIG_CTOR_OFFSET))(this);
		}

	};
}
