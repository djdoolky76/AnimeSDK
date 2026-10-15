#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOCNNALBNJD.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JAENDDMAHNP;
namespace System { class String; }

#define JAENDDMAHNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF05DD0)
#define JAENDDMAHNP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF05C10)

inline static constexpr unsigned int JAENDDMAHNP_TypeDefinitionIndex = 14399;

	class JAENDDMAHNP : public ::System::Object
	{
	public:
		::System::String* ACJDHMPPCCI; // 0x10
		::System::UInt32 CMNOEFFFNPE; // 0x18
		::EOCNNALBNJD GMPGDEINODK; // 0x1C
		::System::UInt32 PBLDLDIEFNC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAENDDMAHNP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JAENDDMAHNP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JAENDDMAHNP*))((::PBYTE)hIl2Cpp + JAENDDMAHNP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
