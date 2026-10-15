#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFJBJEENEBN;
class FCOEMCEDLNL;

#define DFJBJEENEBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1A9C0)
#define DFJBJEENEBN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD1A810)

inline static constexpr unsigned int DFJBJEENEBN_TypeDefinitionIndex = 12892;

	class DFJBJEENEBN : public ::System::Object
	{
	public:
		::System::UInt32 LDGGEPJEKND; // 0x10
		::System::UInt32 CMNOEFFFNPE; // 0x14
		::System::UInt32 IODLAAIECIG; // 0x18
		::System::UInt32 FCOKEIGNAIN; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJBJEENEBN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DFJBJEENEBN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DFJBJEENEBN*))((::PBYTE)hIl2Cpp + DFJBJEENEBN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
