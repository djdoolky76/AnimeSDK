#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class KFGGDNIGKGG;
namespace RPG::Client::MechCraft::View { class MechCraftAttributeRadarDimensionControlBinder; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD5EDFC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_DIHFFIJMALP_OFFSET UNITYSDK_OFFSET(0xD5EDCD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xD5ECB20)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_GET_STATE_OFFSET UNITYSDK_OFFSET(0xD5EDC90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_OPLJKGNFPFE_OFFSET UNITYSDK_OFFSET(0xD5EDED0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_SET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xD5EB160)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_SET_STATE_OFFSET UNITYSDK_OFFSET(0xD5EC9B0)

namespace RPG::Client::MechCraft::View
{
	class MechCraftAttributeRadarDimensionControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::KFGGDNIGKGG* JLDGIKMAPGK; // 0x18
		::System::Nullable* DLNIGFGLPLJ; // 0x20
		::System::String* OFCNNJKHMDJ; // 0x28
		::RPG::Client::MechCraft::View::MechCraftAttributeRadarDimensionControlBinder* _Binder; // 0x30
		::System::String* _StateNonTargetDefault; // 0x38
		::System::String* _StateNonTargetWronglyPeaked; // 0x40
		::System::String* _StateNonTargetAboveMaxLevel; // 0x48
		::System::String* _StateTargetNotReached; // 0x50
		::System::String* _StateTargetJustReached; // 0x58
		::System::String* _StateTargetMoreThanEnough; // 0x60
		::System::String* _StateTargetAboveMaxLevel; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_CTOR_OFFSET))(this);
		}

		::KFGGDNIGKGG* get_Attribute()
		{
			return ((::KFGGDNIGKGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_GET_ATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_Attribute(::KFGGDNIGKGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFGGDNIGKGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_SET_ATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Nullable* get_State()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_SET_STATE_OFFSET))(this, a1);
		}

		::System::String* OPLJKGNFPFE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_OPLJKGNFPFE_OFFSET))(this);
		}

		::System::Void DIHFFIJMALP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_DIHFFIJMALP_OFFSET))(this, a1);
		}

	};
}
