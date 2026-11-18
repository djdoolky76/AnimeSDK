#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define INIAEMDOHAF_ADCGHPDFPOM_OFFSET UNITYSDK_OFFSET(0x160B5F30)
#define INIAEMDOHAF_ADPKBMHAKHK_OFFSET UNITYSDK_OFFSET(0x160B5D80)
#define INIAEMDOHAF_JMGFLMLBPGN_OFFSET UNITYSDK_OFFSET(0x160B5EF0)
#define INIAEMDOHAF__CTOR_OFFSET UNITYSDK_OFFSET(0x160B5D70)

inline static constexpr unsigned int INIAEMDOHAF_TypeDefinitionIndex = 73892;

class INIAEMDOHAF : public ::System::Object
{
public:
	// static const ::System::Int32 ILPENGKANBJ = 0x2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIAEMDOHAF__CTOR_OFFSET))(this);
	}

	static ::System::String* ADPKBMHAKHK(::System::String* LCEGOBBEECM)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + INIAEMDOHAF_ADPKBMHAKHK_OFFSET))(LCEGOBBEECM);
	}

	static ::System::String* JMGFLMLBPGN(::System::String* LCEGOBBEECM)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + INIAEMDOHAF_JMGFLMLBPGN_OFFSET))(LCEGOBBEECM);
	}

	static ::System::Boolean ADCGHPDFPOM(::System::Int32 MGMDLMBEDJF, ::System::String*& LCEGOBBEECM)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + INIAEMDOHAF_ADCGHPDFPOM_OFFSET))(MGMDLMBEDJF, LCEGOBBEECM);
	}
};
