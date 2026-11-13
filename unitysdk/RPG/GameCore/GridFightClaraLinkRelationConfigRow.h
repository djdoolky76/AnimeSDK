#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightClaraLinkRelationConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTCLARALINKRELATIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x205FED70)
#define RPG_GAMECORE_GRIDFIGHTCLARALINKRELATIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x205FEBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightClaraLinkRelationConfigRow_TypeDefinitionIndex = 13866;

	class GridFightClaraLinkRelationConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EnhanceConvert; // 0x10
		::Il2CppArray<::System::UInt32>* ValidEnhanceList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCLARALINKRELATIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightClaraLinkRelationConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightClaraLinkRelationConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCLARALINKRELATIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
