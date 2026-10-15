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

#define IDIBFGFBHLB_APAPGFDNNIL_OFFSET UNITYSDK_OFFSET(0x15ECA7A0)
#define IDIBFGFBHLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x15ECABC0)
#define IDIBFGFBHLB_CKHIMMEEHLM_OFFSET UNITYSDK_OFFSET(0x15ECA240)
#define IDIBFGFBHLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15ECAB00)
#define IDIBFGFBHLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EC95A0)
#define IDIBFGFBHLB_DKECDHPCALK_OFFSET UNITYSDK_OFFSET(0x15EC9B80)
#define IDIBFGFBHLB_EHALLNDHGIK_OFFSET UNITYSDK_OFFSET(0x15ECA740)
#define IDIBFGFBHLB_GET_FOLLOWSOURCE_OFFSET UNITYSDK_OFFSET(0x15ECAAE0)
#define IDIBFGFBHLB_GHMBCLLGMOC_OFFSET UNITYSDK_OFFSET(0x15EC96C0)
#define IDIBFGFBHLB_JMCJOKEHFBI_OFFSET UNITYSDK_OFFSET(0x15EC99D0)
#define IDIBFGFBHLB_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15EC9B20)
#define IDIBFGFBHLB_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15EC9490)
#define IDIBFGFBHLB_LNPLLILOPPL_OFFSET UNITYSDK_OFFSET(0x15EC9900)
#define IDIBFGFBHLB_SET_FOLLOWSOURCE_OFFSET UNITYSDK_OFFSET(0x15ECAAF0)

inline static constexpr unsigned int IDIBFGFBHLB_TypeDefinitionIndex = 56939;

	class IDIBFGFBHLB : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TriggerEffectParamsRef, ::RPG::Client::TriggerEffectParamsRef>* FJFBAGIAAKK; // 0x18
		::RPG::GameCore::GameEntity* _FollowSource_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* FPKLJFCNAAB; // 0x28
		static ::Il2CppArray<::RPG::Client::MonoEffectHideReason>** StaticGet_HGMKJKPKHLG()
		{
			return (::Il2CppArray<::RPG::Client::MonoEffectHideReason>**)UnitySDK::FromName("", "IDIBFGFBHLB")->GetStaticField(0x45060);
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
