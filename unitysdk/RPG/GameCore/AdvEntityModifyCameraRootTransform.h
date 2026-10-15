#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEntityModifyCameraRootTransform; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D370530)
#define RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D370540)
#define RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D370500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityModifyCameraRootTransform_TypeDefinitionIndex = 21041;

	class AdvEntityModifyCameraRootTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::MVector3 LocalPosition; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityModifyCameraRootTransform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityModifyCameraRootTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityModifyCameraRootTransform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityModifyCameraRootTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYMODIFYCAMERAROOTTRANSFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
