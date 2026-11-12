#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeBirdRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEBIRDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6F1A0)
#define RPG_GAMECORE_MATCHTHREEBIRDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA6EC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeBirdRow_TypeDefinitionIndex = 11960;

	class MatchThreeBirdRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::String* ModelPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* FaceMat; // 0x28
		::System::UInt32 UnlockLevel; // 0x30
		::System::UInt32 WinEmo; // 0x34
		::RPG::Client::TextID BirdDesc; // 0x38
		::System::Boolean IsShow; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 DefaultEmo; // 0x4C
		::System::UInt32 LoseEmo; // 0x50
		::System::UInt32 GuideID; // 0x54
		::System::UInt32 DrawEmo; // 0x58
		::System::UInt32 BirdID; // 0x5C
		::System::UInt32 SkillID; // 0x60
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID BirdName; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBIRDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeBirdRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeBirdRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEBIRDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
