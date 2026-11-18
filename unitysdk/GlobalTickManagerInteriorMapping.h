#pragma once
#include "unitysdk/unitysdk.h"

class InteriorMapping;
class POEGBDNCMML;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KHFCEKPIBJH_1;

#define GLOBALTICKMANAGERINTERIORMAPPING_INITDELAYREFRESHLIST_OFFSET UNITYSDK_OFFSET(0x1FFEDE40)
#define GLOBALTICKMANAGERINTERIORMAPPING_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FFEDE90)
#define GLOBALTICKMANAGERINTERIORMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFEDED0)

inline static constexpr unsigned int GlobalTickManagerInteriorMapping_TypeDefinitionIndex = 34877;

class GlobalTickManagerInteriorMapping
{
public:
	::KHFCEKPIBJH_1<::InteriorMapping*>* _interiorMappingSet; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOBALTICKMANAGERINTERIORMAPPING__CTOR_OFFSET))(this);
	}

	::System::Void InitDelayRefreshList(::System::Collections::Generic::List_1<::POEGBDNCMML*>* delayRefreshList)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::POEGBDNCMML*>*))((::PBYTE)hIl2Cpp + GLOBALTICKMANAGERINTERIORMAPPING_INITDELAYREFRESHLIST_OFFSET))(this, delayRefreshList);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOBALTICKMANAGERINTERIORMAPPING_ONUPDATE_OFFSET))(this);
	}
};
