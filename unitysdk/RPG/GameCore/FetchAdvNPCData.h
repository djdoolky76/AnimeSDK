#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FetchAdvNPCData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FETCHADVNPCDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D672130)
#define RPG_GAMECORE_FETCHADVNPCDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D672140)
#define RPG_GAMECORE_FETCHADVNPCDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D672010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FetchAdvNPCData_TypeDefinitionIndex = 23873;

	class FetchAdvNPCData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 GroupNpcID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FetchAdvNPCData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FetchAdvNPCData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvNPCData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvNPCData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
