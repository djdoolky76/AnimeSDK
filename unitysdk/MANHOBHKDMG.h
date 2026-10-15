#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFPCEFGHPIN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class CAKNHIMMBOM;
class KPCPIMINKPL;
namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MANHOBHKDMG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C923610)
#define MANHOBHKDMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C924930)
#define MANHOBHKDMG_EDLAAGIFIEA_OFFSET UNITYSDK_OFFSET(0x1C924240)
#define MANHOBHKDMG_FMNOPFCHBAF_OFFSET UNITYSDK_OFFSET(0x1C9246B0)
#define MANHOBHKDMG_IBJEFGEPIJO_OFFSET UNITYSDK_OFFSET(0x1C923720)
#define MANHOBHKDMG_IIGCBFIALAP_OFFSET UNITYSDK_OFFSET(0x1C923EE0)
#define MANHOBHKDMG_JPJJIADOPAB_OFFSET UNITYSDK_OFFSET(0x1C923770)
#define MANHOBHKDMG_KLNHCGEBKGF_OFFSET UNITYSDK_OFFSET(0x1C924330)
#define MANHOBHKDMG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C923430)

inline static constexpr unsigned int MANHOBHKDMG_TypeDefinitionIndex = 43025;

	class MANHOBHKDMG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::CAKNHIMMBOM*>* HIJPJBGAADF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::MFPCEFGHPIN>* CEKBMEGIPJP; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* KLEIMNLINEE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANHOBHKDMG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::CAKNHIMMBOM*>* a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::CAKNHIMMBOM*>*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + MANHOBHKDMG_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANHOBHKDMG_CLEAR_OFFSET))(this);
		}

		::System::Void IBJEFGEPIJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANHOBHKDMG_IBJEFGEPIJO_OFFSET))(this);
		}

		::RPG::PoolList_1<::MFPCEFGHPIN>* IIGCBFIALAP()
		{
			return ((::RPG::PoolList_1<::MFPCEFGHPIN>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANHOBHKDMG_IIGCBFIALAP_OFFSET))(this);
		}

		::System::Void JPJJIADOPAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANHOBHKDMG_JPJJIADOPAB_OFFSET))(this);
		}

		::System::Boolean KLNHCGEBKGF(::KPCPIMINKPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPCPIMINKPL*))((::PBYTE)hIl2Cpp + MANHOBHKDMG_KLNHCGEBKGF_OFFSET))(this, a1);
		}

		::System::Boolean EDLAAGIFIEA(::CAKNHIMMBOM* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAKNHIMMBOM*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + MANHOBHKDMG_EDLAAGIFIEA_OFFSET))(this, a1, a2);
		}

		::System::Void FMNOPFCHBAF(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::CAKNHIMMBOM*>* a1, ::CAKNHIMMBOM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::CAKNHIMMBOM*>*, ::CAKNHIMMBOM*))((::PBYTE)hIl2Cpp + MANHOBHKDMG_FMNOPFCHBAF_OFFSET))(this, a1, a2);
		}

	};
