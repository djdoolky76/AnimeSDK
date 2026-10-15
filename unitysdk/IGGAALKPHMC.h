#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFPFEGNEJDA;
class GCINPDAAELN;
class JPEBEDHMNLA;
class LHJDEOLKHKB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IGGAALKPHMC_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x1640C1B0)
#define IGGAALKPHMC_CLJCADDACJI_OFFSET UNITYSDK_OFFSET(0x1640CFE0)
#define IGGAALKPHMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1640D110)
#define IGGAALKPHMC_EEBKDGENKBI_OFFSET UNITYSDK_OFFSET(0x1640CE80)
#define IGGAALKPHMC_GET_BAGEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x1640D100)
#define IGGAALKPHMC_GET_BATTLEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x1640D0F0)
#define IGGAALKPHMC_GET_SLOTNUM_OFFSET UNITYSDK_OFFSET(0x1640D0D0)
#define IGGAALKPHMC_HGGABIEGFJB_1_OFFSET UNITYSDK_OFFSET(0x1640CD20)
#define IGGAALKPHMC_HGGABIEGFJB_OFFSET UNITYSDK_OFFSET(0x1640CBE0)
#define IGGAALKPHMC_JPALDNCMLOF_OFFSET UNITYSDK_OFFSET(0x1640CB90)
#define IGGAALKPHMC_SET_SLOTNUM_OFFSET UNITYSDK_OFFSET(0x1640D0E0)

inline static constexpr unsigned int IGGAALKPHMC_TypeDefinitionIndex = 79217;

	class IGGAALKPHMC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FFPFEGNEJDA*>* _BattleEquipItems_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FFPFEGNEJDA*>* _BagEquipItems_k__BackingField; // 0x18
		::System::UInt32 _SlotNum_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGAALKPHMC_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::LHJDEOLKHKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHJDEOLKHKB*))((::PBYTE)hIl2Cpp + IGGAALKPHMC_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void JPALDNCMLOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGGAALKPHMC_JPALDNCMLOF_OFFSET))(this, a1);
		}

		::System::Void HGGABIEGFJB(::GCINPDAAELN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCINPDAAELN*))((::PBYTE)hIl2Cpp + IGGAALKPHMC_HGGABIEGFJB_OFFSET))(this, a1);
		}

		::System::Void HGGABIEGFJB_1(::JPEBEDHMNLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPEBEDHMNLA*))((::PBYTE)hIl2Cpp + IGGAALKPHMC_HGGABIEGFJB_1_OFFSET))(this, a1);
		}

		::System::Void CLJCADDACJI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGGAALKPHMC_CLJCADDACJI_OFFSET))(this, a1);
		}

		::FFPFEGNEJDA* EEBKDGENKBI(::System::UInt32 a1)
		{
			return ((::FFPFEGNEJDA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGGAALKPHMC_EEBKDGENKBI_OFFSET))(this, a1);
		}

		::System::UInt32 get_SlotNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGAALKPHMC_GET_SLOTNUM_OFFSET))(this);
		}

		::System::Void set_SlotNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGGAALKPHMC_SET_SLOTNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FFPFEGNEJDA*>* get_BattleEquipItems()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FFPFEGNEJDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGAALKPHMC_GET_BATTLEEQUIPITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FFPFEGNEJDA*>* get_BagEquipItems()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FFPFEGNEJDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGAALKPHMC_GET_BAGEQUIPITEMS_OFFSET))(this);
		}

	};
