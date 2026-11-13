#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirPlaneRow; }
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRPLANEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE5E240)
#define RPG_GAMECORE_PIXAIRPLANEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE5DC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirPlaneRow_TypeDefinitionIndex = 12192;

	class PixAirPlaneRow : public ::System::Object
	{
	public:
		::System::String* LargePlaneIconPath; // 0x10
		::System::String* PlaneIconPath; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* RecommendTagList; // 0x28
		::System::String* Name; // 0x30
		::System::String* ModelPath; // 0x38
		::Il2CppArray<::System::UInt32>* EquipIDList; // 0x40
		::System::UInt32 BaseHP; // 0x48
		::System::UInt32 GrantBySubmissionID; // 0x4C
		::RPG::Client::TextID AvatarName; // 0x50
		::System::UInt32 BaseLife; // 0x60
		::System::UInt32 EquipID; // 0x64
		::System::UInt32 UnlockScore; // 0x68
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID desc; // 0x70
		::System::UInt32 PlaneID; // 0x80
		::System::Boolean IsSelectable; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRPLANEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirPlaneRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirPlaneRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRPLANEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
