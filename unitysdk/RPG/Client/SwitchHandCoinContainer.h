#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
class ENHOPAHGCMA;
namespace RPG::Client { class SwitchHandCoinData; }
namespace RPG::Client { class SwitchHandMazePuzzleDataManager; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEDFD0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CCEC5E0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_FIRECOLLECTCOINFINISHEVENT_OFFSET UNITYSDK_OFFSET(0x1CCED680)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETPUZZLECOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0x1CCEC8C0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETPUZZLETOTALCOINCNT_OFFSET UNITYSDK_OFFSET(0x1CCEC950)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETSWITCHHANDCOINDATALIST_OFFSET UNITYSDK_OFFSET(0x1CCEC880)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_INIT_OFFSET UNITYSDK_OFFSET(0x1CCEC1D0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_ISCOLLECTALLCOIN_OFFSET UNITYSDK_OFFSET(0x1CCECA60)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_SYNCCOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0x1CCEC9E0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_TRYUPDATESERVERCOIN_OFFSET UNITYSDK_OFFSET(0x1CCEDA30)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x1CCEC230)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__INITCOINDATA_OFFSET UNITYSDK_OFFSET(0x1CCECBC0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__INITPUZZLECOINCNT_OFFSET UNITYSDK_OFFSET(0x1CCEC310)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__NOTIFYTOAST_OFFSET UNITYSDK_OFFSET(0x1CCEDE30)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONPROPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1CCED120)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONSWITCHHANDHIDE_OFFSET UNITYSDK_OFFSET(0x1CCED080)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONSWITCHHANDSHOW_OFFSET UNITYSDK_OFFSET(0x1CCECB60)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x1CCECF50)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__REMOVENOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x1CCEC680)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__UNREGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x1CCEC760)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__UPDATEPUZZLECOINCNT_OFFSET UNITYSDK_OFFSET(0x1CCED290)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__UPDATESERVERCOIN_OFFSET UNITYSDK_OFFSET(0x1CCEDB20)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandCoinContainer_TypeDefinitionIndex = 69945;

	class SwitchHandCoinContainer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _PuzzleCollectCoinCnt; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwitchHandCoinData*>* _CoinDataList; // 0x18
		::RPG::Client::SwitchHandMazePuzzleDataManager* _Owner; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _PuzzleTotalCoinCnt; // 0x28
		::RPG::Client::TextID _GET_ALL_COIN_TEXT_ID; // 0x30
		::RPG::Client::TextID _GET_COIN_TEXT_ID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::SwitchHandMazePuzzleDataManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwitchHandMazePuzzleDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwitchHandCoinData*>* GetSwitchHandCoinDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwitchHandCoinData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETSWITCHHANDCOINDATALIST_OFFSET))(this);
		}

		::System::UInt32 GetPuzzleCollectCoinCnt(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETPUZZLECOLLECTCOINCNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetPuzzleTotalCoinCnt(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETPUZZLETOTALCOINCNT_OFFSET))(this, a1);
		}

		::System::Void SyncCollectCoinCnt(::ENHOPAHGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_SYNCCOLLECTCOINCNT_OFFSET))(this, a1);
		}

		::System::Boolean IsCollectAllCoin(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_ISCOLLECTALLCOIN_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__ADDNOTIFYHANDLER_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__REMOVENOTIFYHANDLER_OFFSET))(this);
		}

		::System::Void _OnSwitchHandShow(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONSWITCHHANDSHOW_OFFSET))(this, a1);
		}

		::System::Void _OnSwitchHandHide(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONSWITCHHANDHIDE_OFFSET))(this, a1);
		}

		::System::Void _RegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__REGISTEREVENT_OFFSET))(this);
		}

		::System::Void _UnRegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__UNREGISTEREVENT_OFFSET))(this);
		}

		::System::Void _OnPropStateChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONPROPSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void FireCollectCoinFinishEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_FIRECOLLECTCOINFINISHEVENT_OFFSET))(this, a1);
		}

		::System::Void TryUpdateServerCoin(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_TRYUPDATESERVERCOIN_OFFSET))(this, a1, a2);
		}

		::System::Void _InitCoinData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__INITCOINDATA_OFFSET))(this);
		}

		::System::Void _InitPuzzleCoinCnt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__INITPUZZLECOINCNT_OFFSET))(this);
		}

		::System::Void _UpdatePuzzleCoinCnt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__UPDATEPUZZLECOINCNT_OFFSET))(this);
		}

		::System::Void _NotifyToast(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__NOTIFYTOAST_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateServerCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__UPDATESERVERCOIN_OFFSET))(this, a1);
		}

	};
}
