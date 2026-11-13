#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTrailblazeGoodsType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTrailblazeGoodsConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTRAILBLAZEGOODSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA66CF0)
#define RPG_GAMECORE_GRIDFIGHTTRAILBLAZEGOODSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA66810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTrailblazeGoodsConfigRow_TypeDefinitionIndex = 13850;

	class GridFightTrailblazeGoodsConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x18
		::System::String* JsonPath; // 0x20
		::System::String* Desc; // 0x28
		::System::String* Icon; // 0x30
		::RPG::Client::TextID TrailGoodDesc; // 0x38
		::System::UInt32 ID; // 0x48
		::System::UInt32 FatherGoodID; // 0x4C
		::RPG::Client::TextID TrailGoodTitle; // 0x50
		::RPG::Client::TextID TrailGoodSimpleDesc; // 0x60
		::System::UInt32 Cost; // 0x70
		::RPG::GameCore::GridFightTrailblazeGoodsType Type; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAILBLAZEGOODSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTrailblazeGoodsConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTrailblazeGoodsConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAILBLAZEGOODSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
