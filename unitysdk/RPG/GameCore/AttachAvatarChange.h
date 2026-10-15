#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttachAvatarChange; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ATTACHAVATARCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4014A0)
#define RPG_GAMECORE_ATTACHAVATARCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D401510)
#define RPG_GAMECORE_ATTACHAVATARCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D401410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachAvatarChange_TypeDefinitionIndex = 23612;

	class AttachAvatarChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ConfigGroupName; // 0x18
		::RPG::GameCore::DynamicFloat* NewAvatarID; // 0x20
		::RPG::GameCore::DynamicFloat* NewAvatarEnhancedID; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeNewAvatarCreate; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNewAvatarCreate; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNewAvatarRefresh; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHAVATARCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachAvatarChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachAvatarChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHAVATARCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachAvatarChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachAvatarChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHAVATARCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
