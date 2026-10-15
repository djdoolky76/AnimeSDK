#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSetFollowRotate; }
namespace RPG::GameCore { class PropSetFollowRotateGameObject; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETFOLLOWROTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9262A0)
#define RPG_GAMECORE_PROPSETFOLLOWROTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9262B0)
#define RPG_GAMECORE_PROPSETFOLLOWROTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D926270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetFollowRotate_TypeDefinitionIndex = 22074;

	class PropSetFollowRotate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupPropID; // 0x1C
		::System::String* BlockAlias; // 0x20
		::System::String* PrefabAlias; // 0x28
		::RPG::MVector3 RotateDirection; // 0x30
		::System::Boolean RotateChild; // 0x3C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::PropSetFollowRotateGameObject*>* RelativeChildList; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETFOLLOWROTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetFollowRotate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetFollowRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETFOLLOWROTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetFollowRotate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetFollowRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETFOLLOWROTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
