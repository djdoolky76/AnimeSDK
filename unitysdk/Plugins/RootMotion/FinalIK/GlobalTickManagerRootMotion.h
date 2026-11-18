#pragma once
#include "unitysdk/unitysdk.h"

class POEGBDNCMML;
namespace RootMotion::FinalIK { class LookController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KHFCEKPIBJH_1;

#define PLUGINS_ROOTMOTION_FINALIK_GLOBALTICKMANAGERROOTMOTION_INITDELAYREFRESHLIST_OFFSET UNITYSDK_OFFSET(0x1FE67120)
#define PLUGINS_ROOTMOTION_FINALIK_GLOBALTICKMANAGERROOTMOTION_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FE67170)
#define PLUGINS_ROOTMOTION_FINALIK_GLOBALTICKMANAGERROOTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE671B0)

namespace Plugins::RootMotion::FinalIK
{
	inline static constexpr unsigned int GlobalTickManagerRootMotion_TypeDefinitionIndex = 36883;

	class GlobalTickManagerRootMotion
	{
	public:
		::KHFCEKPIBJH_1<::RootMotion::FinalIK::LookController*>* _lookControllers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_ROOTMOTION_FINALIK_GLOBALTICKMANAGERROOTMOTION__CTOR_OFFSET))(this);
		}

		::System::Void InitDelayRefreshList(::System::Collections::Generic::List_1<::POEGBDNCMML*>* delayRefreshList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::POEGBDNCMML*>*))((::PBYTE)hIl2Cpp + PLUGINS_ROOTMOTION_FINALIK_GLOBALTICKMANAGERROOTMOTION_INITDELAYREFRESHLIST_OFFSET))(this, delayRefreshList);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_ROOTMOTION_FINALIK_GLOBALTICKMANAGERROOTMOTION_ONLATEUPDATE_OFFSET))(this);
		}
	};
}
