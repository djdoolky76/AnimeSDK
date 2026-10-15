#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KAPJPNPIEBP;
namespace System { class String; }

#define KAPJPNPIEBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D05F5D0)
#define KAPJPNPIEBP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D05F460)

	class KAPJPNPIEBP : public ::System::Object
	{
	public:
		::System::String* BHGKDNAPGOC; // 0x10
		::System::UInt32 ALNDEGPBMLI; // 0x18
		::System::UInt32 NMMKHFIFPEJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPJPNPIEBP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KAPJPNPIEBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KAPJPNPIEBP*))((::PBYTE)hIl2Cpp + KAPJPNPIEBP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
