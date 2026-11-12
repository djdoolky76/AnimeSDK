#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFluteTalkConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMFLUTETALKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8CBF80)
#define RPG_GAMECORE_FIVEDIMFLUTETALKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E8CBC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFluteTalkConfigRow_TypeDefinitionIndex = 14264;

	class FiveDimFluteTalkConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* IconPathInputTips; // 0x18
		::System::String* IconPathErrorTIps; // 0x20
		::System::UInt32 FluteID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID InputTipsTextID; // 0x30
		::RPG::Client::TextID EnterTipsTextID; // 0x40
		::RPG::Client::TextID ErrorTIpsTextID; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLUTETALKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFluteTalkConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFluteTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLUTETALKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
