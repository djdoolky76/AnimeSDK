#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleGlobalModifierConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEGLOBALMODIFIERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5C8A0)
#define RPG_GAMECORE_GRIDFIGHTROLEGLOBALMODIFIERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA5C680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleGlobalModifierConfigRow_TypeDefinitionIndex = 13662;

	class GridFightRoleGlobalModifierConfigRow : public ::System::Object
	{
	public:
		::System::String* SavedValueName; // 0x10
		::Il2CppArray<::System::UInt32>* PerformParamList; // 0x18
		::System::String* JsonPath; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x28
		::System::UInt32 Roleid; // 0x30
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
