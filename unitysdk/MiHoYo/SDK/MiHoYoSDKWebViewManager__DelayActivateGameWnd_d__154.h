#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER__DELAYACTIVATEGAMEWND_D__154_CTOR_OFFSET UNITYSDK_OFFSET(0xAFF6130)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER__DELAYACTIVATEGAMEWND_D__154_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB0131A0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER__DELAYACTIVATEGAMEWND_D__154_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB013300)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER__DELAYACTIVATEGAMEWND_D__154_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB013360)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER__DELAYACTIVATEGAMEWND_D__154_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB013310)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER__DELAYACTIVATEGAMEWND_D__154_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB013190)

namespace MiHoYo::SDK
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70, typename T71, typename T72, typename T73, typename T74, typename T75, typename T76, typename T77, typename T78, typename T79, typename T80, typename T81, typename T82, typename T83, typename T84, typename T85, typename T86, typename T87, typename T88, typename T89, typename T90, typename T91, typename T92, typename T93, typename T94, typename T95, typename T96, typename T97, typename T98, typename T99, typename T100, typename T101, typename T102, typename T103, typename T104, typename T105, typename T106, typename T107, typename T108, typename T109, typename T110, typename T111, typename T112, typename T113, typename T114, typename T115, typename T116, typename T117, typename T118, typename T119, typename T120, typename T121, typename T122, typename T123, typename T124, typename T125, typename T126, typename T127, typename T128, typename T129, typename T130, typename T131, typename T132, typename T133, typename T134, typename T135, typename T136, typename T137, typename T138, typename T139, typename T140, typename T141, typename T142, typename T143, typename T144, typename T145, typename T146, typename T147, typename T148, typename T149, typename T150, typename T151, typename T152, typename T153, typename T154>
	class MiHoYoSDKWebViewManager__DelayActivateGameWnd_d__154 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER__DELAYACTIVATEGAMEWND_D__154_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER__DELAYACTIVATEGAMEWND_D__154_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER__DELAYACTIVATEGAMEWND_D__154_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER__DELAYACTIVATEGAMEWND_D__154_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER__DELAYACTIVATEGAMEWND_D__154_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER__DELAYACTIVATEGAMEWND_D__154_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
