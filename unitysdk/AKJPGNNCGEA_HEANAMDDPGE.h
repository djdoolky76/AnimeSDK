#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKJPGNNCGEA_HEANAMDDPGE_FHPINLAHEAK_OFFSET UNITYSDK_OFFSET(0x144F0980)
#define AKJPGNNCGEA_HEANAMDDPGE_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x144F03F0)
#define AKJPGNNCGEA_HEANAMDDPGE_IMBOPJCCJPF_OFFSET UNITYSDK_OFFSET(0x144ECA30)
#define AKJPGNNCGEA_HEANAMDDPGE_NFHECHIGCMO_OFFSET UNITYSDK_OFFSET(0x144F09D0)
#define AKJPGNNCGEA_HEANAMDDPGE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x144F21C0)
#define AKJPGNNCGEA_HEANAMDDPGE__CTOR_OFFSET UNITYSDK_OFFSET(0x144F11A0)

inline static constexpr unsigned int AKJPGNNCGEA_HEANAMDDPGE_TypeDefinitionIndex = 90425;

class AKJPGNNCGEA_HEANAMDDPGE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* OJKBLJCONJO; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* OHOPAEGDHPF; // 0x18
	::System::UInt32 LDDJOFHAOHG; // 0x20
	::System::Boolean IDNANBKNLEI; // 0x24
	::System::Byte _padding0[0x3];
	::System::Int32 FGMDGHLAIJO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJPGNNCGEA_HEANAMDDPGE__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJPGNNCGEA_HEANAMDDPGE_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean IMBOPJCCJPF(::System::UInt32 GFOPLDDFDIA, ::System::Int32 DKOFFFNEFJC, ::System::Int32 AOGAEFHHGHP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AKJPGNNCGEA_HEANAMDDPGE_IMBOPJCCJPF_OFFSET))(this, GFOPLDDFDIA, DKOFFFNEFJC, AOGAEFHHGHP);
	}

	::System::Void FHPINLAHEAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJPGNNCGEA_HEANAMDDPGE_FHPINLAHEAK_OFFSET))(this);
	}

	::System::Boolean FLHNGDLANDC(::System::UInt32 GFOPLDDFDIA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKJPGNNCGEA_HEANAMDDPGE_FLHNGDLANDC_OFFSET))(this, GFOPLDDFDIA);
	}

	::System::Void NFHECHIGCMO(::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKJPGNNCGEA_HEANAMDDPGE_NFHECHIGCMO_OFFSET))(this, HBJOLKHGGDD);
	}
};
