#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRare.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesItemRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79ED30)
#define RPG_GAMECORE_CHENLINGFESITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E79E7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesItemRow_TypeDefinitionIndex = 11116;

	class ChenLingFesItemRow : public ::System::Object
	{
	public:
		::System::String* BaseProbability; // 0x10
		::System::String* ViewJsonPath; // 0x18
		::System::String* BaseCoinNum; // 0x20
		::System::String* BaseLoopInterval; // 0x28
		::System::String* BaseMaxEffectTriggerNum; // 0x30
		::System::String* IconPath; // 0x38
		::System::String* LogicJsonPath; // 0x40
		::Il2CppArray<::System::Int32>* ParamList; // 0x48
		::Il2CppArray<::System::UInt32>* TagList; // 0x50
		::Il2CppArray<::System::UInt32>* EffectItemTypeList; // 0x58
		::System::UInt32 ID; // 0x60
		::System::UInt32 MaxPutDownNum; // 0x64
		::RPG::Client::TextID ItemDesc; // 0x68
		::RPG::Client::TextID ItemName; // 0x78
		::RPG::GameCore::ChenLingFesItemRare Rare; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
