#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSpecialGoodsConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E955390)
#define RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E954F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSpecialGoodsConfigRow_TypeDefinitionIndex = 13711;

	class GridFightSpecialGoodsConfigRow : public ::System::Object
	{
	public:
		::System::String* MiniIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x20
		::System::String* JsonPath; // 0x28
		::RPG::Client::TextID GoodName; // 0x30
		::System::UInt32 GroupID; // 0x40
		::System::UInt32 Cost; // 0x44
		::System::UInt32 LowerGoodID; // 0x48
		::System::UInt32 ID; // 0x4C
		::System::UInt32 Quality; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GoodDesc; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSpecialGoodsConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
