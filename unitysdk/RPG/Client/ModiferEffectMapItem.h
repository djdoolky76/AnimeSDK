#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_MODIFEREFFECTMAPITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD72A890)

namespace RPG::Client
{
	class ModiferEffectMapItem : public ::System::Object
	{
	public:
		::System::String* ModiferName; // 0x10
		::System::String* EffectPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODIFEREFFECTMAPITEM_CTOR_OFFSET))(this);
		}

	};
}
