#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KDPAOPIMCBB;

#define KDPAOPIMCBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D086AF0)
#define KDPAOPIMCBB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D086980)

	class KDPAOPIMCBB : public ::System::Object
	{
	public:
		::System::UInt32 JJFIGIJBIJI; // 0x10
		::System::UInt32 EOMEBIPHCGA; // 0x14
		::System::UInt32 CMNOEFFFNPE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPAOPIMCBB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KDPAOPIMCBB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KDPAOPIMCBB*))((::PBYTE)hIl2Cpp + KDPAOPIMCBB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
