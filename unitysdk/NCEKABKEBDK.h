#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class FJFNJCPHFDM;
class KDGBPFBKDMF;
class OBJANKHLNGO;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Object; }

#define NCEKABKEBDK_BLBJDKLNKHI_OFFSET UNITYSDK_OFFSET(0x150F5D60)
#define NCEKABKEBDK_CMIMBEFFIDH_OFFSET UNITYSDK_OFFSET(0x150F5A80)
#define NCEKABKEBDK_CTOR_OFFSET UNITYSDK_OFFSET(0x150F5B80)
#define NCEKABKEBDK_DBLNFMFIIFH_OFFSET UNITYSDK_OFFSET(0x150F5D00)
#define NCEKABKEBDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x150F5DD0)
#define NCEKABKEBDK_EBGMBCHJPCI_OFFSET UNITYSDK_OFFSET(0x150F5AC0)
#define NCEKABKEBDK_ECMAIHPKJAK_OFFSET UNITYSDK_OFFSET(0x150F5E30)
#define NCEKABKEBDK_FDADKEGFHIC_OFFSET UNITYSDK_OFFSET(0x150F5FE0)
#define NCEKABKEBDK_GET_TARGETREVENUE_OFFSET UNITYSDK_OFFSET(0x150F5A60)
#define NCEKABKEBDK_KNKNLJICEOD_OFFSET UNITYSDK_OFFSET(0x150F5F00)
#define NCEKABKEBDK_SET_TARGETREVENUE_OFFSET UNITYSDK_OFFSET(0x150F5A70)
#define NCEKABKEBDK__GET_ENABLECHANGECOMMAND_B__11_0_OFFSET UNITYSDK_OFFSET(0x150F60C0)

inline static constexpr unsigned int NCEKABKEBDK_TypeDefinitionIndex = 82409;

	class NCEKABKEBDK : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::FJFNJCPHFDM* GKPHGLBPCKD; // 0x18
		::R3::ReactiveProperty_1<::System::Int32>* LNBGLLMCIFB; // 0x20
		::CEEGMMCFCBG* DKHDIHANBNC; // 0x28
		::System::Nullable_1<::System::Int32> HCCLIMJJHEK; // 0x30
		::System::Boolean GBNOHAMAKOG; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 _TargetRevenue_k__BackingField; // 0x3C
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

		::R3::Observable_1<::System::Int32>* CMIMBEFFIDH()
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEKABKEBDK_CMIMBEFFIDH_OFFSET))(this);
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
