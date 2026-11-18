#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityBaseRecord.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ACTIVITYDEMOTRIALRECORD_GET_RECORDVERSION_OFFSET UNITYSDK_OFFSET(0x11E52AA0)
#define MOLEMOLE_ACTIVITYDEMOTRIALRECORD_KNNFHOCIACL_OFFSET UNITYSDK_OFFSET(0x11E52C30)
#define MOLEMOLE_ACTIVITYDEMOTRIALRECORD_MEMOGIBMLMG_OFFSET UNITYSDK_OFFSET(0x11E52AC0)
#define MOLEMOLE_ACTIVITYDEMOTRIALRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x11E52AB0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityDemoTrialRecord_TypeDefinitionIndex = 57201;

	class ActivityDemoTrialRecord : public ::MoleMole::ActivityBaseRecord
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* trialList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALRECORD__CTOR_OFFSET))(this);
		}

		::System::UInt16 get_RecordVersion()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALRECORD_GET_RECORDVERSION_OFFSET))(this);
		}

		::System::Void MEMOGIBMLMG(::System::Int32 EKPCDDMDLMO, ::System::Boolean EKACDKOPPOB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALRECORD_MEMOGIBMLMG_OFFSET))(this, EKPCDDMDLMO, EKACDKOPPOB);
		}

		::System::Boolean KNNFHOCIACL(::System::Int32 EKPCDDMDLMO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALRECORD_KNNFHOCIACL_OFFSET))(this, EKPCDDMDLMO);
		}
	};
}
