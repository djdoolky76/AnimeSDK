#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKAJMEMCBLC;
class IBLLIBEANPO;
class KKHBPFEMLKM;
class NMLOHFBGMAI;
class OBJANKHLNGO;

#define AALFFOGEHMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB0CE520)
#define AALFFOGEHMJ_HGEELINLLLL_OFFSET UNITYSDK_OFFSET(0xB0CE6C0)
#define AALFFOGEHMJ_START_OFFSET UNITYSDK_OFFSET(0xB0CE5D0)
#define AALFFOGEHMJ_STOP_OFFSET UNITYSDK_OFFSET(0xB0CE660)
#define AALFFOGEHMJ___ONCARDUNLOCKSYNC_B__3_0_OFFSET UNITYSDK_OFFSET(0xB0CEAF0)
#define AALFFOGEHMJ___ONCARDUNLOCKSYNC_B__3_1_OFFSET UNITYSDK_OFFSET(0xB0CEB40)

inline static constexpr unsigned int AALFFOGEHMJ_TypeDefinitionIndex = 81077;

	class AALFFOGEHMJ : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::IBLLIBEANPO* FKMPGPCHLNL; // 0x18
		::KKHBPFEMLKM* HNLOJEIEFKC; // 0x20
		::System::Void _ctor(::KKHBPFEMLKM* a1, ::IBLLIBEANPO* a2, ::OBJANKHLNGO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KKHBPFEMLKM*, ::IBLLIBEANPO*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + AALFFOGEHMJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALFFOGEHMJ_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALFFOGEHMJ_STOP_OFFSET))(this);
		}

		::System::Void HGEELINLLLL(::NMLOHFBGMAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMLOHFBGMAI*))((::PBYTE)hIl2Cpp + AALFFOGEHMJ_HGEELINLLLL_OFFSET))(this, a1);
		}

		::System::Boolean __OnCardUnlockSync_b__3_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AALFFOGEHMJ___ONCARDUNLOCKSYNC_B__3_0_OFFSET))(this, a1);
		}

		::HKAJMEMCBLC* __OnCardUnlockSync_b__3_1(::System::UInt32 a1)
		{
			return ((::HKAJMEMCBLC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AALFFOGEHMJ___ONCARDUNLOCKSYNC_B__3_1_OFFSET))(this, a1);
		}

	};
