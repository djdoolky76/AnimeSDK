#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CAGCIJOMKLO_IKBIEEBKJPM_OFFSET UNITYSDK_OFFSET(0x14592770)
#define CAGCIJOMKLO_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x14592530)
#define CAGCIJOMKLO_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x145929B0)
#define CAGCIJOMKLO__CTOR_OFFSET UNITYSDK_OFFSET(0x14592520)

inline static constexpr unsigned int CAGCIJOMKLO_TypeDefinitionIndex = 76252;

class CAGCIJOMKLO : public ::KAFMJLPNNAG
{
public:
	// static const ::System::Int32 DKBMJNGKDMM = 0x0; // 0x0
	// static const ::System::Int32 OKCBAOENIMJ = 0x1; // 0x0
	// static const ::System::Int32 HONFLCDABOA = 0x2; // 0x0
	// static const ::System::Int32 JBAPIOFBIGH = 0x3; // 0x0

	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + CAGCIJOMKLO__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAGCIJOMKLO_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	static ::System::Boolean IKBIEEBKJPM(::System::Collections::Generic::List_1<::System::String*>* KJGPEJAJBKG, ::System::String* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CAGCIJOMKLO_IKBIEEBKJPM_OFFSET))(KJGPEJAJBKG, HODAIDNDKHD);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAGCIJOMKLO_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
