#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraGalleryActRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAGALLERYACTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AD660)
#define RPG_GAMECORE_CHIMERAGALLERYACTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5AD470)

namespace RPG::GameCore
{
	class ChimeraGalleryActRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::Single Sort; // 0x18
		::System::UInt32 ActID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAGALLERYACTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraGalleryActRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraGalleryActRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAGALLERYACTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
