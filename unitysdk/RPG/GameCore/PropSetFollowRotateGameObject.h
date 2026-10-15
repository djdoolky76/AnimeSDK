#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSetFollowRotateGameObject; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETFOLLOWROTATEGAMEOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9267F0)
#define RPG_GAMECORE_PROPSETFOLLOWROTATEGAMEOBJECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D926630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetFollowRotateGameObject_TypeDefinitionIndex = 22073;

	class PropSetFollowRotateGameObject : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RelativePath; // 0x10
		::RPG::MVector3 RotateDirection; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETFOLLOWROTATEGAMEOBJECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetFollowRotateGameObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetFollowRotateGameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETFOLLOWROTATEGAMEOBJECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
