#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class PKDEEDPGBOD;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18983250)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__DISPLAYCLASS18_0__SENDREFRESHMAPREQ_B__0_OFFSET UNITYSDK_OFFSET(0x18983260)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__DISPLAYCLASS18_0__SENDREFRESHMAPREQ_B__1_OFFSET UNITYSDK_OFFSET(0x18983310)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPageController___c__DisplayClass18_0_TypeDefinitionIndex = 51165;

	class UIAbyssS2MapRefreshPageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken ctsToken; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::ValueTuple_2<::System::Boolean, ::PKDEEDPGBOD*>>* tcs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendRefreshMapReq_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__DISPLAYCLASS18_0__SENDREFRESHMAPREQ_B__0_OFFSET))(this);
		}

		::System::Void _SendRefreshMapReq_b__1(::System::Boolean b, ::PKDEEDPGBOD* map)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::PKDEEDPGBOD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__DISPLAYCLASS18_0__SENDREFRESHMAPREQ_B__1_OFFSET))(this, b, map);
		}
	};
}
