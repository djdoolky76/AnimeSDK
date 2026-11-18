#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIPEGPGHAJI.h"
#include "unitysdk/MNLDNFFGIFL.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"

class ABFDJPPBLHF;
class OHKBMKNIBHA;

#define HEAKLBNKIKI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1D9B53C0)
#define HEAKLBNKIKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B5340)

inline static constexpr unsigned int HEAKLBNKIKI_TypeDefinitionIndex = 93514;

class HEAKLBNKIKI : public ::BIPEGPGHAJI
{
public:
	::Il2CppArray<::System::UInt64>* FDCACBFJPNO; // 0x20
	::Il2CppArray<::System::UInt32>* LDBJJHJMBOK; // 0x28
	::Il2CppArray<::MoleMole::Arcade::BallsRace::BrEntityType>* HLGJGKDKJJK; // 0x30
	::Il2CppArray<::MNLDNFFGIFL>* JHJOOOBFMGC; // 0x38

	::System::Void _ctor(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEAKLBNKIKI__CTOR_OFFSET))(this, JHFKDGBCOBA);
	}

	::System::Void BBOMJDBNHIC(::OHKBMKNIBHA* KECKGDFIALJ, ::ABFDJPPBLHF* GKODDNGEIDN, ::System::Int32 EOGLMAEPALE, ::System::UInt64 HCKDKJHAOMF)
	{
		return ((::System::Void(*)(::PVOID, ::OHKBMKNIBHA*, ::ABFDJPPBLHF*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + HEAKLBNKIKI_BBOMJDBNHIC_OFFSET))(this, KECKGDFIALJ, GKODDNGEIDN, EOGLMAEPALE, HCKDKJHAOMF);
	}
};
