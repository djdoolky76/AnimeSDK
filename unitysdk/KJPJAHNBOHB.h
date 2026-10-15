#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"
class EBMPLHELOMF;
class EIDIGCLKLOA;
class LFLLOBENAFB;
class NIGAJBOLBBC;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class Nullable; }
namespace UnityEngine { class Transform; }

#define KJPJAHNBOHB_ANFHFABGJJO_OFFSET UNITYSDK_OFFSET(0xB45FB50)
#define KJPJAHNBOHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB460590)
#define KJPJAHNBOHB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB45FBE0)
#define KJPJAHNBOHB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB45FA40)
#define KJPJAHNBOHB_FGOEGLEDNCJ_OFFSET UNITYSDK_OFFSET(0xB4603D0)
#define KJPJAHNBOHB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB45F9E0)
#define KJPJAHNBOHB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB45FA00)
#define KJPJAHNBOHB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB45FA90)
#define KJPJAHNBOHB_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0xB460190)
#define KJPJAHNBOHB_MDOFPEBJCKA_OFFSET UNITYSDK_OFFSET(0xB460420)
#define KJPJAHNBOHB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB4600E0)
#define KJPJAHNBOHB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB45F9F0)
#define KJPJAHNBOHB__ONBIND_OFFSET UNITYSDK_OFFSET(0xB45F8F0)
#define KJPJAHNBOHB__ONTICK_OFFSET UNITYSDK_OFFSET(0xB45FCD0)

	class KJPJAHNBOHB : public ::FMPCODLIOLG
	{
	public:
		::EIDIGCLKLOA* IGHAHBNLIJA; // 0x60
		::NIGAJBOLBBC* CGNEEONCEBG; // 0x68
		::RPG::Client::UIValueChangeAnimation* CGJKPIEFBKB; // 0x70
		::LFLLOBENAFB* IDPANBOMBCE; // 0x78
		::EBMPLHELOMF* ADENBFMPHMB; // 0x80
		::RPG::Client::MonoInControlTip* HBHIMMJCGAA; // 0x88
		::System::Int32 _Index_k__BackingField; // 0x90
		::System::Nullable* NCNHCOBEHPL; // 0x94
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* PENODFJKLGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJAHNBOHB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJAHNBOHB__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJAHNBOHB_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJPJAHNBOHB_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJAHNBOHB_GET_TRANS_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJAHNBOHB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJAHNBOHB_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJPJAHNBOHB__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::EIDIGCLKLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDIGCLKLOA*))((::PBYTE)hIl2Cpp + KJPJAHNBOHB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJAHNBOHB_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void LEEEAMMHPFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJAHNBOHB_LEEEAMMHPFM_OFFSET))(this);
		}

		::System::Void MDOFPEBJCKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJPJAHNBOHB_MDOFPEBJCKA_OFFSET))(this, a1);
		}

		::System::Void ANFHFABGJJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJAHNBOHB_ANFHFABGJJO_OFFSET))(this);
		}

		::RPG::GameCore::IronTombProgressMode FGOEGLEDNCJ()
		{
			return ((::RPG::GameCore::IronTombProgressMode(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJAHNBOHB_FGOEGLEDNCJ_OFFSET))(this);
		}

	};
