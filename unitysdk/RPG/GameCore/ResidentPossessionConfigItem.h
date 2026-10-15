#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResidentPossessionConfigItem; }
namespace RPG::GameCore { class ResidentPossessionInfo; }
namespace System { class String; }

#define RPG_GAMECORE_RESIDENTPOSSESSIONCONFIGITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98CE00)
#define RPG_GAMECORE_RESIDENTPOSSESSIONCONFIGITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98CCD0)

namespace RPG::GameCore
{
	class ResidentPossessionConfigItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* ConfigKeys; // 0x10
		::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>* Possessions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTPOSSESSIONCONFIGITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResidentPossessionConfigItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResidentPossessionConfigItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTPOSSESSIONCONFIGITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
