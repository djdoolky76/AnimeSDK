#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/VideoTextureBehavior_KJIDHIHNHDA.h"
namespace CriWare { class CriManaMovieController; }
namespace RPG::Client { class VideoTexture; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_AFIBJFHPHDD_OFFSET UNITYSDK_OFFSET(0x1BC710E0)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC736D0)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_CFOGDEPOJIP_OFFSET UNITYSDK_OFFSET(0x1BC726F0)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_CNEIEPDDMDK_OFFSET UNITYSDK_OFFSET(0x1BC734F0)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC71040)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x1BC71830)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_FAHMCPCMIGK_OFFSET UNITYSDK_OFFSET(0x1BC732E0)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_FKGAGDHOPLK_OFFSET UNITYSDK_OFFSET(0x1BC71F70)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x1BC715D0)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_GET_OWNERMONO_OFFSET UNITYSDK_OFFSET(0x1BC71F00)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_HBCAMLHKGHD_OFFSET UNITYSDK_OFFSET(0x1BC723B0)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_HDDLLNAKJDL_OFFSET UNITYSDK_OFFSET(0x1BC722E0)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1BC71C10)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x1BC71A40)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_JNEOCKEMBOJ_OFFSET UNITYSDK_OFFSET(0x1BC73630)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_KPKAHDPJPAE_OFFSET UNITYSDK_OFFSET(0x1BC73380)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1BC71370)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_MPINDLOMCJL_OFFSET UNITYSDK_OFFSET(0x1BC72610)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_MPMDDCLLPNB_OFFSET UNITYSDK_OFFSET(0x1BC72220)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_NEACLNIKMHO_OFFSET UNITYSDK_OFFSET(0x1BC72520)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_NJHOAIFGNNH_OFFSET UNITYSDK_OFFSET(0x1BC71E60)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_OBCNGEPFKHB_OFFSET UNITYSDK_OFFSET(0x1BC72910)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_OJANPJEFLDL_OFFSET UNITYSDK_OFFSET(0x1BC72BB0)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1BC71760)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1BC712D0)
#define RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_PICDOIMIDKM_OFFSET UNITYSDK_OFFSET(0x1BC71900)

namespace RPG::Client
{
	inline static constexpr unsigned int VideoTextureBehavior_TypeDefinitionIndex = 75336;

	class VideoTextureBehavior : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::String* _videoFilePath; // 0x18
		::CriWare::CriManaMovieController* _criManaMovieController; // 0x20
		::System::Int32 _controllerRuntimeID; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::MeshRenderer* _meshRenderer; // 0x30
		::UnityEngine::Material* _orginalMaterial; // 0x38
		::System::Boolean _initAlready; // 0x40
		::System::Byte _padding1[0x3];
		::CriWare::CriMana::Player_Status _lastState; // 0x44
		::System::Boolean _PlayerStateReady; // 0x48
		::System::Byte _padding2[0x3];
		::System::UInt32 _soundPlayingID; // 0x4C
		::System::Action* _onBeginPlay; // 0x50
		::System::Boolean _meshInit; // 0x58
		::System::Byte _padding3[0x7];
		::RPG::Client::VideoTextureBehavior_KJIDHIHNHDA _pendingCommand; // 0x60
		static ::System::Int32* StaticGet__MaterialForwardOffsetFactorID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "VideoTextureBehavior")->GetStaticField(0x132D0);
		}

		static ::System::Int32* StaticGet__MaterialForwardOffsetUnitID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "VideoTextureBehavior")->GetStaticField(0x132D4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_CCTOR_OFFSET))();
		}

		::RPG::Client::VideoTexture* get_OwnerMono()
		{
			return ((::RPG::Client::VideoTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_GET_OWNERMONO_OFFSET))(this);
		}

		::System::Void AFIBJFHPHDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_AFIBJFHPHDD_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_DFFCHNLKELO_OFFSET))(this);
		}

		::System::Void PICDOIMIDKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_PICDOIMIDKM_OFFSET))(this);
		}

		::System::Void JDAGFHEPMHF(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_JDAGFHEPMHF_OFFSET))(this, a1);
		}

		::System::Void OJANPJEFLDL(::RPG::Client::VideoTextureBehavior_KJIDHIHNHDA a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VideoTextureBehavior_KJIDHIHNHDA))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_OJANPJEFLDL_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void NJHOAIFGNNH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_NJHOAIFGNNH_OFFSET))(this, a1);
		}

		::System::Void FKGAGDHOPLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_FKGAGDHOPLK_OFFSET))(this);
		}

		::System::Void CFOGDEPOJIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_CFOGDEPOJIP_OFFSET))(this);
		}

		::System::Void KPKAHDPJPAE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_KPKAHDPJPAE_OFFSET))(this, a1);
		}

		::CriWare::CriManaMovieController* CNEIEPDDMDK()
		{
			return ((::CriWare::CriManaMovieController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_CNEIEPDDMDK_OFFSET))(this);
		}

		::System::Void MPMDDCLLPNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_MPMDDCLLPNB_OFFSET))(this);
		}

		::System::Void HBCAMLHKGHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_HBCAMLHKGHD_OFFSET))(this);
		}

		::System::Void JNEOCKEMBOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_JNEOCKEMBOJ_OFFSET))(this);
		}

		::System::Void OBCNGEPFKHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_OBCNGEPFKHB_OFFSET))(this);
		}

		::System::Void HDDLLNAKJDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_HDDLLNAKJDL_OFFSET))(this);
		}

		::System::Void NEACLNIKMHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_NEACLNIKMHO_OFFSET))(this);
		}

		::System::Void FAHMCPCMIGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_FAHMCPCMIGK_OFFSET))(this);
		}

		::System::Void MPINDLOMCJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTUREBEHAVIOR_MPINDLOMCJL_OFFSET))(this);
		}

	};
}
