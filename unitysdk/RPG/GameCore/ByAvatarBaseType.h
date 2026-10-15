#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAvatarBaseType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYAVATARBASETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4593A0)
#define RPG_GAMECORE_BYAVATARBASETYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D459610)
#define RPG_GAMECORE_BYAVATARBASETYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4595D0)
#define RPG_GAMECORE_BYAVATARBASETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4593B0)
#define RPG_GAMECORE_BYAVATARBASETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D459360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAvatarBaseType_TypeDefinitionIndex = 22561;

	class ByAvatarBaseType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* BaseTypeList; // 0x20
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAVATARBASETYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
