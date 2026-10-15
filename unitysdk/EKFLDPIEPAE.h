#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace System { class String; }

#define EKFLDPIEPAE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA269C0)
#define EKFLDPIEPAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA26E00)
#define EKFLDPIEPAE_DOLJEJCILLE_OFFSET UNITYSDK_OFFSET(0x1CA26D10)
#define EKFLDPIEPAE_EOLDOEPJOHC_OFFSET UNITYSDK_OFFSET(0x1CA26AE0)
#define EKFLDPIEPAE_LCHCDPMBCAN_OFFSET UNITYSDK_OFFSET(0x1CA26C60)
#define EKFLDPIEPAE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA26900)
#define EKFLDPIEPAE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA26980)

inline static constexpr unsigned int EKFLDPIEPAE_TypeDefinitionIndex = 43309;

	class EKFLDPIEPAE : public ::System::Object
	{
	public:
		::RPG::PoolHashSet_1<::System::String*>* KBJJMGMOFDL; // 0x10
		::RPG::PoolDictionary_2<::System::String*, ::System::UInt32>* BPGGBFKMEGC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFLDPIEPAE_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFLDPIEPAE_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFLDPIEPAE_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFLDPIEPAE_CLEAR_OFFSET))(this);
		}

		::System::Void EOLDOEPJOHC(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + EKFLDPIEPAE_EOLDOEPJOHC_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 LCHCDPMBCAN(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EKFLDPIEPAE_LCHCDPMBCAN_OFFSET))(this, a1);
		}

		::System::Boolean DOLJEJCILLE(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EKFLDPIEPAE_DOLJEJCILLE_OFFSET))(this, a1);
		}

	};
