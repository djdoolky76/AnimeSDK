#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VerseParam.h"
namespace RPG::Client::NavMap { class ICartographerIdentifier; }
namespace System { class Object; }

#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0xF90E0)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xF9270)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xF9280)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xF9180)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF9100)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xE600)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xF90D0)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE3F3F10)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE3F3F80)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MazeFloorCartographerIdentifier_TypeDefinitionIndex = 76661;

	struct alignas(4) MazeFloorCartographerIdentifier
	{
		::System::UInt32 _FloorID_k__BackingField; // 0x10
		::RPG::Client::VerseParam _VerseParam_k__BackingField; // 0x14
		::System::Void _ctor(::RPG::Client::VerseParam a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VerseParam, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_GET_FLOORID_OFFSET))(this);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_GET_VERSEPARAM_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::RPG::Client::NavMap::MazeFloorCartographerIdentifier a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MazeFloorCartographerIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::RPG::Client::NavMap::ICartographerIdentifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_EQUALS_2_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Equality(::RPG::Client::NavMap::MazeFloorCartographerIdentifier a1, ::RPG::Client::NavMap::ICartographerIdentifier* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::MazeFloorCartographerIdentifier, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::Client::NavMap::MazeFloorCartographerIdentifier a1, ::RPG::Client::NavMap::ICartographerIdentifier* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::MazeFloorCartographerIdentifier, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

	};
}
