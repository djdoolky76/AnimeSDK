#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/KNICBPEEFBJ.h"

class ENEBHMNFLCP;
class IGPKLGJGBCI;
class NHFPLEJDHAJ;
namespace System { class String; }
template <typename T> class LJHFMILANJA_1;
template <typename T> class NMANHEHIJAL_1;

#define IIBINLMOGLF_JGPDGCPCGCE_OFFSET UNITYSDK_OFFSET(0x16579610)
#define IIBINLMOGLF_JIAHLMBFNMI_OFFSET UNITYSDK_OFFSET(0x16578FC0)
#define IIBINLMOGLF_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16578EA0)
#define IIBINLMOGLF__CTOR_OFFSET UNITYSDK_OFFSET(0x16578FB0)

inline static constexpr unsigned int IIBINLMOGLF_TypeDefinitionIndex = 88880;

class IIBINLMOGLF : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::KNICBPEEFBJ>* OCOJFKMOKMK; // 0x88
	::NMANHEHIJAL_1<::IGPKLGJGBCI*>* NMMCCPGBENG; // 0x90
	::LJHFMILANJA_1<::System::UInt64>* AICHFKIBENF; // 0x98
	::LJHFMILANJA_1<::System::Int32>* EJIHLAGPILN; // 0xA0
	::LJHFMILANJA_1<::System::String*>* KCILMPLMJEK; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBINLMOGLF__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBINLMOGLF_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void JIAHLMBFNMI(::NHFPLEJDHAJ* ODPEJNDHNNA, ::ENEBHMNFLCP* OILPBPIMIDA)
	{
		return ((::System::Void(*)(::PVOID, ::NHFPLEJDHAJ*, ::ENEBHMNFLCP*))((::PBYTE)hIl2Cpp + IIBINLMOGLF_JIAHLMBFNMI_OFFSET))(this, ODPEJNDHNNA, OILPBPIMIDA);
	}

	::ENEBHMNFLCP* JGPDGCPCGCE()
	{
		return ((::ENEBHMNFLCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBINLMOGLF_JGPDGCPCGCE_OFFSET))(this);
	}
};
