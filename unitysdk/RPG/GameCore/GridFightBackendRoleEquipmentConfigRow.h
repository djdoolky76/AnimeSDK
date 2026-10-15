#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightBackendRoleEquipmentConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTBACKENDROLEEQUIPMENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F94A0)
#define RPG_GAMECORE_GRIDFIGHTBACKENDROLEEQUIPMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F9160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBackendRoleEquipmentConfigRow_TypeDefinitionIndex = 13527;

	class GridFightBackendRoleEquipmentConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* OwnerGeneralPropertyList; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* AllMemberGeneralPropertyList; // 0x20
		::System::String* ParamFormat; // 0x28
		::System::UInt32 RoleID; // 0x30
		::System::UInt32 Level; // 0x34
		::RPG::Client::TextID BackEquipmentDesc; // 0x38
		::System::UInt32 EquipmentID; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBACKENDROLEEQUIPMENTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBACKENDROLEEQUIPMENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
