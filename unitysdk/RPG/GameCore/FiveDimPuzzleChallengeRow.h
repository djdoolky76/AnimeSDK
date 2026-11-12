#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPuzzleChallengeRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E1080)
#define RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E8E09D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPuzzleChallengeRow_TypeDefinitionIndex = 14268;

	class FiveDimPuzzleChallengeRow : public ::System::Object
	{
	public:
		::System::String* PuzzleStateGP; // 0x10
		::System::String* UIActiveGP; // 0x18
		::Il2CppArray<::System::UInt32>* RelatedMissionIDList; // 0x20
		::Il2CppArray<::System::String*>* ProgressGPList; // 0x28
		::RPG::Client::TextID FinishNameText; // 0x30
		::System::UInt32 FloorID; // 0x40
		::System::Int16 ProgressLimit; // 0x44
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID ActiveNameText; // 0x48
		::RPG::Client::TextID FinishDescText; // 0x58
		::System::UInt32 GroupID; // 0x68
		::System::UInt32 PuzzleID; // 0x6C
		::RPG::Client::TextID NameText; // 0x70
		::RPG::Client::TextID ActiveDescText; // 0x80
		::RPG::Client::TextID DescText; // 0x90
		::System::UInt32 InstanceID; // 0xA0
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
