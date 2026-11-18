#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKFCOMPHBLJ_ANMNJPAHCAF_ANOPJAJGHAJ.h"
#include "unitysdk/MDANEEPAJKA.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP_FDAGHCIIJCI_OFFSET UNITYSDK_OFFSET(0x15504F10)
#define AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP_LCHLINBPJBA_OFFSET UNITYSDK_OFFSET(0x15505000)

inline static constexpr unsigned int AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP_TypeDefinitionIndex = 77050;

struct alignas(8) AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP
{
	::System::Boolean CEEAKFLKMED; // 0x10
	::System::Byte _padding0[0x3];
	::MDANEEPAJKA IFCOEONGHLN; // 0x14
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* OEPJFNMNBME; // 0x18
	::System::Boolean OKIKIGLHJPK; // 0x20
	::System::Byte _padding1[0x3];
	::AKFCOMPHBLJ_ANMNJPAHCAF_ANOPJAJGHAJ OONKPCNMJHD; // 0x24

	/*
	static ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP FDAGHCIIJCI(::Il2CppArray<::System::String*>* FKFOCMAMJLF)
	{
		return ((::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP_FDAGHCIIJCI_OFFSET))(FKFOCMAMJLF);
	}
	*/

	/*
	static ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP LCHLINBPJBA(::System::Collections::Generic::IReadOnlyList_1<::System::String*>* FKFOCMAMJLF)
	{
		return ((::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP(*)(::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP_LCHLINBPJBA_OFFSET))(FKFOCMAMJLF);
	}
	*/
};
