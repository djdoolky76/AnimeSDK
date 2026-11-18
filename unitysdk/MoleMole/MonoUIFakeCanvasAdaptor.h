#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/MoleMole/MonoUILayoutAdaptorBase.h"

namespace MoleMole { class UIAdaptorFakeCanvasScaler; }
namespace MoleMole { class UIFakeCanvasScaler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUIFAKECANVASADAPTOR_DOINITLAYOUT_OFFSET UNITYSDK_OFFSET(0x10D434E0)
#define MOLEMOLE_MONOUIFAKECANVASADAPTOR_INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x10D43710)
#define MOLEMOLE_MONOUIFAKECANVASADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET UNITYSDK_OFFSET(0x10D43400)
#define MOLEMOLE_MONOUIFAKECANVASADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET UNITYSDK_OFFSET(0x10D43360)
#define MOLEMOLE_MONOUIFAKECANVASADAPTOR_RELOADDATAFROMJSON_OFFSET UNITYSDK_OFFSET(0x10D43EB0)
#define MOLEMOLE_MONOUIFAKECANVASADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10D441E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIFakeCanvasAdaptor_TypeDefinitionIndex = 40886;

	class MonoUIFakeCanvasAdaptor : public ::MoleMole::MonoUILayoutAdaptorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::UIFakeCanvasScaler*>* PlatformUIParams; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIFAKECANVASADAPTOR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPlatformUIParamsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIFAKECANVASADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET))(this);
		}

		::System::Boolean IsContainPlatformUIParams(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIFAKECANVASADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET))(this, adaptorShowType);
		}

		::System::Boolean DoInitLayout(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIFAKECANVASADAPTOR_DOINITLAYOUT_OFFSET))(this, adaptorShowType);
		}

		::System::Void ReloadDataFromJson(::MoleMole::AdaptorShowType type, ::System::String*& adaptorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AdaptorShowType, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIFAKECANVASADAPTOR_RELOADDATAFROMJSON_OFFSET))(this, type, adaptorInfo);
		}

		::System::Void InitTransform(::UnityEngine::RectTransform* rectTransform, ::MoleMole::UIAdaptorFakeCanvasScaler* adaptorParams)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::MoleMole::UIAdaptorFakeCanvasScaler*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIFAKECANVASADAPTOR_INITTRANSFORM_OFFSET))(this, rectTransform, adaptorParams);
		}
	};
}
