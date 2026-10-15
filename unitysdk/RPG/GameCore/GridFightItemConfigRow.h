#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightItemConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTITEMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D731DF0)
#define RPG_GAMECORE_GRIDFIGHTITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D731B90)

namespace RPG::GameCore
{
	class GridFightItemConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* SmallIconPath; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Int32 ItemPriority; // 0x24
		::RPG::Client::TextID ItemName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTITEMCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightItemConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTITEMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
