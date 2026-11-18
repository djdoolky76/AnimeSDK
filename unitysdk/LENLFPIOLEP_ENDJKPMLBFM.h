#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define LENLFPIOLEP_ENDJKPMLBFM_BBGBJNCGPND_OFFSET UNITYSDK_OFFSET(0x15655730)
#define LENLFPIOLEP_ENDJKPMLBFM_CJCBFHKKHPL_OFFSET UNITYSDK_OFFSET(0x15655770)
#define LENLFPIOLEP_ENDJKPMLBFM__CTOR_OFFSET UNITYSDK_OFFSET(0x15655720)

inline static constexpr unsigned int LENLFPIOLEP_ENDJKPMLBFM_TypeDefinitionIndex = 73422;

class LENLFPIOLEP_ENDJKPMLBFM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* BLFCGGEAEOF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLFPIOLEP_ENDJKPMLBFM__CTOR_OFFSET))(this);
	}

	::System::Boolean BBGBJNCGPND(::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LENLFPIOLEP_ENDJKPMLBFM_BBGBJNCGPND_OFFSET))(this, HBJOLKHGGDD);
	}

	::System::Boolean CJCBFHKKHPL(::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LENLFPIOLEP_ENDJKPMLBFM_CJCBFHKKHPL_OFFSET))(this, HBJOLKHGGDD);
	}
};
