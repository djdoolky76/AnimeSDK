#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPG/Client/TextID.h"
class MDJGHNGBMIC;
class PMHJGLEOMLN;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class ToastHintItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_PILETOAST_CTOR_OFFSET UNITYSDK_OFFSET(0x18D968D0)
#define RPG_CLIENT_PILETOAST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18D93930)
#define RPG_CLIENT_PILETOAST_PILE_OFFSET UNITYSDK_OFFSET(0x18D92F60)
#define RPG_CLIENT_PILETOAST_START_OFFSET UNITYSDK_OFFSET(0x18D932E0)
#define RPG_CLIENT_PILETOAST_UPDATE_OFFSET UNITYSDK_OFFSET(0x18D93C80)
#define RPG_CLIENT_PILETOAST__ADDTOPILE_OFFSET UNITYSDK_OFFSET(0x18D93100)
#define RPG_CLIENT_PILETOAST__APPLYLATENCYLAG_OFFSET UNITYSDK_OFFSET(0x18D963B0)
#define RPG_CLIENT_PILETOAST__CLOSEPERSISTENTPILETOAST_OFFSET UNITYSDK_OFFSET(0x18D950F0)
#define RPG_CLIENT_PILETOAST__CONTROLPERSISTENTPILETOAST_OFFSET UNITYSDK_OFFSET(0x18D94E30)
#define RPG_CLIENT_PILETOAST__DISMISSPERSISTENTPILETOAST_OFFSET UNITYSDK_OFFSET(0x18D95380)
#define RPG_CLIENT_PILETOAST__ENDMOVING_OFFSET UNITYSDK_OFFSET(0x18D946C0)
#define RPG_CLIENT_PILETOAST__ENTERMOVING_OFFSET UNITYSDK_OFFSET(0x18D959B0)
#define RPG_CLIENT_PILETOAST__EXPIREOLDESTTRANSIENTITEM_OFFSET UNITYSDK_OFFSET(0x18D95930)
#define RPG_CLIENT_PILETOAST__FADEIN_OFFSET UNITYSDK_OFFSET(0x18D94170)
#define RPG_CLIENT_PILETOAST__FADEOUT_OFFSET UNITYSDK_OFFSET(0x18D94370)
#define RPG_CLIENT_PILETOAST__GETACTIVETRANSIENTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x18D95850)
#define RPG_CLIENT_PILETOAST__GETNEXTINDEX_OFFSET UNITYSDK_OFFSET(0x18D96350)
#define RPG_CLIENT_PILETOAST__GETTRANSIENTCAPACITY_OFFSET UNITYSDK_OFFSET(0x18D958E0)
#define RPG_CLIENT_PILETOAST__IGNOREPILETOAST_OFFSET UNITYSDK_OFFSET(0x18D95240)
#define RPG_CLIENT_PILETOAST__NORMALIZETRANSIENTITEMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x18D96410)
#define RPG_CLIENT_PILETOAST__ONASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x18D95AD0)
#define RPG_CLIENT_PILETOAST__ONHINTITEMLOADFINISH_OFFSET UNITYSDK_OFFSET(0x18D95F90)
#define RPG_CLIENT_PILETOAST__ONPERSISTENTASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x18D96000)
#define RPG_CLIENT_PILETOAST__PILESTRING_OFFSET UNITYSDK_OFFSET(0x18D94C70)
#define RPG_CLIENT_PILETOAST__PILESTRUCT_OFFSET UNITYSDK_OFFSET(0x18D94B30)
#define RPG_CLIENT_PILETOAST__PILETEXTID_OFFSET UNITYSDK_OFFSET(0x18D94D60)
#define RPG_CLIENT_PILETOAST__RELEASEPERSISTENTSLOT_OFFSET UNITYSDK_OFFSET(0x18D96840)
#define RPG_CLIENT_PILETOAST__SHOWCENTERTOAST_OFFSET UNITYSDK_OFFSET(0x18D95550)
#define RPG_CLIENT_PILETOAST__SHOWING_OFFSET UNITYSDK_OFFSET(0x18D942C0)
#define RPG_CLIENT_PILETOAST__SHOWPERSISTENTPILETOAST_OFFSET UNITYSDK_OFFSET(0x18D94EE0)
#define RPG_CLIENT_PILETOAST__TOASTCENTERSTRING_OFFSET UNITYSDK_OFFSET(0x18D95630)
#define RPG_CLIENT_PILETOAST__TOASTCENTERSTRUCT_OFFSET UNITYSDK_OFFSET(0x18D95410)
#define RPG_CLIENT_PILETOAST__TOASTCENTERTEXTID_OFFSET UNITYSDK_OFFSET(0x18D956A0)
#define RPG_CLIENT_PILETOAST__TRYSHOWPERSISTENTPILETOAST_OFFSET UNITYSDK_OFFSET(0x18D94940)
#define RPG_CLIENT_PILETOAST__UPDATEPERSISTENTITEM_OFFSET UNITYSDK_OFFSET(0x18D94590)

namespace RPG::Client
{
	inline static constexpr unsigned int PileToast_TypeDefinitionIndex = 75061;

