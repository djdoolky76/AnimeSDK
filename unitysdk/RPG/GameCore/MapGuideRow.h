#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapGuideRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAPGUIDEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA47480)
#define RPG_GAMECORE_MAPGUIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA46D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapGuideRow_TypeDefinitionIndex = 14219;

	class MapGuideRow : public ::System::Object
	{
	public:
		::System::String* MapGuideIconPath; // 0x10
		::System::UInt32 SheetID; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 SheetType; // 0x20
		::System::UInt32 WorldID; // 0x24
		::RPG::Client::TextID MapGuideName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapGuideRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapGuideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
