#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
class BIJBAKCALII;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_SWITCHMASCOTMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF7B60)
#define RPG_CLIENT_SWITCHMASCOTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CCF6510)
#define RPG_CLIENT_SWITCHMASCOTMODULE_FIRESHOWCHESTEVENT_OFFSET UNITYSDK_OFFSET(0x1CCF6B10)
#define RPG_CLIENT_SWITCHMASCOTMODULE_GETPUZZLECOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0x1CCF6740)
#define RPG_CLIENT_SWITCHMASCOTMODULE_GETPUZZLETOTALCOINCNT_OFFSET UNITYSDK_OFFSET(0x1CCF6A40)
#define RPG_CLIENT_SWITCHMASCOTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1CCF6160)
#define RPG_CLIENT_SWITCHMASCOTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CCF65B0)
#define RPG_CLIENT_SWITCHMASCOTMODULE__FIRESHOWCHESTEVENT_OFFSET UNITYSDK_OFFSET(0x1CCF6BC0)
#define RPG_CLIENT_SWITCHMASCOTMODULE__GETSWITCHMASCOTPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x1CCF6800)
#define RPG_CLIENT_SWITCHMASCOTMODULE__INITSWITCHMASCOTPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x1CCF6240)
#define RPG_CLIENT_SWITCHMASCOTMODULE__NOTIFYTOAST_OFFSET UNITYSDK_OFFSET(0x1CCF79D0)
#define RPG_CLIENT_SWITCHMASCOTMODULE__ONGETSWITCHMASCOTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1CCF6EC0)
#define RPG_CLIENT_SWITCHMASCOTMODULE__ONSWITCHMASCOTUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CCF7360)
#define RPG_CLIENT_SWITCHMASCOTMODULE__SENDGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1CCF6DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchMascotModule_TypeDefinitionIndex = 69958;

	class SwitchMascotModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BIJBAKCALII*>* SwitchMascotPuzzleDataDict; // 0x10
		::RPG::Client::TextID _GET_COIN_TEXT_ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::UInt32 GetPuzzleCollectCoinCnt(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_GETPUZZLECOLLECTCOINCNT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GetPuzzleTotalCoinCnt(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_GETPUZZLETOTALCOINCNT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FireShowChestEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_FIRESHOWCHESTEVENT_OFFSET))(this, a1);
		}

		::BIJBAKCALII* _GetSwitchMascotPuzzleData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::BIJBAKCALII*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__GETSWITCHMASCOTPUZZLEDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _FireShowChestEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__FIRESHOWCHESTEVENT_OFFSET))(this, a1);
		}

		::System::Void _SendGetDataScRsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__SENDGETDATASCRSP_OFFSET))(this);
		}

		::System::Void _OnGetSwitchMascotDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__ONGETSWITCHMASCOTDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSwitchMascotUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__ONSWITCHMASCOTUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _InitSwitchMascotPuzzleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__INITSWITCHMASCOTPUZZLEDATA_OFFSET))(this);
		}

		::System::Void _NotifyToast(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__NOTIFYTOAST_OFFSET))(this, a1, a2);
		}

	};
}
