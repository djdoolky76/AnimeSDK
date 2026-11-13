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

#define KJPJAHNBOHB_ANFHFABGJJO_OFFSET UNITYSDK_OFFSET(0x17334BC0)
#define KJPJAHNBOHB_CTOR_OFFSET UNITYSDK_OFFSET(0x17335610)
#define KJPJAHNBOHB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x17334C50)
#define KJPJAHNBOHB_FGOEGLEDNCJ_OFFSET UNITYSDK_OFFSET(0x17335450)
#define KJPJAHNBOHB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x17334A50)
#define KJPJAHNBOHB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x17334A70)
#define KJPJAHNBOHB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x17334B00)
#define KJPJAHNBOHB_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0x17335200)
#define KJPJAHNBOHB_MDOFPEBJCKA_OFFSET UNITYSDK_OFFSET(0x173354A0)
#define KJPJAHNBOHB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x17335150)
#define KJPJAHNBOHB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x17334A60)
#define KJPJAHNBOHB__ONBIND_OFFSET UNITYSDK_OFFSET(0x173348A0)
#define KJPJAHNBOHB__ONTICK_OFFSET UNITYSDK_OFFSET(0x17334D40)
#define KJPJAHNBOHB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17334AB0)

inline static constexpr unsigned int KJPJAHNBOHB_TypeDefinitionIndex = 73694;

	class KJPJAHNBOHB : public ::FMPCODLIOLG
	{
	public:
		::LFLLOBENAFB* IDPANBOMBCE; // 0x60
		::NIGAJBOLBBC* CGNEEONCEBG; // 0x68
		::EBMPLHELOMF* ADENBFMPHMB; // 0x70
		::EIDIGCLKLOA* IGHAHBNLIJA; // 0x78
		::RPG::Client::MonoInControlTip* HBHIMMJCGAA; // 0x80
		::RPG::Client::UIValueChangeAnimation* CGJKPIEFBKB; // 0x88
		::System::Int32 _Index_k__BackingField; // 0x90
		::System::Nullable_1<::RPG::GameCore::IronTombProgressMode> NCNHCOBEHPL; // 0x94
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

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPJAHNBOHB__SETUPVIEW_OFFSET))(this);
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
