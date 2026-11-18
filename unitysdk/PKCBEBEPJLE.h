#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECJHIMIBDCO.h"
#include "unitysdk/FDNCOAGCCKH.h"
#include "unitysdk/FJHEGIPNKHB.h"
#include "unitysdk/LBJHIFOBLOE.h"

class CAONGKLFNGN;
class DMHOLJNNCJA;
class LBAFEBOKJCC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKCBEBEPJLE_BFNKPAAEGNM_OFFSET UNITYSDK_OFFSET(0x1C2B36A0)
#define PKCBEBEPJLE_BJKGFCEFMEC_OFFSET UNITYSDK_OFFSET(0x1C2B37B0)
#define PKCBEBEPJLE_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1C2B46F0)
#define PKCBEBEPJLE_KDCKMCHLDAJ_OFFSET UNITYSDK_OFFSET(0x1C2B3690)
#define PKCBEBEPJLE_KNIPICMJMPE_OFFSET UNITYSDK_OFFSET(0x1C2B3CE0)
#define PKCBEBEPJLE_NILNEKGGCGE_OFFSET UNITYSDK_OFFSET(0x1C2B45D0)
#define PKCBEBEPJLE_NNLHPCEJECN_OFFSET UNITYSDK_OFFSET(0x1C2B3FD0)
#define PKCBEBEPJLE_PCGPGCGJBEH_OFFSET UNITYSDK_OFFSET(0x1C2B4660)
#define PKCBEBEPJLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B3EB0)

inline static constexpr unsigned int PKCBEBEPJLE_TypeDefinitionIndex = 66286;

class PKCBEBEPJLE : public ::LBJHIFOBLOE
{
public:
	::Il2CppArray<::ECJHIMIBDCO>* _MIDJHLALHIF_k__BackingField; // 0x10
	::LBAFEBOKJCC* FHDIMALKGCL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>*>* LOGJHEIDEHD; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FDNCOAGCCKH>*>* DJHMBBDJCFJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCBEBEPJLE__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::ECJHIMIBDCO>* KDCKMCHLDAJ()
	{
		return ((::Il2CppArray<::ECJHIMIBDCO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCBEBEPJLE_KDCKMCHLDAJ_OFFSET))(this);
	}

	::System::Void BFNKPAAEGNM(::Il2CppArray<::CAONGKLFNGN*>* GPIBNMBEDHC)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CAONGKLFNGN*>*))((::PBYTE)hIl2Cpp + PKCBEBEPJLE_BFNKPAAEGNM_OFFSET))(this, GPIBNMBEDHC);
	}

	::System::Void KNIPICMJMPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCBEBEPJLE_KNIPICMJMPE_OFFSET))(this);
	}

	::System::Void BJKGFCEFMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCBEBEPJLE_BJKGFCEFMEC_OFFSET))(this);
	}

	::System::Void NILNEKGGCGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCBEBEPJLE_NILNEKGGCGE_OFFSET))(this);
	}

	::System::Void PCGPGCGJBEH(::Il2CppArray<::CAONGKLFNGN*>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CAONGKLFNGN*>*))((::PBYTE)hIl2Cpp + PKCBEBEPJLE_PCGPGCGJBEH_OFFSET))(this, MIALFKCCCPI);
	}

	static ::PKCBEBEPJLE* JFDOOELFAOA()
	{
		return ((::PKCBEBEPJLE*(*)())((::PBYTE)hIl2Cpp + PKCBEBEPJLE_JFDOOELFAOA_OFFSET))();
	}

	::System::Void NNLHPCEJECN(::DMHOLJNNCJA* LHPFMGBDFPN, ::FJHEGIPNKHB MOHCFNIGGOE)
	{
		return ((::System::Void(*)(::PVOID, ::DMHOLJNNCJA*, ::FJHEGIPNKHB))((::PBYTE)hIl2Cpp + PKCBEBEPJLE_NNLHPCEJECN_OFFSET))(this, LHPFMGBDFPN, MOHCFNIGGOE);
	}
};
