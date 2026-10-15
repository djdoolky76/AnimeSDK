#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKOKHPCKLAN_ERenderInstanceCollectMode.h"
#include "unitysdk/RPG/Client/ComicDialogEmitterBehavior_FadeMode.h"
#include "unitysdk/RPG/Client/ComicDialogEmitterBehavior_TextDirection.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/PNJJDIDBMNM.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBA2FE0)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCBA2F50)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xCB9ED20)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xCBA2B80)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0xCBA2B60)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_IFSHOWALLDIALOG_OFFSET UNITYSDK_OFFSET(0xCBA2B40)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET UNITYSDK_OFFSET(0xCBA2C30)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET UNITYSDK_OFFSET(0xCBA2F40)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_HADNEGJDJGJ_OFFSET UNITYSDK_OFFSET(0xCBA2B30)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_ICFAPKAGOMD_OFFSET UNITYSDK_OFFSET(0xCBA2B10)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_MNALCCPDJIL_OFFSET UNITYSDK_OFFSET(0xCBA2B00)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_NIKCDAFCJMJ_OFFSET UNITYSDK_OFFSET(0xCBA2B20)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_SET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0xCBA2B70)
#define RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_SET_IFSHOWALLDIALOG_OFFSET UNITYSDK_OFFSET(0xCBA2B50)

namespace RPG::Client
{
	inline static constexpr unsigned int ComicDialogEmitterMonoPlugin_TypeDefinitionIndex = 70882;

	class ComicDialogEmitterMonoPlugin
	{
	public:
		::UnityEngine::Mesh* PatternMesh; // 0x30
		::UnityEngine::Material* BackMaterial; // 0x38
		::UnityEngine::Material* TextMaterial; // 0x40
		::System::String* FontAssetPath; // 0x48
		::System::Int32 SelectedIndex; // 0x50
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* DialogDatas; // 0x58
		::RPG::Client::ComicDialogEmitterBehavior_TextDirection TextDirection; // 0x60
		::System::Single TextSize; // 0x64
		::UnityEngine::Vector2 TextPadding; // 0x68
		::System::Single BackboardPadding; // 0x70
		::UnityEngine::Color TextColor; // 0x74
		::UnityEngine::Color TextColor2; // 0x84
		::System::Single BackboardRatio; // 0x94
		::System::Int32 MaxCount; // 0x98
		::System::Single DialogRefresh; // 0x9C
		::System::Single TextRefresh; // 0xA0
		::System::Single LifeAfterTextRefresh; // 0xA4
		::System::Single FadeTime; // 0xA8
		::System::UInt32 FadeInMode; // 0xAC
		::System::UInt32 FadeOutMode; // 0xB0
		::System::Boolean IfEmitByDist; // 0xB4
		::System::Byte _padding1[0x3];
		::System::Single EmitDist; // 0xB8
		::System::Boolean IfUseFrustumCulling; // 0xBC
		::System::Boolean IfUseAudio; // 0xBD
		::System::Boolean IfSetAudioPerDialog; // 0xBE
		::System::Byte _padding2[0x1];
		::System::String* AudioEventName; // 0xC0
		::System::Single AudioDelay; // 0xC8
		::System::Boolean _IfShowAllDialog_k__BackingField; // 0xCC
		::System::Byte _padding3[0x3];
		::UnityEngine::GameObject* _AudioPlayerGO_k__BackingField; // 0xD0
		static ::System::String** StaticGet_FADILKPGCEM()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "ComicDialogEmitterMonoPlugin")->GetStaticField(0x19C10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_CCTOR_OFFSET))();
		}

		::RPG::Client::ComicDialogEmitterBehavior_FadeMode MNALCCPDJIL()
		{
			return ((::RPG::Client::ComicDialogEmitterBehavior_FadeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_MNALCCPDJIL_OFFSET))(this);
		}

		::System::Void ICFAPKAGOMD(::RPG::Client::ComicDialogEmitterBehavior_FadeMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDialogEmitterBehavior_FadeMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_ICFAPKAGOMD_OFFSET))(this, a1);
		}

		::RPG::Client::ComicDialogEmitterBehavior_FadeMode NIKCDAFCJMJ()
		{
			return ((::RPG::Client::ComicDialogEmitterBehavior_FadeMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_NIKCDAFCJMJ_OFFSET))(this);
		}

		::System::Void HADNEGJDJGJ(::RPG::Client::ComicDialogEmitterBehavior_FadeMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDialogEmitterBehavior_FadeMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_HADNEGJDJGJ_OFFSET))(this, a1);
		}

		::System::Boolean get_IfShowAllDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_IFSHOWALLDIALOG_OFFSET))(this);
		}

		::System::Void set_IfShowAllDialog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_SET_IFSHOWALLDIALOG_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_AudioPlayerGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_AUDIOPLAYERGO_OFFSET))(this);
		}

		::System::Void set_AudioPlayerGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_SET_AUDIOPLAYERGO_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_ARTBOUND_OFFSET))(this);
		}

		::PNJJDIDBMNM get_RenderBudgetData()
		{
			return ((::PNJJDIDBMNM(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET))(this);
		}

		::IKOKHPCKLAN_ERenderInstanceCollectMode get_RenderInstanceCollectMode()
		{
			return ((::IKOKHPCKLAN_ERenderInstanceCollectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET))(this);
		}

	};
}
