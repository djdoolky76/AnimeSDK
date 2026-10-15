#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFilterTargetType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB67590)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB67690)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB67640)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB675A0)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB674C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFilterTargetType_TypeDefinitionIndex = 23905;

	class TargetFilterTargetType : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* ExcludeTargetType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFilterTargetType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFilterTargetType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterTargetType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterTargetType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
