#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusPostType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NPCKPMGEFLE;
namespace RPG::GameCore { class HeliobusPostRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSPOSTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D762760)
#define RPG_GAMECORE_HELIOBUSPOSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D760E60)

namespace RPG::GameCore
{
	class HeliobusPostRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PostUnlockSubMissionIDList; // 0x10
		::Il2CppArray<::NPCKPMGEFLE*>* Likes; // 0x18
		::Il2CppArray<::System::UInt32>* PlayerCommentIDList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* PostFansReward; // 0x28
		::RPG::Client::TextID PostFansPreview; // 0x30
		::System::UInt32 HeliobusPostID; // 0x40
		::System::Boolean IsClosePanel; // 0x44
		::System::Byte _padding0[0x3];
		::System::UInt32 HeliobusUserID; // 0x48
		::RPG::GameCore::HeliobusPostType PostType; // 0x4C
		::System::UInt32 PostUnlockPhase; // 0x50
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID HeliobusPostContent; // 0x58
		::System::UInt32 ReplyIncomeReward; // 0x68
		::System::UInt32 PostIncomeReward; // 0x6C
		::System::UInt32 PostImgID; // 0x70
		::System::UInt32 PostTypeParameter; // 0x74
		::RPG::Client::TextID HeliobusPostTitle; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusPostRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusPostRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
