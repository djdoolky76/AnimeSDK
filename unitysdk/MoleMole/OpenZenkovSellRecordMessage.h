#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_OPENZENKOVSELLRECORDMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x146A58C0)
#define MOLEMOLE_OPENZENKOVSELLRECORDMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x146A5910)
#define MOLEMOLE_OPENZENKOVSELLRECORDMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x146A58D0)

namespace MoleMole
{
	inline static constexpr unsigned int OpenZenkovSellRecordMessage_TypeDefinitionIndex = 80129;

	class OpenZenkovSellRecordMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENZENKOVSELLRECORDMESSAGE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENZENKOVSELLRECORDMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENZENKOVSELLRECORDMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
