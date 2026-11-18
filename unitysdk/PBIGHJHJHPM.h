#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECJHIMIBDCO.h"
#include "unitysdk/LBJHIFOBLOE.h"
#include "unitysdk/MLMOPHGIMAP.h"

class CAONGKLFNGN;
class FAKLNMJEGOJ;
class FCEFNCCAONE;
class LBAFEBOKJCC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBIGHJHJHPM_BFNKPAAEGNM_OFFSET UNITYSDK_OFFSET(0x15F9E9B0)
#define PBIGHJHJHPM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15F9FE30)
#define PBIGHJHJHPM_KDCKMCHLDAJ_OFFSET UNITYSDK_OFFSET(0x15F9E9A0)
#define PBIGHJHJHPM_KNIPICMJMPE_OFFSET UNITYSDK_OFFSET(0x15F9EB80)
#define PBIGHJHJHPM_KPAJNDCLFKC_OFFSET UNITYSDK_OFFSET(0x15F9EF20)
#define PBIGHJHJHPM_MIDMKINOEOH_OFFSET UNITYSDK_OFFSET(0x15F9EB20)
#define PBIGHJHJHPM_NILNEKGGCGE_OFFSET UNITYSDK_OFFSET(0x15F9FF40)
#define PBIGHJHJHPM_NIOJGNNBKCC_OFFSET UNITYSDK_OFFSET(0x15F9F6D0)
#define PBIGHJHJHPM_PCGPGCGJBEH_OFFSET UNITYSDK_OFFSET(0x15F9FEB0)
#define PBIGHJHJHPM__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9E650)

inline static constexpr unsigned int PBIGHJHJHPM_TypeDefinitionIndex = 40353;

class PBIGHJHJHPM : public ::LBJHIFOBLOE
{
public:
	::System::Collections::Generic::Dictionary_2<::MLMOPHGIMAP, ::FCEFNCCAONE*>* JKIBCFIHFOE; // 0x10
	::System::Collections::Generic::List_1<::FAKLNMJEGOJ*>* NCEMEJLBGHD; // 0x18
	::System::Collections::Generic::Dictionary_2<::FAKLNMJEGOJ*, ::MLMOPHGIMAP>* CIEFMDHFKID; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* BLDJFEBGPFC; // 0x28
	::System::Collections::Generic::HashSet_1<::FAKLNMJEGOJ*>* AOKJOAKPIFJ; // 0x30
	::LBAFEBOKJCC* FHDIMALKGCL; // 0x38
	::Il2CppArray<::ECJHIMIBDCO>* _MIDJHLALHIF_k__BackingField; // 0x40
	::System::Collections::Generic::HashSet_1<::System::Int32>* LGMDFGLCNMG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGHJHJHPM__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::ECJHIMIBDCO>* KDCKMCHLDAJ()
	{
		return ((::Il2CppArray<::ECJHIMIBDCO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGHJHJHPM_KDCKMCHLDAJ_OFFSET))(this);
	}

	::System::Void BFNKPAAEGNM(::Il2CppArray<::CAONGKLFNGN*>* GPIBNMBEDHC)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CAONGKLFNGN*>*))((::PBYTE)hIl2Cpp + PBIGHJHJHPM_BFNKPAAEGNM_OFFSET))(this, GPIBNMBEDHC);
	}

	::System::Void KNIPICMJMPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGHJHJHPM_KNIPICMJMPE_OFFSET))(this);
	}

	::System::Void MIDMKINOEOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGHJHJHPM_MIDMKINOEOH_OFFSET))(this);
	}

	static ::PBIGHJHJHPM* JFDOOELFAOA()
	{
		return ((::PBIGHJHJHPM*(*)())((::PBYTE)hIl2Cpp + PBIGHJHJHPM_JFDOOELFAOA_OFFSET))();
	}

	::System::Void PCGPGCGJBEH(::Il2CppArray<::CAONGKLFNGN*>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CAONGKLFNGN*>*))((::PBYTE)hIl2Cpp + PBIGHJHJHPM_PCGPGCGJBEH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NILNEKGGCGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGHJHJHPM_NILNEKGGCGE_OFFSET))(this);
	}

	::System::Void KPAJNDCLFKC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGHJHJHPM_KPAJNDCLFKC_OFFSET))(this);
	}

	::System::Void NIOJGNNBKCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIGHJHJHPM_NIOJGNNBKCC_OFFSET))(this);
	}
};
