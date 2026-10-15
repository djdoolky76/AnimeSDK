#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MDEOCLLALOD;

#define MDEOCLLALOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1444F0)
#define MDEOCLLALOD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D144450)

	class MDEOCLLALOD : public ::System::Object
	{
	public:
		::System::UInt32 OIHFPOJCODL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEOCLLALOD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MDEOCLLALOD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDEOCLLALOD*))((::PBYTE)hIl2Cpp + MDEOCLLALOD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
