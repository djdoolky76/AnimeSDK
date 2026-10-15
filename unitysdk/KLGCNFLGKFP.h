#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/GameCore/RhythmType.h"
#include "unitysdk/System/Object.h"
class AkCallbackInfo;
class JFAMKBGPHMJ;
namespace RPG::Client { class MusicAlbumItemData; }
namespace RPG::Client { class PlayingMusicItemsInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define KLGCNFLGKFP_ALBDJPBAIPI_OFFSET UNITYSDK_OFFSET(0xB526C70)
#define KLGCNFLGKFP_BEAHMOMDFMA_OFFSET UNITYSDK_OFFSET(0xB526DF0)
#define KLGCNFLGKFP_CEEMNIOAINC_OFFSET UNITYSDK_OFFSET(0xB5278B0)
#define KLGCNFLGKFP_CKGLDDBNNDC_OFFSET UNITYSDK_OFFSET(0xB5276E0)
#define KLGCNFLGKFP_CONECDJHOGI_OFFSET UNITYSDK_OFFSET(0xB527610)
#define KLGCNFLGKFP_CPMMFHEOOEE_OFFSET UNITYSDK_OFFSET(0xB527D70)
#define KLGCNFLGKFP_CTOR_OFFSET UNITYSDK_OFFSET(0xB528100)
#define KLGCNFLGKFP_EDMCNLPHGIK_OFFSET UNITYSDK_OFFSET(0xB5275B0)
#define KLGCNFLGKFP_EDPKPMCPEIM_OFFSET UNITYSDK_OFFSET(0xB526B90)
#define KLGCNFLGKFP_FMOLOAPDFAJ_OFFSET UNITYSDK_OFFSET(0xB5269A0)
#define KLGCNFLGKFP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB526770)
#define KLGCNFLGKFP_HEEFNDIOLBN_OFFSET UNITYSDK_OFFSET(0xB527C30)
#define KLGCNFLGKFP_HNGDODAGBOL_OFFSET UNITYSDK_OFFSET(0xB527A30)
#define KLGCNFLGKFP_IBIGCKKGFNM_OFFSET UNITYSDK_OFFSET(0xB527FA0)
#define KLGCNFLGKFP_INMBNONKAIP_OFFSET UNITYSDK_OFFSET(0xB527B70)
#define KLGCNFLGKFP_JNHPMPOIOHA_OFFSET UNITYSDK_OFFSET(0xB527DF0)
#define KLGCNFLGKFP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB526670)
#define KLGCNFLGKFP_LEKFGDPHFMK_OFFSET UNITYSDK_OFFSET(0xB527BD0)
#define KLGCNFLGKFP_MPDJNGIEDPK_OFFSET UNITYSDK_OFFSET(0xB527EA0)
#define KLGCNFLGKFP_NHIKLGJEKPK_OFFSET UNITYSDK_OFFSET(0xB526E90)

	class KLGCNFLGKFP : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* NNAEDFLABEF; // 0x10
		::System::Collections::Generic::List_1<::JFAMKBGPHMJ*>* NPDCHBFBFMN; // 0x18
		::RPG::Client::MusicAlbumItemData* FBCAEMCBJFG; // 0x20
		::System::UInt32 CBDHLKLJCFB; // 0x28
		::System::Single DMPLFDNBNMO; // 0x2C
		::System::Single MILAKFOPMNB; // 0x30
		::System::Boolean NINPLOKJKEF; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 FPPOACKKIFP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void FMOLOAPDFAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_FMOLOAPDFAJ_OFFSET))(this);
		}

		::System::Void BEAHMOMDFMA(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_BEAHMOMDFMA_OFFSET))(this, a1);
		}

		::System::Void EDPKPMCPEIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_EDPKPMCPEIM_OFFSET))(this);
		}

		::System::Void NHIKLGJEKPK(::RPG::Client::PlayingMusicItemsInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_NHIKLGJEKPK_OFFSET))(this, a1);
		}

		::System::Single HNGDODAGBOL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_HNGDODAGBOL_OFFSET))(this, a1, a2);
		}

		::System::UInt32 INMBNONKAIP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_INMBNONKAIP_OFFSET))(this);
		}

		::RPG::GameCore::RhythmType LEKFGDPHFMK()
		{
			return ((::RPG::GameCore::RhythmType(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_LEKFGDPHFMK_OFFSET))(this);
		}

		::System::Int32 HEEFNDIOLBN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_HEEFNDIOLBN_OFFSET))(this);
		}

		::System::Void JNHPMPOIOHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_JNHPMPOIOHA_OFFSET))(this);
		}

		::System::Void MPDJNGIEDPK(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_MPDJNGIEDPK_OFFSET))(this, a1, a2, a3);
		}

		::JFAMKBGPHMJ* CKGLDDBNNDC(::System::String* a1)
		{
			return ((::JFAMKBGPHMJ*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_CKGLDDBNNDC_OFFSET))(this, a1);
		}

		::JFAMKBGPHMJ* CEEMNIOAINC()
		{
			return ((::JFAMKBGPHMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_CEEMNIOAINC_OFFSET))(this);
		}

		::System::Boolean CONECDJHOGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_CONECDJHOGI_OFFSET))(this);
		}

		::System::Boolean EDMCNLPHGIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_EDMCNLPHGIK_OFFSET))(this);
		}

		::System::Void IBIGCKKGFNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_IBIGCKKGFNM_OFFSET))(this);
		}

		::System::Void ALBDJPBAIPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_ALBDJPBAIPI_OFFSET))(this);
		}

		::System::UInt32 CPMMFHEOOEE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGCNFLGKFP_CPMMFHEOOEE_OFFSET))(this);
		}

	};
