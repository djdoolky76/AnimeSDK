#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PCMJCECKDAF;

#define PCMJCECKDAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D29E8D0)
#define PCMJCECKDAF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D29E7B0)

inline static constexpr unsigned int PCMJCECKDAF_TypeDefinitionIndex = 14136;

	class PCMJCECKDAF : public ::System::Object
	{
	public:
		::System::UInt32 LLDCHLHNADA; // 0x10
		::System::UInt32 FDOELDMEBPE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMJCECKDAF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PCMJCECKDAF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PCMJCECKDAF*))((::PBYTE)hIl2Cpp + PCMJCECKDAF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
