#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPuzzleChallengeRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F79CEB0)
#define RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F79C800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPuzzleChallengeRow_TypeDefinitionIndex = 14268;

	class FiveDimPuzzleChallengeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ProgressGPList; // 0x10
		::System::String* PuzzleStateGP; // 0x18
		::Il2CppArray<::System::UInt32>* RelatedMissionIDList; // 0x20
		::System::String* UIActiveGP; // 0x28
		::RPG::Client::TextID DescText; // 0x30
		::RPG::Client::TextID ActiveNameText; // 0x40
		::System::UInt32 PuzzleID; // 0x50
		::System::Int16 ProgressLimit; // 0x54
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID FinishNameText; // 0x58
		::RPG::Client::TextID FinishDescText; // 0x68
		::System::UInt32 GroupID; // 0x78
		::System::UInt32 FloorID; // 0x7C
		::System::UInt32 InstanceID; // 0x80
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID ActiveDescText; // 0x88
		::RPG::Client::TextID NameText; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPuzzleChallengeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPuzzleChallengeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
