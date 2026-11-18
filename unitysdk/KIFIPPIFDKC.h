#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EEBONOEGHOH.h"

class AOIMINJPFHO;
class BCFKBFFLFGH;
class DIHNHHLDLDP;
class MENHJGJJNOI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIFIPPIFDKC_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x1E4DBB50)
#define KIFIPPIFDKC_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x1E4DB8A0)
#define KIFIPPIFDKC_NEOPMIOAPOI_OFFSET UNITYSDK_OFFSET(0x1E4DB5F0)
#define KIFIPPIFDKC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E4DBE70)
#define KIFIPPIFDKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DB560)

inline static constexpr unsigned int KIFIPPIFDKC_TypeDefinitionIndex = 94244;

class KIFIPPIFDKC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MENHJGJJNOI*>*>* MLIDEPEBEGD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFIPPIFDKC__CTOR_OFFSET))(this);
	}

	::System::Void NEOPMIOAPOI(::System::Int32 GCFDHEFHCAJ, ::EEBONOEGHOH HODAIDNDKHD, ::AOIMINJPFHO* MPCFCIMLKEG, ::BCFKBFFLFGH* JMDHBJMNBCP, ::DIHNHHLDLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::EEBONOEGHOH, ::AOIMINJPFHO*, ::BCFKBFFLFGH*, ::DIHNHHLDLDP*))((::PBYTE)hIl2Cpp + KIFIPPIFDKC_NEOPMIOAPOI_OFFSET))(this, GCFDHEFHCAJ, HODAIDNDKHD, MPCFCIMLKEG, JMDHBJMNBCP, AAOCANGHBDG);
	}

	::System::Void KNDMMHPDPIB(::System::Int32 GCFDHEFHCAJ, ::EEBONOEGHOH HODAIDNDKHD, ::AOIMINJPFHO* MPCFCIMLKEG, ::BCFKBFFLFGH* JMDHBJMNBCP, ::DIHNHHLDLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::EEBONOEGHOH, ::AOIMINJPFHO*, ::BCFKBFFLFGH*, ::DIHNHHLDLDP*))((::PBYTE)hIl2Cpp + KIFIPPIFDKC_KNDMMHPDPIB_OFFSET))(this, GCFDHEFHCAJ, HODAIDNDKHD, MPCFCIMLKEG, JMDHBJMNBCP, AAOCANGHBDG);
	}

	::System::Void KKFNPONHGEM(::MENHJGJJNOI* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::PVOID, ::MENHJGJJNOI*))((::PBYTE)hIl2Cpp + KIFIPPIFDKC_KKFNPONHGEM_OFFSET))(this, AOKHOHCJNFJ);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFIPPIFDKC_PHOADBJGFBE_OFFSET))(this);
	}
};
