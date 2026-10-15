#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEGAELKIHBI.h"
#include "unitysdk/HBCMHADMLOP.h"
#include "unitysdk/HIOAHEHPEAE.h"
#include "unitysdk/RPG/GameCore/LightningStrikeAreaMode.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HMCPDKKKCPA;
class JKLGCEPNNGP;
class KFELGAIGHAP;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class LightningStrikeAreaConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define OCICMDBOIAE_AHGHAIMKBDA_OFFSET UNITYSDK_OFFSET(0xBD67D10)
#define OCICMDBOIAE_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD6C9B0)
#define OCICMDBOIAE_CFJPAOINLGD_OFFSET UNITYSDK_OFFSET(0xBD6C330)
#define OCICMDBOIAE_CGLMCOLOICA_OFFSET UNITYSDK_OFFSET(0xBD6A8A0)
#define OCICMDBOIAE_CJBFDOOAHBF_OFFSET UNITYSDK_OFFSET(0xBD6B810)
#define OCICMDBOIAE_CPCAFOACNJO_OFFSET UNITYSDK_OFFSET(0xBD6C880)
#define OCICMDBOIAE_CTOR_OFFSET UNITYSDK_OFFSET(0xBD6C960)
#define OCICMDBOIAE_FJGKJHFNPOJ_OFFSET UNITYSDK_OFFSET(0xBD6C760)
#define OCICMDBOIAE_FMGNMFOGEEA_OFFSET UNITYSDK_OFFSET(0xBD6C080)
#define OCICMDBOIAE_FOMEOENDCPL_OFFSET UNITYSDK_OFFSET(0xBD68A20)
#define OCICMDBOIAE_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xBD68180)
#define OCICMDBOIAE_HFKEOLANCAD_OFFSET UNITYSDK_OFFSET(0xBD67E80)
#define OCICMDBOIAE_HOHGIJNDJNJ_OFFSET UNITYSDK_OFFSET(0xBD6AA00)
#define OCICMDBOIAE_JHGEINDPIHE_OFFSET UNITYSDK_OFFSET(0xBD69B30)
#define OCICMDBOIAE_JOFMAOPCHJF_OFFSET UNITYSDK_OFFSET(0xBD6A6A0)
#define OCICMDBOIAE_LEAKCLIEAMG_OFFSET UNITYSDK_OFFSET(0xBD69D20)
#define OCICMDBOIAE_LKPEEOALDKO_OFFSET UNITYSDK_OFFSET(0xBD69BC0)
#define OCICMDBOIAE_LOOLEIOCAOF_OFFSET UNITYSDK_OFFSET(0xBD6B3F0)
#define OCICMDBOIAE_LPIILHCLGHI_OFFSET UNITYSDK_OFFSET(0xBD686A0)
#define OCICMDBOIAE_NFLKJLHBBAD_OFFSET UNITYSDK_OFFSET(0xBD69DB0)
#define OCICMDBOIAE_NPBDOKJBJEE_OFFSET UNITYSDK_OFFSET(0xBD69C90)
#define OCICMDBOIAE_NPCMJPMFBAP_OFFSET UNITYSDK_OFFSET(0xBD6C450)
#define OCICMDBOIAE_ODKADDNODOO_OFFSET UNITYSDK_OFFSET(0xBD68070)
#define OCICMDBOIAE_ONINIT_OFFSET UNITYSDK_OFFSET(0xBD68190)
#define OCICMDBOIAE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xBD68320)
#define OCICMDBOIAE_PKJKIDNIOML_OFFSET UNITYSDK_OFFSET(0xBD6B360)
#define OCICMDBOIAE_PNPCLNDFIKL_OFFSET UNITYSDK_OFFSET(0xBD67F40)
#define OCICMDBOIAE_PPMJGLMHFDJ_OFFSET UNITYSDK_OFFSET(0xBD6BDC0)
#define OCICMDBOIAE_TICK_OFFSET UNITYSDK_OFFSET(0xBD68910)

	class OCICMDBOIAE : public ::HBCMHADMLOP
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HIOAHEHPEAE>* AIGLLHDMBLA; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HMCPDKKKCPA*>* DCFIANFMLFC; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* DIICJGAAJCA; // 0x30
		::KFELGAIGHAP* OHIADJMBNMJ; // 0x38
		::Il2CppArray<::UnityEngine::Collider*>* CPBGNCJOOEO; // 0x40
		static ::System::String** StaticGet_IHLDCANJGGJ()
		{
			return (::System::String**)UnitySDK::FromName("", "OCICMDBOIAE")->GetStaticField(0x5EB90);
		}

		static ::System::String** StaticGet_NGCPHLMENKB()
		{
			return (::System::String**)UnitySDK::FromName("", "OCICMDBOIAE")->GetStaticField(0x5EB98);
		}

		static ::System::Int32* StaticGet_JANAFKOGLFF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OCICMDBOIAE")->GetStaticField(0x14460);
		}

		static ::System::Single* StaticGet_HDNLOEIKJJA()
		{
			return (::System::Single*)UnitySDK::FromName("", "OCICMDBOIAE")->GetStaticField(0x14464);
		}

		static ::System::Single* StaticGet_DLIHMBPBLMK()
		{
			return (::System::Single*)UnitySDK::FromName("", "OCICMDBOIAE")->GetStaticField(0x14468);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCICMDBOIAE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCICMDBOIAE_CCTOR_OFFSET))();
		}

		::System::Void AHGHAIMKBDA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LightningStrikeAreaConfig* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LightningStrikeAreaConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + OCICMDBOIAE_AHGHAIMKBDA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HFKEOLANCAD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OCICMDBOIAE_HFKEOLANCAD_OFFSET))(this, a1);
		}

		::System::Void PNPCLNDFIKL(::RPG::GameCore::GameEntity* a1, ::AEGAELKIHBI a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::AEGAELKIHBI, ::System::Boolean))((::PBYTE)hIl2Cpp + OCICMDBOIAE_PNPCLNDFIKL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ODKADDNODOO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LightningStrikeAreaMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LightningStrikeAreaMode))((::PBYTE)hIl2Cpp + OCICMDBOIAE_ODKADDNODOO_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCICMDBOIAE_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCICMDBOIAE_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCICMDBOIAE_ONUNINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCICMDBOIAE_TICK_OFFSET))(this, a1);
		}

		::System::Void FOMEOENDCPL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCICMDBOIAE_FOMEOENDCPL_OFFSET))(this, a1);
		}

		::System::Boolean JHGEINDPIHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCICMDBOIAE_JHGEINDPIHE_OFFSET))(this);
		}

		::RPG::GameCore::LightningStrikeAreaMode LEAKCLIEAMG(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LightningStrikeAreaMode(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCICMDBOIAE_LEAKCLIEAMG_OFFSET))(this, a1);
		}

		::AEGAELKIHBI NPBDOKJBJEE(::System::UInt32 a1)
		{
			return ((::AEGAELKIHBI(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCICMDBOIAE_NPBDOKJBJEE_OFFSET))(this, a1);
		}

		::System::Boolean LKPEEOALDKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCICMDBOIAE_LKPEEOALDKO_OFFSET))(this);
		}

		::System::Boolean PKJKIDNIOML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCICMDBOIAE_PKJKIDNIOML_OFFSET))(this);
		}

		::System::Void NFLKJLHBBAD(::HMCPDKKKCPA* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HMCPDKKKCPA*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OCICMDBOIAE_NFLKJLHBBAD_OFFSET))(this, a1, a2);
		}

		::System::Void CGLMCOLOICA(::System::String* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OCICMDBOIAE_CGLMCOLOICA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JOFMAOPCHJF(::HMCPDKKKCPA* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::HMCPDKKKCPA*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OCICMDBOIAE_JOFMAOPCHJF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LOOLEIOCAOF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LightningStrikeAreaConfig* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LightningStrikeAreaConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OCICMDBOIAE_LOOLEIOCAOF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CJBFDOOAHBF(::RPG::PoolList_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + OCICMDBOIAE_CJBFDOOAHBF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 PPMJGLMHFDJ(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OCICMDBOIAE_PPMJGLMHFDJ_OFFSET))(this, a1);
		}

		::System::Void HOHGIJNDJNJ(::HMCPDKKKCPA* a1, ::JKLGCEPNNGP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HMCPDKKKCPA*, ::JKLGCEPNNGP*))((::PBYTE)hIl2Cpp + OCICMDBOIAE_HOHGIJNDJNJ_OFFSET))(this, a1, a2);
		}

		::System::Void CPCAFOACNJO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCICMDBOIAE_CPCAFOACNJO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CFJPAOINLGD(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OCICMDBOIAE_CFJPAOINLGD_OFFSET))(this, a1);
		}

		::System::Void NPCMJPMFBAP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::LightningStrikeAreaConfig* a2, ::HMCPDKKKCPA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::LightningStrikeAreaConfig*, ::HMCPDKKKCPA*))((::PBYTE)hIl2Cpp + OCICMDBOIAE_NPCMJPMFBAP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FMGNMFOGEEA(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::GameEntityList* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + OCICMDBOIAE_FMGNMFOGEEA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LPIILHCLGHI(::HMCPDKKKCPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMCPDKKKCPA*))((::PBYTE)hIl2Cpp + OCICMDBOIAE_LPIILHCLGHI_OFFSET))(this, a1);
		}

		::System::Void FJGKJHFNPOJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCICMDBOIAE_FJGKJHFNPOJ_OFFSET))(this, a1);
		}

	};
