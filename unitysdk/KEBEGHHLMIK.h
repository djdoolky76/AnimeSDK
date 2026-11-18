#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KEBEGHHLMIK_CFDMDAEIHEC_OFFSET UNITYSDK_OFFSET(0x1860AF40)
#define KEBEGHHLMIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1860AF30)

inline static constexpr unsigned int KEBEGHHLMIK_TypeDefinitionIndex = 91430;

class KEBEGHHLMIK : public ::System::Object
{
public:
	// static const ::System::String* HEEOLPFGJDL; // 0x0
	// static const ::System::Int32 OJJNKEGNGCL = 0x3; // 0x0
	// static const ::System::Int32 LPIACDGEHDI = 0x6; // 0x0
	// static const ::System::Int32 FMDOEJKGJFG = 0x3; // 0x0
	// static const ::System::Int32 JFEKOCCNGGL = 0x4; // 0x0
	// static const ::System::Int32 PHMNOKPAGJH = 0xF; // 0x0
	// static const ::System::Single PDFKHKKIAGO; // 0x0
	// static const ::System::Single MGMGNEDJAKK; // 0x0
	// static const ::System::Single EGKPHPDOOPC; // 0x0
	// static const ::System::Single FIIEMMEEHFH; // 0x0
	// static const ::System::Single OADNHCEBFGB; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEGHHLMIK__CTOR_OFFSET))(this);
	}

	static ::System::Single CFDMDAEIHEC(::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH, ::System::Single ELHMOANKHFM)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KEBEGHHLMIK_CFDMDAEIHEC_OFFSET))(JBGLCAFPGHK, KKAMDFNMMJH, ELHMOANKHFM);
	}
};
