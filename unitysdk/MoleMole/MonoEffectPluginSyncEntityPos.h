#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/MonoEffectPluginAnimationStateLevel.h"
#include "unitysdk/MoleMole/MonoEffectPluginSyncEntityPosAnimationData.h"
#include "unitysdk/MoleMole/MonoEffectPluginSyncEntityPos_DMPMFPEMEJD.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class INapLevel_SyncAvatarPos;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_GET_POSSYNCTARGET_OFFSET UNITYSDK_OFFSET(0x139F3D30)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_GET_STATEPLAYMESSAGE_OFFSET UNITYSDK_OFFSET(0x139F3E20)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ISTRANSITIONALLOWED_OFFSET UNITYSDK_OFFSET(0x139F4420)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x139F4B90)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_LOFMNKAMILC_OFFSET UNITYSDK_OFFSET(0x139F39B0)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_MCBPHJFFPJM_OFFSET UNITYSDK_OFFSET(0x139F46B0)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_MMPCKBLBENC_OFFSET UNITYSDK_OFFSET(0x139F49F0)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_NFCHEGPGMLI_OFFSET UNITYSDK_OFFSET(0x139F3F40)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x139F38B0)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONINPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x139F3A00)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONSTATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x139F3E60)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_PLAYANIMATIONBYSTATE_OFFSET UNITYSDK_OFFSET(0x139F4150)
#define MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x139F4890)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginSyncEntityPos_TypeDefinitionIndex = 46603;

	class MonoEffectPluginSyncEntityPos : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		::System::Boolean IsAvatarEnttiy; // 0x58
		::System::Boolean EnableTransitionCheck; // 0x59
		::System::Byte _padding0[0x6];
		::MoleMole::GameplayTag entityTag; // 0x60
		::MoleMole::MonoEffectPluginSyncEntityPos_DMPMFPEMEJD syncType; // 0x70
		::System::Byte _padding1[0x4];
		::System::String* DefaultState; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginSyncEntityPosAnimationData>* animationDataList; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginAnimationStateLevel>* animationLevelDataList; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* animationStateMap; // 0x90
		::System::UInt32 JDOOADFFEGG; // 0x98
		::System::Byte _padding2[0x4];
		::INapLevel_SyncAvatarPos* OEFMGODHAIK; // 0xA0
		::System::String* DJPJGINENFA; // 0xA8
		::UnityEngine::Animation* EEFOCCNFJCO; // 0xB0
		::System::Boolean DIFBBDJOHLI; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnInputPosition(::MoleMole::EntityHandle HPADNAEINPK, ::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONINPUTPOSITION_OFFSET))(this, HPADNAEINPK, CKPGOKHECCH);
		}

		::INapLevel_SyncAvatarPos* get_posSyncTarget()
		{
			return ((::INapLevel_SyncAvatarPos*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_GET_POSSYNCTARGET_OFFSET))(this);
		}

		::System::String* get_StatePlayMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_GET_STATEPLAYMESSAGE_OFFSET))(this);
		}

		::System::Void OnStateMessage(::System::String* MCOHLHMKLIP, ::System::String* NGHLLDAJJJE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ONSTATEMESSAGE_OFFSET))(this, MCOHLHMKLIP, NGHLLDAJJJE);
		}

		::System::Boolean IsTransitionAllowed(::System::String* OJBJPFBIMPJ, ::System::String* FDDFDLEINFM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_ISTRANSITIONALLOWED_OFFSET))(this, OJBJPFBIMPJ, FDDFDLEINFM);
		}

		::System::Boolean PlayAnimationByState(::System::String* JKBLDFBGBPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_PLAYANIMATIONBYSTATE_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void LOFMNKAMILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_LOFMNKAMILC_OFFSET))(this);
		}

		::System::Void NFCHEGPGMLI(::System::String* JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_NFCHEGPGMLI_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void MCBPHJFFPJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_MCBPHJFFPJM_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Int32 MMPCKBLBENC(::System::String* JKBLDFBGBPK)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSYNCENTITYPOS_MMPCKBLBENC_OFFSET))(this, JKBLDFBGBPK);
		}
	};
}
