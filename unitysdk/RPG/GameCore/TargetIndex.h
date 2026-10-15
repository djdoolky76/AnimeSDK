#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetIndexType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetIndex; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETINDEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3A2A0)
#define RPG_GAMECORE_TARGETINDEX_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB3A4C0)
#define RPG_GAMECORE_TARGETINDEX_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB3A430)
#define RPG_GAMECORE_TARGETINDEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3A310)
#define RPG_GAMECORE_TARGETINDEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3A210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetIndex_TypeDefinitionIndex = 23902;

	class TargetIndex : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetIndexType IndexType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* IndexValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
