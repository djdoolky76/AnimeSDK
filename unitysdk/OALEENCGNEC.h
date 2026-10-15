#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OALEENCGNEC;

#define OALEENCGNEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D24C850)
#define OALEENCGNEC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D24C6D0)

	class OALEENCGNEC : public ::System::Object
	{
	public:
		::RPG::Client::TextID FNBIFDIHIJH; // 0x10
		::System::UInt32 LOEPLBPFMEN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OALEENCGNEC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OALEENCGNEC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OALEENCGNEC*))((::PBYTE)hIl2Cpp + OALEENCGNEC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
