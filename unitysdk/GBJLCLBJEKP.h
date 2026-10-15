#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
#include "unitysdk/GBJLCLBJEKP___c__DisplayClass2_0.h"
class BKLKJCJFHKO;
class PNOIMIPEOFA;

#define GBJLCLBJEKP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15946940)
#define GBJLCLBJEKP_CTOR_OFFSET UNITYSDK_OFFSET(0x15946930)
#define GBJLCLBJEKP__CREATE_G__ADDENPCF07ID_2_1_OFFSET UNITYSDK_OFFSET(0x15946B70)
#define GBJLCLBJEKP__CREATE_G__ISTARGET_2_0_OFFSET UNITYSDK_OFFSET(0x15946B60)

inline static constexpr unsigned int GBJLCLBJEKP_TypeDefinitionIndex = 62627;

	class GBJLCLBJEKP : public ::System::Object
	{
	public:
		::BKLKJCJFHKO* NMOPFNGFPPB; // 0x10
		::System::Void _ctor(::BKLKJCJFHKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKLKJCJFHKO*))((::PBYTE)hIl2Cpp + GBJLCLBJEKP_CTOR_OFFSET))(this, a1);
		}

		::PNOIMIPEOFA* BPLPBPMEODA(::AHHNGJGLOKA a1)
		{
			return ((::PNOIMIPEOFA*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + GBJLCLBJEKP_BPLPBPMEODA_OFFSET))(this, a1);
		}

		static ::System::Boolean _Create_g__IsTarget_2_0(::System::UInt32 a1, ::GBJLCLBJEKP___c__DisplayClass2_0 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::GBJLCLBJEKP___c__DisplayClass2_0))((::PBYTE)hIl2Cpp + GBJLCLBJEKP__CREATE_G__ISTARGET_2_0_OFFSET))(a1, a2);
		}

		static ::System::Void _Create_g__AddENpcF07ID_2_1(::System::UInt32 a1, ::GBJLCLBJEKP___c__DisplayClass2_0 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::GBJLCLBJEKP___c__DisplayClass2_0))((::PBYTE)hIl2Cpp + GBJLCLBJEKP__CREATE_G__ADDENPCF07ID_2_1_OFFSET))(a1, a2);
		}

	};
