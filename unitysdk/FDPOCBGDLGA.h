#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FDPOCBGDLGA;

#define FDPOCBGDLGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDEB80)
#define FDPOCBGDLGA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDDEA60)

	class FDPOCBGDLGA : public ::System::Object
	{
	public:
		::System::UInt32 HCDEOKNIGKG; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPOCBGDLGA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FDPOCBGDLGA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FDPOCBGDLGA*))((::PBYTE)hIl2Cpp + FDPOCBGDLGA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
