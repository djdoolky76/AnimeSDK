#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOIEJGJOMPP.h"
#include "unitysdk/KNLHFLFKGMP.h"

class NEOCOGIMJGP;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HACINDAJNED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x124CC1E0)
#define HACINDAJNED__CTOR_2_OFFSET UNITYSDK_OFFSET(0x124CC250)
#define HACINDAJNED__CTOR_OFFSET UNITYSDK_OFFSET(0x124CC060)

inline static constexpr unsigned int HACINDAJNED_TypeDefinitionIndex = 94091;

class HACINDAJNED : public ::KNLHFLFKGMP
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* OIEOPEDFGMG; // 0x68
	::System::UInt64 KHBNCNAKEBM; // 0x70
	::System::Int32 KFFFNKHAMGJ; // 0x78
	::BOIEJGJOMPP OCOJFKMOKMK; // 0x7C

	::System::Void _ctor(::NEOCOGIMJGP* HMMMOCJAEOA, ::System::UInt64 FALJABIBPNH)
	{
		return ((::System::Void(*)(::PVOID, ::NEOCOGIMJGP*, ::System::UInt64))((::PBYTE)hIl2Cpp + HACINDAJNED__CTOR_OFFSET))(this, HMMMOCJAEOA, FALJABIBPNH);
	}

	::System::Void _ctor_1(::System::UInt64 FALJABIBPNH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HACINDAJNED__CTOR_1_OFFSET))(this, FALJABIBPNH);
	}

	::System::Void _ctor_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACINDAJNED__CTOR_2_OFFSET))(this);
	}
};
