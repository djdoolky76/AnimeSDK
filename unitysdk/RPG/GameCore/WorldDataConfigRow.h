#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WorldDataConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_WORLDDATACONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEBD8B0)
#define RPG_GAMECORE_WORLDDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EEBCD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldDataConfigRow_TypeDefinitionIndex = 14169;

	class WorldDataConfigRow : public ::System::Object
	{
	public:
		::System::String* SmallWorldIconPath; // 0x10
		::System::String* ChronicleWorldPredictPath; // 0x18
		::Il2CppArray<::RPG::GameCore::MapSpaceType>* MapSpaceTypeList; // 0x20
		::System::String* ChronicleWorldProcessingPath; // 0x28
		::System::String* ChronicleWorldSubBgPath; // 0x30
		::System::String* ChapterIconBigPath; // 0x38
		::System::String* ChronicleWorldBgPath; // 0x40
		::RPG::GameCore::MapSpaceType TrainSpaceType; // 0x48
		::System::Single CameraWidth; // 0x4C
		::System::UInt32 ID; // 0x50
		::System::Single CameraHeight; // 0x54
		::System::Boolean IsRealWorld; // 0x58
		::System::Boolean IsShow; // 0x59
		::System::Byte _padding0[0x6];
		::RPG::Client::TextID SimpleWorldDesc; // 0x60
		::RPG::Client::TextID WorldName; // 0x70
		::RPG::Client::TextID WorldDesc; // 0x80
		::RPG::Client::TextID WorldLanguageName; // 0x90
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
