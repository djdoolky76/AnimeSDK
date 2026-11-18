#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/MoleMole/MonoUILayoutAdaptorBase.h"

class LayoutLimiter;
namespace MoleMole { class LayoutLimiterAdaptor; }
namespace MoleMole { class MonoUILayoutLimiter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOUILAYOUTLIMITERADAPTOR_DOINITLAYOUT_OFFSET UNITYSDK_OFFSET(0x10443210)
#define MOLEMOLE_MONOUILAYOUTLIMITERADAPTOR_INITLAYOUTLIMITER_OFFSET UNITYSDK_OFFSET(0x10443440)
#define MOLEMOLE_MONOUILAYOUTLIMITERADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET UNITYSDK_OFFSET(0x10443130)
#define MOLEMOLE_MONOUILAYOUTLIMITERADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET UNITYSDK_OFFSET(0x10443090)
#define MOLEMOLE_MONOUILAYOUTLIMITERADAPTOR_RELOADDATAFROMJSON_OFFSET UNITYSDK_OFFSET(0x104438F0)
#define MOLEMOLE_MONOUILAYOUTLIMITERADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10443B90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUILayoutLimiterAdaptor_TypeDefinitionIndex = 73882;

	class MonoUILayoutLimiterAdaptor : public ::MoleMole::MonoUILayoutAdaptorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::LayoutLimiterAdaptor*>* PlatformUIParams; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTLIMITERADAPTOR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPlatformUIParamsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTLIMITERADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET))(this);
		}

		::System::Boolean IsContainPlatformUIParams(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTLIMITERADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET))(this, adaptorShowType);
		}

		::System::Boolean DoInitLayout(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTLIMITERADAPTOR_DOINITLAYOUT_OFFSET))(this, adaptorShowType);
		}

		::System::Void ReloadDataFromJson(::MoleMole::AdaptorShowType type, ::System::String*& adaptorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AdaptorShowType, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTLIMITERADAPTOR_RELOADDATAFROMJSON_OFFSET))(this, type, adaptorInfo);
		}

		static ::System::Boolean InitLayoutLimiter(::LayoutLimiter* layoutLimiter, ::MoleMole::MonoUILayoutLimiter* adaptorParams)
		{
			return ((::System::Boolean(*)(::LayoutLimiter*, ::MoleMole::MonoUILayoutLimiter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTLIMITERADAPTOR_INITLAYOUTLIMITER_OFFSET))(layoutLimiter, adaptorParams);
		}
	};
}
