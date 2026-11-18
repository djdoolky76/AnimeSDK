#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANIBPNOIJOJ.h"
#include "unitysdk/HLJOBMIPNEL.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/QuestShowAreaData.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x190B8330)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x190B8430)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x190B82E0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B9270)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x190B8870)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x190B98A0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x190B8420)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_AREASHAPETYPE_OFFSET UNITYSDK_OFFSET(0x190B9A60)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_BINDEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x190B9AB0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_CIRCLEAREARADIUS_OFFSET UNITYSDK_OFFSET(0x190B9AD0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_DECALHEIGHTBOTTOM_OFFSET UNITYSDK_OFFSET(0x190B9A80)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_DECALHEIGHTTOP_OFFSET UNITYSDK_OFFSET(0x190B9A70)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RADARHEIGHTBOTTOM_OFFSET UNITYSDK_OFFSET(0x190B9AA0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RADARHEIGHTTOP_OFFSET UNITYSDK_OFFSET(0x190B9A90)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RECTAREALENGTH_OFFSET UNITYSDK_OFFSET(0x190B9AE0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RECTAREAWIDTH_OFFSET UNITYSDK_OFFSET(0x190B9AF0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x190B9AC0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B92D0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x190B88F0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x190B9C20)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B9710)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x190B9130)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x190B9B00)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x190B9D40)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x190B9D50)
#define MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x190B9D60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int QuestShowAreaTrait_TypeDefinitionIndex = 39226;

	class QuestShowAreaTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 PresetID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* BattleRegionName; // 0x20
		::MoleMole::Config::QuestShowAreaData QuestShowAreaData; // 0x28
		::ANIBPNOIJOJ BindType; // 0x58
		::System::Boolean CheckRemoveTrackOverride; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::QuestShowAreaTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::QuestShowAreaTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::QuestShowAreaTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::QuestShowAreaTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::HLJOBMIPNEL get_AreaShapeType()
		{
			return ((::HLJOBMIPNEL(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_AREASHAPETYPE_OFFSET))(this);
		}

		::System::Single get_CircleAreaRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_CIRCLEAREARADIUS_OFFSET))(this);
		}

		::System::Single get_RectAreaLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RECTAREALENGTH_OFFSET))(this);
		}

		::System::Single get_RectAreaWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RECTAREAWIDTH_OFFSET))(this);
		}

		::System::Single get_DecalHeightTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_DECALHEIGHTTOP_OFFSET))(this);
		}

		::System::Single get_DecalHeightBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_DECALHEIGHTBOTTOM_OFFSET))(this);
		}

		::System::Single get_RadarHeightTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RADARHEIGHTTOP_OFFSET))(this);
		}

		::System::Single get_RadarHeightBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_RADARHEIGHTBOTTOM_OFFSET))(this);
		}

		::System::String* get_BindEffectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_BINDEFFECTNAME_OFFSET))(this);
		}

		::System::Boolean get_ShowEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT_GET_SHOWEFFECT_OFFSET))(this);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREATRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
