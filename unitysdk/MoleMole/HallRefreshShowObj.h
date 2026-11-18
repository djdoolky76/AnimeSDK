#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class JGPGPIFEMCI;
class KCIIJAFOOBL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HALLREFRESHSHOWOBJ_CHANGESECTION_OFFSET UNITYSDK_OFFSET(0x162591A0)
#define MOLEMOLE_HALLREFRESHSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x16258ED0)
#define MOLEMOLE_HALLREFRESHSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x16259200)
#define MOLEMOLE_HALLREFRESHSHOWOBJ_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x16259140)
#define MOLEMOLE_HALLREFRESHSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16258EE0)
#define MOLEMOLE_HALLREFRESHSHOWOBJ__ONPROCESS_G__CHECKINCAMERA_7_3_OFFSET UNITYSDK_OFFSET(0x1625A170)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x1625A4E0)

namespace MoleMole
{
	inline static constexpr unsigned int HallRefreshShowObj_TypeDefinitionIndex = 65508;

	class HallRefreshShowObj : public ::MoleMole::LogicMessageBase
	{
	public:
		::KCIIJAFOOBL* ntf; // 0x20
		::System::UInt32 sectionUID; // 0x28

		::System::Void _ctor(::KCIIJAFOOBL* ntf, ::FAKODLEPJOA page)
		{
			return ((::System::Void(*)(::PVOID, ::KCIIJAFOOBL*, ::FAKODLEPJOA))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ__CTOR_OFFSET))(this, ntf, page);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void ChangeSection(::KCIIJAFOOBL* ntf, ::System::UInt32 sectionUID)
		{
			return ((::System::Void(*)(::PVOID, ::KCIIJAFOOBL*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ_CHANGESECTION_OFFSET))(this, ntf, sectionUID);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ_ONPROCESS_OFFSET))(this);
		}

		static ::System::Boolean _OnProcess_g__CheckInCamera_7_3(::System::Collections::Generic::List_1<::JGPGPIFEMCI*>* tagList)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::JGPGPIFEMCI*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ__ONPROCESS_G__CHECKINCAMERA_7_3_OFFSET))(tagList);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
