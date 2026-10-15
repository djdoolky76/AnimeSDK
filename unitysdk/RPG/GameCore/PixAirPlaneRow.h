#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirPlaneRow; }
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRPLANEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91D490)
#define RPG_GAMECORE_PIXAIRPLANEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91CEE0)

namespace RPG::GameCore
{
	class PixAirPlaneRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EquipIDList; // 0x10
		::System::String* PlaneIconPath; // 0x18
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* RecommendTagList; // 0x20
		::System::String* IconPath; // 0x28
		::System::String* LargePlaneIconPath; // 0x30
		::System::String* Name; // 0x38
		::System::String* ModelPath; // 0x40
		::System::UInt32 GrantBySubmissionID; // 0x48
		::System::UInt32 BaseHP; // 0x4C
		::System::Boolean IsSelectable; // 0x50
		::System::Byte _padding0[0x3];
		::System::UInt32 UnlockScore; // 0x54
		::RPG::Client::TextID AvatarName; // 0x58
		::System::UInt32 BaseLife; // 0x68
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID desc; // 0x70
		::System::UInt32 EquipID; // 0x80
		::System::UInt32 PlaneID; // 0x84
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
