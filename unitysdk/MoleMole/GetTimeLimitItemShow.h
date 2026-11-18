#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class LOKMCMCCIIH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GETTIMELIMITITEMSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x162CF480)
#define MOLEMOLE_GETTIMELIMITITEMSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x162CF630)
#define MOLEMOLE_GETTIMELIMITITEMSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x162CF490)
#define MOLEMOLE_GETTIMELIMITITEMSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x162CF4E0)
#define MOLEMOLE_GETTIMELIMITITEMSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x162CF7C0)

namespace MoleMole
{
	inline static constexpr unsigned int GetTimeLimitItemShow_TypeDefinitionIndex = 88604;

	class GetTimeLimitItemShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::LOKMCMCCIIH*>* ItemList; // 0x28

		::System::Void _ctor(::System::Collections::Generic::List_1<::LOKMCMCCIIH*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LOKMCMCCIIH*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETTIMELIMITITEMSHOW__CTOR_OFFSET))(this, itemList);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETTIMELIMITITEMSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETTIMELIMITITEMSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETTIMELIMITITEMSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETTIMELIMITITEMSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