	class PileToast : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _Moving; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single _MovingPoint; // 0x1C
		::System::UInt32 _Header; // 0x20
		::System::Int32 _ReadyItemCount; // 0x24
		::Il2CppArray<::RPG::Client::ToastHintItem*>* _Items; // 0x28
		::RPG::Client::ToastHintItem* _PersistentItem; // 0x30
		::System::Collections::Generic::Queue_1<::PMHJGLEOMLN*>* _Msgs; // 0x38
		::System::Boolean _IsIgnore; // 0x40
		::System::Boolean _PersistentSlotReserved; // 0x41
		::System::Byte _padding1[0x6];
		::System::String* _PersistentUniqueName; // 0x48
		::System::String* _PersistentOwnerToken; // 0x50
		::MDJGHNGBMIC* _PendingPersistentControl; // 0x58
		::Il2CppArray<::RPG::Client::IAssetOperation*>* _AssetOperations; // 0x60
		::RPG::Client::IAssetOperation* _PersistentAssetOperation; // 0x68
		// static const ::System::Object ITEM_COUNT; // 0x0
		// static const ::System::Object PERSISTENT_POSITION_INDEX; // 0x0
		// static const ::System::Object MOVE_TIME; // 0x0
		// static const ::System::Object FADE_TIME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST_CTOR_OFFSET))(this);
		}

		::System::Void Pile(::System::String* a1, ::System::String* a2, ::RPG::Client::TextID a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST_PILE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST_UPDATE_OFFSET))(this);
		}

		::System::Void _PileStruct(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__PILESTRUCT_OFFSET))(this, a1);
		}

		::System::Void _PileString(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__PILESTRING_OFFSET))(this, a1);
		}

		::System::Void _PileTextID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__PILETEXTID_OFFSET))(this, a1);
		}

		::System::Void _ControlPersistentPileToast(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__CONTROLPERSISTENTPILETOAST_OFFSET))(this, a1);
		}

		::System::Void _IgnorePileToast(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__IGNOREPILETOAST_OFFSET))(this, a1);
		}

		::System::Void _ToastCenterStruct(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__TOASTCENTERSTRUCT_OFFSET))(this, a1);
		}

		::System::Void _ToastCenterString(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__TOASTCENTERSTRING_OFFSET))(this, a1);
		}

		::System::Void _ToastCenterTextID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__TOASTCENTERTEXTID_OFFSET))(this, a1);
		}

		::System::Void _ShowCenterToast(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__SHOWCENTERTOAST_OFFSET))(this, a1);
		}

		::System::Void _AddToPile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__ADDTOPILE_OFFSET))(this);
		}

		::System::Boolean _OnAsyncLoad(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__ONASYNCLOAD_OFFSET))(this, a1);
		}

		::System::Boolean _OnPersistentAsyncLoad(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__ONPERSISTENTASYNCLOAD_OFFSET))(this, a1);
		}

		::System::Void _OnHintItemLoadFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__ONHINTITEMLOADFINISH_OFFSET))(this);
		}

		::System::Void _FadeIn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__FADEIN_OFFSET))(this, a1);
		}

		::System::Void _Showing(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__SHOWING_OFFSET))(this, a1, a2);
		}

		::System::Void _FadeOut(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__FADEOUT_OFFSET))(this, a1);
		}

		::System::Void _EnterMoving()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__ENTERMOVING_OFFSET))(this);
		}

		::System::Void _EndMoving()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__ENDMOVING_OFFSET))(this);
		}

		::System::Int32 _GetTransientCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__GETTRANSIENTCAPACITY_OFFSET))(this);
		}

		::System::Int32 _GetActiveTransientItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__GETACTIVETRANSIENTITEMCOUNT_OFFSET))(this);
		}

		::System::Void _NormalizeTransientItemPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__NORMALIZETRANSIENTITEMPOSITIONS_OFFSET))(this);
		}

		::System::Void _ExpireOldestTransientItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__EXPIREOLDESTTRANSIENTITEM_OFFSET))(this);
		}

		::System::Void _ShowPersistentPileToast(::MDJGHNGBMIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDJGHNGBMIC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__SHOWPERSISTENTPILETOAST_OFFSET))(this, a1);
		}

		::System::Void _ClosePersistentPileToast(::MDJGHNGBMIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDJGHNGBMIC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__CLOSEPERSISTENTPILETOAST_OFFSET))(this, a1);
		}

		::System::Void _DismissPersistentPileToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__DISMISSPERSISTENTPILETOAST_OFFSET))(this);
		}

		::System::Void _TryShowPersistentPileToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__TRYSHOWPERSISTENTPILETOAST_OFFSET))(this);
		}

		::System::Void _UpdatePersistentItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__UPDATEPERSISTENTITEM_OFFSET))(this);
		}

		::System::Void _ReleasePersistentSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__RELEASEPERSISTENTSLOT_OFFSET))(this);
		}

		::System::UInt32 _GetNextIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__GETNEXTINDEX_OFFSET))(this, a1);
		}

		::System::Void _ApplyLatencyLag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST__APPLYLATENCYLAG_OFFSET))(this);
		}

	};
}
