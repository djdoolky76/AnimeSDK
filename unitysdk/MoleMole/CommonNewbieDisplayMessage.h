#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_COMMONNEWBIEDISPLAYMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x174EA070)
#define MOLEMOLE_COMMONNEWBIEDISPLAYMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x174EA080)
#define MOLEMOLE_COMMONNEWBIEDISPLAYMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x174EA020)

namespace MoleMole
{
	inline static constexpr unsigned int CommonNewbieDisplayMessage_TypeDefinitionIndex = 89780;

	class CommonNewbieDisplayMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Func_1<::System::Boolean>* m_processCondition; // 0x28
		::System::Int32 m_id; // 0x30

		::System::Void _ctor(::System::Int32 mID, ::FAKODLEPJOA page, ::System::Func_1<::System::Boolean>* processCondition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FAKODLEPJOA, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONNEWBIEDISPLAYMESSAGE__CTOR_OFFSET))(this, mID, page, processCondition);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONNEWBIEDISPLAYMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONNEWBIEDISPLAYMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
