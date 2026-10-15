#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MissionCustomValueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionCustomValue; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_MISSIONCUSTOMVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8848A0)
#define RPG_GAMECORE_MISSIONCUSTOMVALUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D8848B0)
#define RPG_GAMECORE_MISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D872400)

namespace RPG::GameCore
{
	class MissionCustomValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Index; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x18
		::RPG::GameCore::MissionCustomValueType Type; // 0x20
		::System::UInt32 DisplayValue; // 0x24
		::System::Boolean isLocal; // 0x28
		::System::Boolean isRange; // 0x29
		::System::Byte _padding1[0x6];
		::Il2CppArray<::System::UInt32>* ValidValueParamList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionCustomValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
