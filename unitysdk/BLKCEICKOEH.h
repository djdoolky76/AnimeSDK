#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECJHIMIBDCO.h"
#include "unitysdk/LBJHIFOBLOE.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"

class BMPLCFFMPAE;
class CAONGKLFNGN;
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLKCEICKOEH_BFNKPAAEGNM_OFFSET UNITYSDK_OFFSET(0x10E0C5F0)
#define BLKCEICKOEH_DKCEGMHIDOH_OFFSET UNITYSDK_OFFSET(0x10E0C9D0)
#define BLKCEICKOEH_GCOFMDPCGBO_OFFSET UNITYSDK_OFFSET(0x10E0D830)
#define BLKCEICKOEH_HHFLKMANGLF_OFFSET UNITYSDK_OFFSET(0x10E0CB50)
#define BLKCEICKOEH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x10E0DAF0)
#define BLKCEICKOEH_KDCKMCHLDAJ_OFFSET UNITYSDK_OFFSET(0x10E0C5E0)
#define BLKCEICKOEH_KNIPICMJMPE_OFFSET UNITYSDK_OFFSET(0x10E0D450)
#define BLKCEICKOEH_NILNEKGGCGE_OFFSET UNITYSDK_OFFSET(0x10E0DA60)
#define BLKCEICKOEH_PCGPGCGJBEH_OFFSET UNITYSDK_OFFSET(0x10E0D7A0)
#define BLKCEICKOEH__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0D700)

inline static constexpr unsigned int BLKCEICKOEH_TypeDefinitionIndex = 93033;

class BLKCEICKOEH : public ::LBJHIFOBLOE
{
public:
	::Il2CppArray<::ECJHIMIBDCO>* _MIDJHLALHIF_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* FLDIGKPBGAP; // 0x18
	::BMPLCFFMPAE* EAHMMPOJNLP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKCEICKOEH__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::ECJHIMIBDCO>* KDCKMCHLDAJ()
	{
		return ((::Il2CppArray<::ECJHIMIBDCO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKCEICKOEH_KDCKMCHLDAJ_OFFSET))(this);
	}

	::System::Void BFNKPAAEGNM(::Il2CppArray<::CAONGKLFNGN*>* GPIBNMBEDHC)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CAONGKLFNGN*>*))((::PBYTE)hIl2Cpp + BLKCEICKOEH_BFNKPAAEGNM_OFFSET))(this, GPIBNMBEDHC);
	}

	::System::Void KNIPICMJMPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKCEICKOEH_KNIPICMJMPE_OFFSET))(this);
	}

	::System::Void HHFLKMANGLF(::System::Collections::Generic::List_1<::System::Int32>* IBCDKBNMMBK, ::Foundation::Unreal::FGameplayTagContainer GMKMJBONMDC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + BLKCEICKOEH_HHFLKMANGLF_OFFSET))(this, IBCDKBNMMBK, GMKMJBONMDC);
	}

	::System::Void PCGPGCGJBEH(::Il2CppArray<::CAONGKLFNGN*>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CAONGKLFNGN*>*))((::PBYTE)hIl2Cpp + BLKCEICKOEH_PCGPGCGJBEH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GCOFMDPCGBO(::System::EventArgs* OJPFHPALLHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BLKCEICKOEH_GCOFMDPCGBO_OFFSET))(this, OJPFHPALLHG);
	}

	::System::Void DKCEGMHIDOH(::System::Collections::Generic::List_1<::System::Int32>* CACPPDAODAN, ::Foundation::Unreal::FGameplayTagContainer& GMKMJBONMDC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + BLKCEICKOEH_DKCEGMHIDOH_OFFSET))(this, CACPPDAODAN, GMKMJBONMDC);
	}

	::System::Void NILNEKGGCGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKCEICKOEH_NILNEKGGCGE_OFFSET))(this);
	}

	static ::BLKCEICKOEH* JFDOOELFAOA()
	{
		return ((::BLKCEICKOEH*(*)())((::PBYTE)hIl2Cpp + BLKCEICKOEH_JFDOOELFAOA_OFFSET))();
	}
};
