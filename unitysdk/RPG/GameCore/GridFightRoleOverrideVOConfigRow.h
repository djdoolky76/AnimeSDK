#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleOverrideVOConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEOVERRIDEVOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73E0B0)
#define RPG_GAMECORE_GRIDFIGHTROLEOVERRIDEVOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D73DED0)

namespace RPG::GameCore
{
	class GridFightRoleOverrideVOConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* OverrideVOTypes; // 0x10
		::System::String* OverrideVOTag; // 0x18
		::Il2CppArray<::System::String*>* ForbidVOTypes; // 0x20
		::System::UInt32 RoleID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEOVERRIDEVOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEOVERRIDEVOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
