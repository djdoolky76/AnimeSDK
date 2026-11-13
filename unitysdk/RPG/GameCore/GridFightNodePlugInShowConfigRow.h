#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightNodePlugInType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightNodePlugInShowConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTNODEPLUGINSHOWCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x208BD810)
#define RPG_GAMECORE_GRIDFIGHTNODEPLUGINSHOWCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x208BD510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightNodePlugInShowConfigRow_TypeDefinitionIndex = 13762;

	class GridFightNodePlugInShowConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::RPG::Client::TextID Desc; // 0x28
		::RPG::Client::TextID DetailName; // 0x38
		::RPG::GameCore::GridFightNodePlugInType NodePlugInType; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTNODEPLUGINSHOWCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightNodePlugInShowConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightNodePlugInShowConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTNODEPLUGINSHOWCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
