#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHOPAHGCMA;
namespace RPG::Client { class SwitchHandCoinContainer; }
namespace RPG::Client { class SwitchHandMazePuzzleRowWrapper; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEEEF0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CCEE4E0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETMAZEPUZZLEROWWRAPPER_1_OFFSET UNITYSDK_OFFSET(0x1CCEE5A0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETMAZEPUZZLEROWWRAPPER_OFFSET UNITYSDK_OFFSET(0x1CCED8B0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETPUZZLECOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0x1CCEE6D0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETPUZZLETOTALCOINCNT_OFFSET UNITYSDK_OFFSET(0x1CCEE7E0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETROWWRAPPERLIST_OFFSET UNITYSDK_OFFSET(0x1CCEDD50)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1CCEE0F0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_SYNCCOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0x1CCEE8F0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_TRYFIRECOINCOLLECTFINISHEVENT_OFFSET UNITYSDK_OFFSET(0x1CCEE950)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__CALCULATEPUZZLECOINCOLLECTCNT_OFFSET UNITYSDK_OFFSET(0x1CCEEAD0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__INITCOINCONTAINER_OFFSET UNITYSDK_OFFSET(0x1CCEE3D0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__INITMAZEPUZZLEROW_OFFSET UNITYSDK_OFFSET(0x1CCEE140)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__ISCHESTHIDDEN_OFFSET UNITYSDK_OFFSET(0x1CCEEDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandMazePuzzleDataManager_TypeDefinitionIndex = 69948;

	class SwitchHandMazePuzzleDataManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwitchHandMazePuzzleRowWrapper*>* _RowList; // 0x10
		::RPG::Client::SwitchHandCoinContainer* _CoinContainer; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwitchHandMazePuzzleRowWrapper*>* GetRowWrapperList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwitchHandMazePuzzleRowWrapper*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETROWWRAPPERLIST_OFFSET))(this);
		}

		::RPG::Client::SwitchHandMazePuzzleRowWrapper* GetMazePuzzleRowWrapper(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwitchHandMazePuzzleRowWrapper*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETMAZEPUZZLEROWWRAPPER_OFFSET))(this, a1);
		}

		::RPG::Client::SwitchHandMazePuzzleRowWrapper* GetMazePuzzleRowWrapper_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::SwitchHandMazePuzzleRowWrapper*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETMAZEPUZZLEROWWRAPPER_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GetPuzzleCollectCoinCnt(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETPUZZLECOLLECTCOINCNT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GetPuzzleTotalCoinCnt(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_GETPUZZLETOTALCOINCNT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SyncCollectCoinCnt(::ENHOPAHGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_SYNCCOLLECTCOINCNT_OFFSET))(this, a1);
		}

		::System::Void TryFireCoinCollectFinishEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER_TRYFIRECOINCOLLECTFINISHEVENT_OFFSET))(this, a1);
		}

		::System::Boolean _IsChestHidden(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__ISCHESTHIDDEN_OFFSET))(this, a1, a2);
		}

		::System::Void _InitMazePuzzleRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__INITMAZEPUZZLEROW_OFFSET))(this);
		}

		::System::UInt32 _CalculatePuzzleCoinCollectCnt(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__CALCULATEPUZZLECOINCOLLECTCNT_OFFSET))(this, a1);
		}

		::System::Void _InitCoinContainer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER__INITCOINCONTAINER_OFFSET))(this);
		}

	};
}
