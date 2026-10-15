#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DecoupleParentTransform; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_DECOUPLEPARENTTRANSFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CC9D0)
#define RPG_GAMECORE_DECOUPLEPARENTTRANSFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CC9E0)
#define RPG_GAMECORE_DECOUPLEPARENTTRANSFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CC9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecoupleParentTransform_TypeDefinitionIndex = 22848;

	class DecoupleParentTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TargetAttachPoint; // 0x20
		::System::Boolean IsEnable; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single TransitionTime; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECOUPLEPARENTTRANSFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DecoupleParentTransform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DecoupleParentTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECOUPLEPARENTTRANSFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DecoupleParentTransform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DecoupleParentTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECOUPLEPARENTTRANSFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
