#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SDFTextAlignType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ShowSDFText; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWSDFTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE3F90)
#define RPG_GAMECORE_SHOWSDFTEXT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE4000)
#define RPG_GAMECORE_SHOWSDFTEXT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE3F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSDFText_TypeDefinitionIndex = 20910;

	class ShowSDFText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* IsFaceToCamera; // 0x28
		::RPG::GameCore::DynamicFloat* SDFTextID; // 0x30
		::RPG::GameCore::DynamicString* SDFText; // 0x38
		::RPG::GameCore::DynamicFloat* SDFTextEffect; // 0x40
		::System::String* AnimatorParamName; // 0x48
		::RPG::GameCore::DynamicFloat* AnimatorParam; // 0x50
		::RPG::GameCore::DynamicFloat* FontSize; // 0x58
		::RPG::GameCore::DynamicFloat* IsSetScale; // 0x60
		::RPG::GameCore::DynamicFloat* DenseTypeScale; // 0x68
		::RPG::GameCore::DynamicFloat* TallTypeScale; // 0x70
		::RPG::GameCore::DynamicFloat* EnglishLikeScale; // 0x78
		::RPG::GameCore::SDFTextAlignType OverrideAlignType; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSDFTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSDFText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSDFText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSDFTEXT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSDFText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSDFText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSDFTEXT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
