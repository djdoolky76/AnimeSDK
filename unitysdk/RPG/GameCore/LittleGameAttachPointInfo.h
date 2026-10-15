#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAttachPointInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DD880)
#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DD490)

namespace RPG::GameCore
{
	class LittleGameAttachPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsDynamic; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::MVector3 Position; // 0x1C
		::RPG::MVector3 Rotation; // 0x28
		::RPG::MVector3 Scale; // 0x34
		::System::String* BindPath; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAttachPointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAttachPointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
