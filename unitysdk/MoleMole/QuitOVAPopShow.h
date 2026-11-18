#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFJOFGDJLOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_QUITOVAPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x18953370)
#define MOLEMOLE_QUITOVAPOPSHOW_GET_PROCESSED_OFFSET UNITYSDK_OFFSET(0x18953360)
#define MOLEMOLE_QUITOVAPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x189533D0)
#define MOLEMOLE_QUITOVAPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18953380)

namespace MoleMole
{
	inline static constexpr unsigned int QuitOVAPopShow_TypeDefinitionIndex = 93232;

	class QuitOVAPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _ovaContextID; // 0x28
		::System::Boolean _processed; // 0x2C
		::System::Byte _padding0[0x3];
		::EFJOFGDJLOA jumpSrc; // 0x30

		::System::Void _ctor(::System::Int32 ovaContextID, ::EFJOFGDJLOA jumpSrc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::EFJOFGDJLOA))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITOVAPOPSHOW__CTOR_OFFSET))(this, ovaContextID, jumpSrc);
		}

		::System::Boolean get_Processed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITOVAPOPSHOW_GET_PROCESSED_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITOVAPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUITOVAPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
