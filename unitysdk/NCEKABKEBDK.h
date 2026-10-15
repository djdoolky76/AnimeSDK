#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class FJFNJCPHFDM;
class KDGBPFBKDMF;
class OBJANKHLNGO;
namespace R3 { class Observable; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Nullable; }
namespace System { class Object; }

#define NCEKABKEBDK_BLBJDKLNKHI_OFFSET UNITYSDK_OFFSET(0xBB0ABA0)
#define NCEKABKEBDK_CMIMBEFFIDH_OFFSET UNITYSDK_OFFSET(0xBB0A8C0)
#define NCEKABKEBDK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0A9C0)
#define NCEKABKEBDK_DBLNFMFIIFH_OFFSET UNITYSDK_OFFSET(0xBB0AB40)
#define NCEKABKEBDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB0AC10)
#define NCEKABKEBDK_EBGMBCHJPCI_OFFSET UNITYSDK_OFFSET(0xBB0A900)
#define NCEKABKEBDK_ECMAIHPKJAK_OFFSET UNITYSDK_OFFSET(0xBB0AC70)
#define NCEKABKEBDK_FDADKEGFHIC_OFFSET UNITYSDK_OFFSET(0xBB0AE20)
#define NCEKABKEBDK_GET_TARGETREVENUE_OFFSET UNITYSDK_OFFSET(0xBB0A8A0)
#define NCEKABKEBDK_KNKNLJICEOD_OFFSET UNITYSDK_OFFSET(0xBB0AD40)
#define NCEKABKEBDK_SET_TARGETREVENUE_OFFSET UNITYSDK_OFFSET(0xBB0A8B0)
#define NCEKABKEBDK__GET_ENABLECHANGECOMMAND_B__11_0_OFFSET UNITYSDK_OFFSET(0xBB0AF00)

	class NCEKABKEBDK : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::CEEGMMCFCBG* DKHDIHANBNC; // 0x18
		::FJFNJCPHFDM* GKPHGLBPCKD; // 0x20
		::R3::ReactiveProperty_1<::System::Int32>* LNBGLLMCIFB; // 0x28
		::System::Nullable* HCCLIMJJHEK; // 0x30
		::System::Int32 _TargetRevenue_k__BackingField; // 0x38
		::System::Boolean GBNOHAMAKOG; // 0x3C
		::System::Void _ctor(::OBJANKHLNGO* a1, ::FJFNJCPHFDM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*, ::FJFNJCPHFDM*))((::PBYTE)hIl2Cpp + NCEKABKEBDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_TargetRevenue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEKABKEBDK_GET_TARGETREVENUE_OFFSET))(this);
		}

		::System::Void set_TargetRevenue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NCEKABKEBDK_SET_TARGETREVENUE_OFFSET))(this, a1);
		}

		::R3::Observable* CMIMBEFFIDH()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEKABKEBDK_CMIMBEFFIDH_OFFSET))(this);
		}

		::CEEGMMCFCBG* EBGMBCHJPCI()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEKABKEBDK_EBGMBCHJPCI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEKABKEBDK_DISPOSE_OFFSET))(this);
		}

		::System::Void ECMAIHPKJAK(::System::Object* a1, ::KDGBPFBKDMF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::KDGBPFBKDMF*))((::PBYTE)hIl2Cpp + NCEKABKEBDK_ECMAIHPKJAK_OFFSET))(this, a1, a2);
		}

		::System::Void KNKNLJICEOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCEKABKEBDK_KNKNLJICEOD_OFFSET))(this, a1);
		}

		::System::Void BLBJDKLNKHI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NCEKABKEBDK_BLBJDKLNKHI_OFFSET))(this, a1);
		}

		::System::Void FDADKEGFHIC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NCEKABKEBDK_FDADKEGFHIC_OFFSET))(this, a1);
		}

		::System::Int32 DBLNFMFIIFH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEKABKEBDK_DBLNFMFIIFH_OFFSET))(this);
		}

		::System::Void _get_EnableChangeCommand_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEKABKEBDK__GET_ENABLECHANGECOMMAND_B__11_0_OFFSET))(this);
		}

	};
