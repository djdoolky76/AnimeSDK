#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/HPSharedGroupPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByHPSharedGroup; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA78980)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA78BB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA78990)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA78950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByHPSharedGroup_TypeDefinitionIndex = 23595;

	class SetDynamicValueByHPSharedGroup : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::HPSharedGroupPropertyType Property; // 0x24
		::RPG::GameCore::TargetEvaluator* AnyTargetInThisGroup; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByHPSharedGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByHPSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByHPSharedGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByHPSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
