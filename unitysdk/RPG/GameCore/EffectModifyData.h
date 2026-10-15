#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectModifyData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTMODIFYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D630AF0)
#define RPG_GAMECORE_EFFECTMODIFYDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D630B00)
#define RPG_GAMECORE_EFFECTMODIFYDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6308F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectModifyData_TypeDefinitionIndex = 20266;

	class EffectModifyData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SubObjectPath; // 0x10
		::RPG::GameCore::TargetEvaluator* ReferenceTargetType; // 0x18
		::RPG::MVector3 Position; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTMODIFYDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectModifyData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectModifyData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTMODIFYDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::EffectModifyData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::EffectModifyData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTMODIFYDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
