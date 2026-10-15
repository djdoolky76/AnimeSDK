#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleGlobalModifierConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEGLOBALMODIFIERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73DEC0)
#define RPG_GAMECORE_GRIDFIGHTROLEGLOBALMODIFIERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D73DD30)

namespace RPG::GameCore
{
	class GridFightRoleGlobalModifierConfigRow : public ::System::Object
	{
	public:
		::System::String* SavedValueName; // 0x10
		::Il2CppArray<::System::UInt32>* PerformParamList; // 0x18
		::System::UInt32 Roleid; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGLOBALMODIFIERCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleGlobalModifierConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleGlobalModifierConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGLOBALMODIFIERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
