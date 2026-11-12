#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleBackendExtraRankConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEBACKENDEXTRARANKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94D7B0)
#define RPG_GAMECORE_GRIDFIGHTROLEBACKENDEXTRARANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E94D300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleBackendExtraRankConfigRow_TypeDefinitionIndex = 13609;

	class GridFightRoleBackendExtraRankConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* RankAbility; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::Il2CppArray<::System::Double>* DescParamList; // 0x20
		::System::String* Comment; // 0x28
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x30
		::System::String* IconPath; // 0x38
		::RPG::Client::TextID Desc; // 0x40
		::System::UInt32 ExRankID; // 0x50
		::System::UInt32 RoleID; // 0x54
		::RPG::Client::TextID Name; // 0x58
		::RPG::GameCore::StringHash TriggerKey; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEBACKENDEXTRARANKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEBACKENDEXTRARANKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
