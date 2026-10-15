#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GGONADMNDLP;

#define GGONADMNDLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE43B90)
#define GGONADMNDLP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE43A50)

	class GGONADMNDLP : public ::System::Object
	{
	public:
		::System::UInt32 EFGMPBPHGPA; // 0x10
		::System::UInt32 DICDMGODBCF; // 0x14
		::System::UInt32 FFAIBNDHOBI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGONADMNDLP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GGONADMNDLP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GGONADMNDLP*))((::PBYTE)hIl2Cpp + GGONADMNDLP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
