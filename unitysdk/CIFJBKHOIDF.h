#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIFJBKHOIDF;
class FCOEMCEDLNL;

#define CIFJBKHOIDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC152B0)
#define CIFJBKHOIDF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC15190)

	class CIFJBKHOIDF : public ::System::Object
	{
	public:
		::System::UInt32 GAFENHHEBPG; // 0x10
		::System::UInt32 MLDLOJJBIJD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFJBKHOIDF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CIFJBKHOIDF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CIFJBKHOIDF*))((::PBYTE)hIl2Cpp + CIFJBKHOIDF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
