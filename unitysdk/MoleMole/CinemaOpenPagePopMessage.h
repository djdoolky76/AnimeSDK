#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class JBEKOJKMNJN;

#define MOLEMOLE_CINEMAOPENPAGEPOPMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x192789A0)
#define MOLEMOLE_CINEMAOPENPAGEPOPMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x192789C0)
#define MOLEMOLE_CINEMAOPENPAGEPOPMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x192789B0)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaOpenPagePopMessage_TypeDefinitionIndex = 59283;

	class CinemaOpenPagePopMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::JBEKOJKMNJN* processHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMAOPENPAGEPOPMESSAGE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMAOPENPAGEPOPMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMAOPENPAGEPOPMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
