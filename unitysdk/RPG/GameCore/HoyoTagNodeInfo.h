#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HoyoTagSide.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagNodeInfo; }
namespace System { class String; }

#define RPG_GAMECORE_HOYOTAGNODEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D745A50)
#define RPG_GAMECORE_HOYOTAGNODEINFO_NIHCJMCJFNF_OFFSET UNITYSDK_OFFSET(0x1D744920)
#define RPG_GAMECORE_HOYOTAGNODEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D745870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoTagNodeInfo_TypeDefinitionIndex = 18316;

	class HoyoTagNodeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Tag; // 0x10
		::System::Int32 TagHash; // 0x18
		::RPG::GameCore::HoyoTagSide Side; // 0x1C
		::Il2CppArray<::RPG::GameCore::HoyoTagNodeInfo*>* ChildrenNodeList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGNODEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HoyoTagNodeInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HoyoTagNodeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGNODEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::RPG::GameCore::HoyoTagNodeInfo* NIHCJMCJFNF(::System::Int32 a1)
		{
			return ((::RPG::GameCore::HoyoTagNodeInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGNODEINFO_NIHCJMCJFNF_OFFSET))(this, a1);
		}

	};
}
