#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusPostType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NPCKPMGEFLE;
namespace RPG::GameCore { class HeliobusPostRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSPOSTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA83ED0)
#define RPG_GAMECORE_HELIOBUSPOSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA82590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPostRow_TypeDefinitionIndex = 13900;

	class HeliobusPostRow : public ::System::Object
	{
	public:
		::Il2CppArray<::NPCKPMGEFLE*>* Likes; // 0x10
		::Il2CppArray<::System::UInt32>* PostUnlockSubMissionIDList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* PostFansReward; // 0x20
		::Il2CppArray<::System::UInt32>* PlayerCommentIDList; // 0x28
		::System::UInt32 PostImgID; // 0x30
		::RPG::GameCore::HeliobusPostType PostType; // 0x34
		::System::Boolean IsClosePanel; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 PostTypeParameter; // 0x3C
		::System::UInt32 ReplyIncomeReward; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID HeliobusPostContent; // 0x48
		::System::UInt32 HeliobusUserID; // 0x58
		::System::UInt32 PostUnlockPhase; // 0x5C
		::RPG::Client::TextID PostFansPreview; // 0x60
		::RPG::Client::TextID HeliobusPostTitle; // 0x70
		::System::UInt32 PostIncomeReward; // 0x80
		::System::UInt32 HeliobusPostID; // 0x84
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
