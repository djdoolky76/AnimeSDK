#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"
#include "unitysdk/System/Nullable_1.h"
class EBMPLHELOMF;
class EIDIGCLKLOA;
class LFLLOBENAFB;
class NIGAJBOLBBC;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine { class Transform; }

#define KJPJAHNBOHB_ANFHFABGJJO_OFFSET UNITYSDK_OFFSET(0xB458F00)
#define KJPJAHNBOHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB459960)
#define KJPJAHNBOHB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB458F90)
#define KJPJAHNBOHB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB458DF0)
#define KJPJAHNBOHB_FGOEGLEDNCJ_OFFSET UNITYSDK_OFFSET(0xB4597A0)
#define KJPJAHNBOHB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB458D90)
#define KJPJAHNBOHB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB458DB0)
#define KJPJAHNBOHB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB458E40)
#define KJPJAHNBOHB_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0xB459540)
#define KJPJAHNBOHB_MDOFPEBJCKA_OFFSET UNITYSDK_OFFSET(0xB4597F0)
#define KJPJAHNBOHB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB459490)
#define KJPJAHNBOHB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB458DA0)
#define KJPJAHNBOHB__ONBIND_OFFSET UNITYSDK_OFFSET(0xB458CA0)
#define KJPJAHNBOHB__ONTICK_OFFSET UNITYSDK_OFFSET(0xB459080)

inline static constexpr unsigned int KJPJAHNBOHB_TypeDefinitionIndex = 71703;

	class KJPJAHNBOHB : public ::FMPCODLIOLG
	{
	public:
		::LFLLOBENAFB* IDPANBOMBCE; // 0x60
		::RPG::Client::MonoInControlTip* HBHIMMJCGAA; // 0x68
		::EBMPLHELOMF* ADENBFMPHMB; // 0x70
		::NIGAJBOLBBC* CGNEEONCEBG; // 0x78
		::RPG::Client::UIValueChangeAnimation* CGJKPIEFBKB; // 0x80
		::EIDIGCLKLOA* IGHAHBNLIJA; // 0x88
		::System::Nullable_1<::RPG::GameCore::IronTombProgressMode> NCNHCOBEHPL; // 0x90
		::System::Int32 _Index_k__BackingField; // 0x98
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
