#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGMMOKIFNDK.h"
#include "unitysdk/NMIOIJEMKDM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Timeline/ZNetEffectPlayableAsset_FollowControl_OFDBNAMECGA.h"

namespace MoleMole::Config::EffectPattern { class MonoEffectPluginFollowSoData_New; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_EIBFLGPJIGH_OFFSET UNITYSDK_OFFSET(0x19F63700)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_BINDINGTRANS_OFFSET UNITYSDK_OFFSET(0x19F62B20)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_UNATTACHENDFRAME_OFFSET UNITYSDK_OFFSET(0x19F63D00)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_UNATTACHMAXENDFRAME_OFFSET UNITYSDK_OFFSET(0x19F63A10)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_USEUNATTACHCONFIG_OFFSET UNITYSDK_OFFSET(0x19F63610)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_HAPCFHLHFEG_OFFSET UNITYSDK_OFFSET(0x19F62E80)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_JENMGDFCLGE_OFFSET UNITYSDK_OFFSET(0x19F64050)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_MKHGHPOLBIG_OFFSET UNITYSDK_OFFSET(0x19F633F0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_MNPNOJDCPGH_OFFSET UNITYSDK_OFFSET(0x19F640A0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_NIMIKFNMMCC_OFFSET UNITYSDK_OFFSET(0x19F62FD0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_PJGLBJIONEK_OFFSET UNITYSDK_OFFSET(0x19F639D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_BINDINGTRANS_OFFSET UNITYSDK_OFFSET(0x19F63030)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_UNATTACHENDFRAME_OFFSET UNITYSDK_OFFSET(0x19F63E40)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_UNATTACHMAXENDFRAME_OFFSET UNITYSDK_OFFSET(0x19F63B50)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_USEUNATTACHCONFIG_OFFSET UNITYSDK_OFFSET(0x19F63750)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19F63FF0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_FollowControl_TypeDefinitionIndex = 56691;

	class ZNetEffectPlayableAsset_FollowControl : public ::System::Object
	{
	public:
		// static const ::System::String* UN_ATTACH_GROUP_NAME; // 0x0
		::System::Boolean _isDynamicBindPoint; // 0x10
		::System::Boolean followCamera; // 0x11
		::System::Byte _padding0[0x6];
		::System::String* sceneFollowPath; // 0x18
		::System::String* logicBindPointName; // 0x20
		::System::String* bindingPath; // 0x28
		::FGMMOKIFNDK Option; // 0x30
		::NMIOIJEMKDM posOffsetRelativeOption; // 0x34
		::NMIOIJEMKDM angleOffsetRelativeOption; // 0x38
		::System::Boolean OnlyFirstFrame; // 0x3C
		::System::Byte _padding1[0x3];
		::UnityEngine::GameObject* m_stGoCtx; // 0x40
		::System::String* m_sFxPath; // 0x48
		::MoleMole::Timeline::ZNetEffectPlayableAsset* m_stZNetAsset; // 0x50
		::System::String* m_sAnimClipName; // 0x58
		::System::Boolean m_bIsNormalFx; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_bindingTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_BINDINGTRANS_OFFSET))(this);
		}

		::System::Void set_bindingTrans(::UnityEngine::Transform* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_BINDINGTRANS_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_useUnAttachConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_USEUNATTACHCONFIG_OFFSET))(this);
		}

		::System::Void set_useUnAttachConfig(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_USEUNATTACHCONFIG_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_unAttachMaxEndFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_UNATTACHMAXENDFRAME_OFFSET))(this);
		}

		::System::Void set_unAttachMaxEndFrame(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_UNATTACHMAXENDFRAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Int32 get_unAttachEndFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_GET_UNATTACHENDFRAME_OFFSET))(this);
		}

		::System::Void set_unAttachEndFrame(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_SET_UNATTACHENDFRAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void MKHGHPOLBIG(::UnityEngine::Transform* CNJHBEOHGFP, ::System::String* EKLDHMIFDNP, ::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl_OFDBNAMECGA& param_2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl_OFDBNAMECGA&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_MKHGHPOLBIG_OFFSET))(this, CNJHBEOHGFP, EKLDHMIFDNP, param_2);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* JENMGDFCLGE()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_JENMGDFCLGE_OFFSET))(this);
		}

		::System::Boolean HAPCFHLHFEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_HAPCFHLHFEG_OFFSET))(this);
		}

		::MoleMole::Config::EffectPattern::MonoEffectPluginFollowSoData_New* EIBFLGPJIGH(::System::Boolean HBFHABACFDM)
		{
			return ((::MoleMole::Config::EffectPattern::MonoEffectPluginFollowSoData_New*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_EIBFLGPJIGH_OFFSET))(this, HBFHABACFDM);
		}

		::System::Boolean NIMIKFNMMCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_NIMIKFNMMCC_OFFSET))(this);
		}

		::System::Void PJGLBJIONEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_PJGLBJIONEK_OFFSET))(this);
		}

		::System::Void MNPNOJDCPGH(::UnityEngine::GameObject* NJOAJLDJCCJ, ::MoleMole::Timeline::ZNetEffectPlayableAsset* AHGMEJNHGKA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FOLLOWCONTROL_MNPNOJDCPGH_OFFSET))(this, NJOAJLDJCCJ, AHGMEJNHGKA);
		}
	};
}
