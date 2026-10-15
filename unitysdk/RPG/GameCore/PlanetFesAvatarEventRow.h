#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarEventRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESAVATAREVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D921390)
#define RPG_GAMECORE_PLANETFESAVATAREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9210A0)

namespace RPG::GameCore
{
	class PlanetFesAvatarEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventOptionIDList; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x18
		::System::String* PicPath; // 0x20
		::System::String* IconPath; // 0x28
		::RPG::Client::TextID EventContent; // 0x30
		::System::UInt32 AvatarID; // 0x40
		::System::UInt32 ID; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesAvatarEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesAvatarEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
