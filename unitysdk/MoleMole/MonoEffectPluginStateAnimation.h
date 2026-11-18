#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginAnimationStateLevel.h"
#include "unitysdk/MoleMole/MonoEffectPluginStateAnimationData.h"
#include "unitysdk/MoleMole/MonoEffectPluginStateAudioData.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_CKCJMKGFLOD_OFFSET UNITYSDK_OFFSET(0x15ABEBC0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_DAAMOHAHJOK_OFFSET UNITYSDK_OFFSET(0x15ABEB70)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_EPEEACJIENC_OFFSET UNITYSDK_OFFSET(0x15ABD9C0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_GET_HASSTATEAUDIO_OFFSET UNITYSDK_OFFSET(0x15ABD0A0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_GET_STATEPLAYMESSAGE_OFFSET UNITYSDK_OFFSET(0x15ABD100)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_GGJPCFGPGBB_OFFSET UNITYSDK_OFFSET(0x15ABD790)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ISTRANSITIONALLOWED_OFFSET UNITYSDK_OFFSET(0x15ABDBF0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x15ABE960)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_LOFMNKAMILC_OFFSET UNITYSDK_OFFSET(0x15ABD050)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_MCBPHJFFPJM_OFFSET UNITYSDK_OFFSET(0x15ABDE80)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_MMPCKBLBENC_OFFSET UNITYSDK_OFFSET(0x15ABE9E0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_NFCHEGPGMLI_OFFSET UNITYSDK_OFFSET(0x15ABD270)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONEFFECTBORN_OFFSET UNITYSDK_OFFSET(0x15ABE060)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONEFFECTFINISH_OFFSET UNITYSDK_OFFSET(0x15ABE540)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15ABCF50)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONSTATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x15ABD140)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_PLAYANIMATIONBYSTATE_OFFSET UNITYSDK_OFFSET(0x15ABD4C0)
#define MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABE7E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginStateAnimation_TypeDefinitionIndex = 88410;

	class MonoEffectPluginStateAnimation : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		::System::Boolean EnableTransitionCheck; // 0x58
		::System::Byte _padding0[0x7];
		::System::String* DefaultState; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginStateAnimationData>* animationDataList; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginStateAudioData>* stateAudioDataList; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginAnimationStateLevel>* animationLevelDataList; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* animationStateMap; // 0x80
		::System::UInt32 JDOOADFFEGG; // 0x88
		::System::Byte _padding1[0x4];
		::System::String* IIIPAJDLOPD; // 0x90
		::UnityEngine::Animation* EEFOCCNFJCO; // 0x98
		::System::Boolean DIFBBDJOHLI; // 0xA0
		::System::Byte _padding2[0x7];
		::UnityEngine::GameObject* PADBLNAIFAH; // 0xA8
		::UnityEngine::GameObject* AJDIIAINLJK; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONENABLE_OFFSET))(this);
		}

		::System::Boolean get_HasStateAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_GET_HASSTATEAUDIO_OFFSET))(this);
		}

		::System::String* get_StatePlayMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_GET_STATEPLAYMESSAGE_OFFSET))(this);
		}

		::System::Void OnStateMessage(::System::String* MCOHLHMKLIP, ::System::String* NGHLLDAJJJE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONSTATEMESSAGE_OFFSET))(this, MCOHLHMKLIP, NGHLLDAJJJE);
		}

		::System::Boolean IsTransitionAllowed(::System::String* OJBJPFBIMPJ, ::System::String* FDDFDLEINFM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ISTRANSITIONALLOWED_OFFSET))(this, OJBJPFBIMPJ, FDDFDLEINFM);
		}

		::System::Boolean PlayAnimationByState(::System::String* JKBLDFBGBPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_PLAYANIMATIONBYSTATE_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void OnEffectBorn(::AEMCAOEICDG* OHPJHPEOFLD, ::EHKKPCGAJHO* POBADKEDFOE)
		{
			return ((::System::Void(*)(::PVOID, ::AEMCAOEICDG*, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONEFFECTBORN_OFFSET))(this, OHPJHPEOFLD, POBADKEDFOE);
		}

		::System::Void OnEffectFinish(::AEMCAOEICDG* OHPJHPEOFLD, ::EHKKPCGAJHO* POBADKEDFOE)
		{
			return ((::System::Void(*)(::PVOID, ::AEMCAOEICDG*, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_ONEFFECTFINISH_OFFSET))(this, OHPJHPEOFLD, POBADKEDFOE);
		}

		::System::Void MCBPHJFFPJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_MCBPHJFFPJM_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Void EPEEACJIENC(::System::String* JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_EPEEACJIENC_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void NFCHEGPGMLI(::System::String* JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_NFCHEGPGMLI_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void GGJPCFGPGBB(::System::String* JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_GGJPCFGPGBB_OFFSET))(this, JKBLDFBGBPK);
		}

		::UnityEngine::GameObject* DAAMOHAHJOK()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_DAAMOHAHJOK_OFFSET))(this);
		}

		::System::Int32 MMPCKBLBENC(::System::String* JKBLDFBGBPK)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_MMPCKBLBENC_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::String* CKCJMKGFLOD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_CKCJMKGFLOD_OFFSET))(this);
		}

		::System::Void LOFMNKAMILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSTATEANIMATION_LOFMNKAMILC_OFFSET))(this);
		}
	};
}
