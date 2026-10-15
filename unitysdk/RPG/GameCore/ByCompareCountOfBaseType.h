#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareCountOfBaseType; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A37C0)
#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A3B70)
#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A3B30)
#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A37E0)
#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A3780)

namespace RPG::GameCore
{
	class ByCompareCountOfBaseType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* BaseTypeList; // 0x28
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* BaseTypeSourceTarget; // 0x38
		::RPG::GameCore::AvatarBaseTypeKind SourceBaseTypeKind; // 0x40
		::RPG::GameCore::CompareType CompareType; // 0x44
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCountOfBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCountOfBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCountOfBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCountOfBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
