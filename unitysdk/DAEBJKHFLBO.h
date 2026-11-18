#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECJHIMIBDCO.h"
#include "unitysdk/LBJHIFOBLOE.h"

class CAONGKLFNGN;
class LBAFEBOKJCC;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DAEBJKHFLBO_BFNKPAAEGNM_OFFSET UNITYSDK_OFFSET(0x19D4E390)
#define DAEBJKHFLBO_IKKPJFDCIKC_OFFSET UNITYSDK_OFFSET(0x19D4E4A0)
#define DAEBJKHFLBO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x19D4EF90)
#define DAEBJKHFLBO_KDCKMCHLDAJ_OFFSET UNITYSDK_OFFSET(0x19D4E380)
#define DAEBJKHFLBO_KNIPICMJMPE_OFFSET UNITYSDK_OFFSET(0x19D4ED40)
#define DAEBJKHFLBO_NILNEKGGCGE_OFFSET UNITYSDK_OFFSET(0x19D4EF00)
#define DAEBJKHFLBO_PCGPGCGJBEH_OFFSET UNITYSDK_OFFSET(0x19D4F080)
#define DAEBJKHFLBO__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4EE80)

inline static constexpr unsigned int DAEBJKHFLBO_TypeDefinitionIndex = 45914;

class DAEBJKHFLBO : public ::LBJHIFOBLOE
{
public:
	::LBAFEBOKJCC* FHDIMALKGCL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LOGJHEIDEHD; // 0x18
	::Il2CppArray<::ECJHIMIBDCO>* _MIDJHLALHIF_k__BackingField; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* DJHMBBDJCFJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEBJKHFLBO__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::ECJHIMIBDCO>* KDCKMCHLDAJ()
	{
		return ((::Il2CppArray<::ECJHIMIBDCO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEBJKHFLBO_KDCKMCHLDAJ_OFFSET))(this);
	}

	::System::Void BFNKPAAEGNM(::Il2CppArray<::CAONGKLFNGN*>* GPIBNMBEDHC)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CAONGKLFNGN*>*))((::PBYTE)hIl2Cpp + DAEBJKHFLBO_BFNKPAAEGNM_OFFSET))(this, GPIBNMBEDHC);
	}

	::System::Void KNIPICMJMPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEBJKHFLBO_KNIPICMJMPE_OFFSET))(this);
	}

	::System::Void NILNEKGGCGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEBJKHFLBO_NILNEKGGCGE_OFFSET))(this);
	}

	::System::Void IKKPJFDCIKC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEBJKHFLBO_IKKPJFDCIKC_OFFSET))(this);
	}

	static ::DAEBJKHFLBO* JFDOOELFAOA()
	{
		return ((::DAEBJKHFLBO*(*)())((::PBYTE)hIl2Cpp + DAEBJKHFLBO_JFDOOELFAOA_OFFSET))();
	}

	::System::Void PCGPGCGJBEH(::Il2CppArray<::CAONGKLFNGN*>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CAONGKLFNGN*>*))((::PBYTE)hIl2Cpp + DAEBJKHFLBO_PCGPGCGJBEH_OFFSET))(this, MIALFKCCCPI);
	}
};
