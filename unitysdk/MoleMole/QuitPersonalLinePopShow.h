#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFJOFGDJLOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_QUITPERSONALLINEPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1044C550)
#define MOLEMOLE_QUITPERSONALLINEPOPSHOW_GET_PROCESSED_OFFSET UNITYSDK_OFFSET(0x1044C540)
#define MOLEMOLE_QUITPERSONALLINEPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1044C5B0)
#define MOLEMOLE_QUITPERSONALLINEPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1044C560)

namespace MoleMole
{
	inline static constexpr unsigned int QuitPersonalLinePopShow_TypeDefinitionIndex = 48936;

	class QuitPersonalLinePopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::EFJOFGDJLOA jumpSrc; // 0x28
		::System::Boolean _isAfk; // 0x2C
		::System::Boolean _processed; // 0x2D
		::System::Byte _padding0[0x2];
		::System::Int32 _ovaContextID; // 0x30

		::System::Void _ctor(::System::Boolean isAfk, ::System::Int32 ovaContextID, ::EFJOFGDJLOA jumpSrc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::EFJOFGDJLOA))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITPERSONALLINEPOPSHOW__CTOR_OFFSET))(this, isAfk, ovaContextID, jumpSrc);
		}

		::System::Boolean get_Processed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITPERSONALLINEPOPSHOW_GET_PROCESSED_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITPERSONALLINEPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITPERSONALLINEPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
