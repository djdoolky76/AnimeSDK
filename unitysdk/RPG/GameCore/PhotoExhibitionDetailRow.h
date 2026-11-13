#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoExhibitionDetailRow; }
namespace System { class String; }

#define RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE4E260)
#define RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE4DC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoExhibitionDetailRow_TypeDefinitionIndex = 12175;

	class PhotoExhibitionDetailRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* MalePicPath; // 0x10
		::System::String* UnlockPicPath; // 0x18
		::Il2CppArray<::System::UInt32>* TaskOption; // 0x20
		::Il2CppArray<::System::String*>* FemalePicPath; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::RPG::Client::TextID GroupphotoDesc; // 0x40
		::System::UInt32 MissionID; // 0x50
		::System::Boolean ShowRuikeName; // 0x54
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID Unlock; // 0x58
		::System::UInt32 FinishSubMissionID; // 0x68
		::System::UInt32 ID; // 0x6C
		::RPG::Client::TextID RuikeReply; // 0x70
		::RPG::Client::TextID AuthorName; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoExhibitionDetailRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoExhibitionDetailRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
