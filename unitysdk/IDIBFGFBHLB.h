#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectHideReason.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDIBFGFBHLB_APAPGFDNNIL_OFFSET UNITYSDK_OFFSET(0x15ED66B0)
#define IDIBFGFBHLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x15ED6AD0)
#define IDIBFGFBHLB_CKHIMMEEHLM_OFFSET UNITYSDK_OFFSET(0x15ED6150)
#define IDIBFGFBHLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15ED6A10)
#define IDIBFGFBHLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15ED54B0)
#define IDIBFGFBHLB_DKECDHPCALK_OFFSET UNITYSDK_OFFSET(0x15ED5A90)
#define IDIBFGFBHLB_EHALLNDHGIK_OFFSET UNITYSDK_OFFSET(0x15ED6650)
#define IDIBFGFBHLB_GET_FOLLOWSOURCE_OFFSET UNITYSDK_OFFSET(0x15ED69F0)
#define IDIBFGFBHLB_GHMBCLLGMOC_OFFSET UNITYSDK_OFFSET(0x15ED55D0)
#define IDIBFGFBHLB_JMCJOKEHFBI_OFFSET UNITYSDK_OFFSET(0x15ED58E0)
#define IDIBFGFBHLB_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15ED5A30)
#define IDIBFGFBHLB_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15ED5390)
#define IDIBFGFBHLB_LNPLLILOPPL_OFFSET UNITYSDK_OFFSET(0x15ED5810)
#define IDIBFGFBHLB_SET_FOLLOWSOURCE_OFFSET UNITYSDK_OFFSET(0x15ED6A00)

	class IDIBFGFBHLB : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* FPKLJFCNAAB; // 0x18
		::RPG::GameCore::GameEntity* _FollowSource_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TriggerEffectParamsRef, ::RPG::Client::TriggerEffectParamsRef>* FJFBAGIAAKK; // 0x28
		static ::Il2CppArray<::RPG::Client::MonoEffectHideReason>** StaticGet_HGMKJKPKHLG()
		{
			return (::Il2CppArray<::RPG::Client::MonoEffectHideReason>**)UnitySDK::FromName("", "IDIBFGFBHLB")->GetStaticField(0x52F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDIBFGFBHLB_CCTOR_OFFSET))();
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_DISPOSE_OFFSET))(this);
		}

		::System::Void LNPLLILOPPL(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_LNPLLILOPPL_OFFSET))(this, a1, a2);
		}

		::System::Void GHMBCLLGMOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_GHMBCLLGMOC_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void EHALLNDHGIK(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_EHALLNDHGIK_OFFSET))(this, a1, a2);
		}

		::System::Void APAPGFDNNIL(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_APAPGFDNNIL_OFFSET))(this, a1, a2);
		}

		::System::Void DKECDHPCALK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_DKECDHPCALK_OFFSET))(this);
		}

		::System::Void CKHIMMEEHLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_CKHIMMEEHLM_OFFSET))(this);
		}

		::System::Void JMCJOKEHFBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_JMCJOKEHFBI_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_FollowSource()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_GET_FOLLOWSOURCE_OFFSET))(this);
		}

		::System::Void set_FollowSource(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IDIBFGFBHLB_SET_FOLLOWSOURCE_OFFSET))(this, a1);
		}

	};
