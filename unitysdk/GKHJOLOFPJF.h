#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GKHJOLOFPJF;

#define GKHJOLOFPJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5E1A0)
#define GKHJOLOFPJF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE5E020)

	class GKHJOLOFPJF : public ::System::Object
	{
	public:
		::System::UInt32 DOHPJPEMDON; // 0x10
		::System::UInt32 AAGKEBFHLMC; // 0x14
		::System::UInt32 KNIMCDCHFFN; // 0x18
		::System::UInt32 PJNNPOKJEFD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHJOLOFPJF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GKHJOLOFPJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GKHJOLOFPJF*))((::PBYTE)hIl2Cpp + GKHJOLOFPJF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
