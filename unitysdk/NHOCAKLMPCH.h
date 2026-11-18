#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENEOLAONNAH.h"

class IFBMCLAKMAM;
class MonoUITableScrollV2;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NHOCAKLMPCH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x12FEAE50)
#define NHOCAKLMPCH_CCDHFIKFOAJ_OFFSET UNITYSDK_OFFSET(0x12FEAD00)
#define NHOCAKLMPCH__CTOR_OFFSET UNITYSDK_OFFSET(0x12FEACF0)

inline static constexpr unsigned int NHOCAKLMPCH_TypeDefinitionIndex = 74037;

class NHOCAKLMPCH : public ::ENEOLAONNAH
{
public:
	::MonoUITableScrollV2* HBIOLFHCIJE; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::IFBMCLAKMAM*>* ILGJOIAOJAK; // 0x18

	::System::Void _ctor(::MonoUITableScrollV2* FKJMNHMBELE)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NHOCAKLMPCH__CTOR_OFFSET))(this, FKJMNHMBELE);
	}

	::System::Void CCDHFIKFOAJ(::System::Int32 EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NHOCAKLMPCH_CCDHFIKFOAJ_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void BBOMJDBNHIC(::System::Collections::Generic::IReadOnlyList_1<::IFBMCLAKMAM*>* OOBOMJFEMEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::IFBMCLAKMAM*>*))((::PBYTE)hIl2Cpp + NHOCAKLMPCH_BBOMJDBNHIC_OFFSET))(this, OOBOMJFEMEA);
	}
};
