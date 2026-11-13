#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WorldDataConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_WORLDDATACONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x2080B060)
#define RPG_GAMECORE_WORLDDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x2080A530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldDataConfigRow_TypeDefinitionIndex = 14169;

	class WorldDataConfigRow : public ::System::Object
	{
	public:
		::System::String* ChronicleWorldBgPath; // 0x10
		::Il2CppArray<::RPG::GameCore::MapSpaceType>* MapSpaceTypeList; // 0x18
		::System::String* ChronicleWorldSubBgPath; // 0x20
		::System::String* ChronicleWorldPredictPath; // 0x28
		::System::String* SmallWorldIconPath; // 0x30
		::System::String* ChapterIconBigPath; // 0x38
		::System::String* ChronicleWorldProcessingPath; // 0x40
		::RPG::Client::TextID WorldDesc; // 0x48
		::RPG::Client::TextID WorldLanguageName; // 0x58
		::RPG::GameCore::MapSpaceType TrainSpaceType; // 0x68
		::System::Single CameraHeight; // 0x6C
		::System::Boolean IsShow; // 0x70
		::System::Boolean IsRealWorld; // 0x71
		::System::Byte _padding0[0x2];
		::System::Single CameraWidth; // 0x74
		::RPG::Client::TextID SimpleWorldDesc; // 0x78
		::System::UInt32 ID; // 0x88
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID WorldName; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDDATACONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::WorldDataConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WorldDataConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDDATACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
