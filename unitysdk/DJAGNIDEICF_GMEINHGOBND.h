#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJAGNIDEICF_GMEINHGOBND_FHDJDIIPGGP_1_OFFSET UNITYSDK_OFFSET(0x13E51F50)
#define DJAGNIDEICF_GMEINHGOBND_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x13E51D00)
#define DJAGNIDEICF_GMEINHGOBND_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x13E51E20)
#define DJAGNIDEICF_GMEINHGOBND_HANJJMBJJEI_OFFSET UNITYSDK_OFFSET(0x13E51D60)
#define DJAGNIDEICF_GMEINHGOBND_PLOAKKAOBLE_OFFSET UNITYSDK_OFFSET(0x13E51B50)
#define DJAGNIDEICF_GMEINHGOBND__CTOR_OFFSET UNITYSDK_OFFSET(0x13E51AE0)

inline static constexpr unsigned int DJAGNIDEICF_GMEINHGOBND_TypeDefinitionIndex = 73325;

class DJAGNIDEICF_GMEINHGOBND : public ::System::Object
{
public:
	// static const ::System::String* APJCDIKEAFD; // 0x0
	::System::Collections::Generic::List_1<::System::Object*>* ACDKKCINLON; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAGNIDEICF_GMEINHGOBND__CTOR_OFFSET))(this);
	}

	::System::Int32 FHDJDIIPGGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAGNIDEICF_GMEINHGOBND_FHDJDIIPGGP_OFFSET))(this);
	}

	::System::Void HANJJMBJJEI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJAGNIDEICF_GMEINHGOBND_HANJJMBJJEI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FLHNGDLANDC(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJAGNIDEICF_GMEINHGOBND_FLHNGDLANDC_OFFSET))(this, AELLPLBJELA);
	}

	::System::Int32 FHDJDIIPGGP_1(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJAGNIDEICF_GMEINHGOBND_FHDJDIIPGGP_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PLOAKKAOBLE(::System::String* AELLPLBJELA, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DJAGNIDEICF_GMEINHGOBND_PLOAKKAOBLE_OFFSET))(this, AELLPLBJELA, EGEGIMGMJHN);
	}
};
