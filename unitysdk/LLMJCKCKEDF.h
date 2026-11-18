#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define LLMJCKCKEDF_FPIFKGGDGEE_OFFSET UNITYSDK_OFFSET(0x12D3B280)
#define LLMJCKCKEDF_JAICCEFIPKJ_OFFSET UNITYSDK_OFFSET(0x12D3B6E0)
#define LLMJCKCKEDF__CTOR_OFFSET UNITYSDK_OFFSET(0x6F22B0)

inline static constexpr unsigned int LLMJCKCKEDF_TypeDefinitionIndex = 86468;

struct alignas(4) LLMJCKCKEDF
{
	::System::Int32 LLJKPLIJPON; // 0x10
	::System::Int32 ELCLHDCNFIF; // 0x14
	::System::Int32 FHBEFCBEOPK; // 0x18
	::System::Int32 IDDBLAEBBAL; // 0x1C
	::System::Int32 FHKKJMBOFOL; // 0x20
	::System::Int32 OKOHMOBLMHN; // 0x24
	::System::Int32 NHKAPCLKMOH; // 0x28
	::System::Int32 HPPFKKGLCJJ; // 0x2C
	::System::Int32 JHPHJCMBEKI; // 0x30

	::System::Void _ctor(::System::Int32 MLMMOMBMOIJ, ::System::Int32 NJLAHKHGFBA, ::System::Int32 FJIENCBLNAD, ::System::Int32 LLMIGDBLOEB, ::System::Int32 PCMALPCDPBB, ::System::Int32 JGGHNNGLAEK, ::System::Int32 CCMMDOEDBMI, ::System::Int32 EKNBCPLHNNL, ::System::Int32 JDIFPEMEEDB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LLMJCKCKEDF__CTOR_OFFSET))(this, MLMMOMBMOIJ, NJLAHKHGFBA, FJIENCBLNAD, LLMIGDBLOEB, PCMALPCDPBB, JGGHNNGLAEK, CCMMDOEDBMI, EKNBCPLHNNL, JDIFPEMEEDB);
	}

	/*
	static ::LLMJCKCKEDF FPIFKGGDGEE(::LLMJCKCKEDF LDDJOFHAOHG, ::LLMJCKCKEDF HEOCMDEHMNJ)
	{
		return ((::LLMJCKCKEDF(*)(::LLMJCKCKEDF, ::LLMJCKCKEDF))((::PBYTE)hIl2Cpp + LLMJCKCKEDF_FPIFKGGDGEE_OFFSET))(LDDJOFHAOHG, HEOCMDEHMNJ);
	}
	*/

	static ::System::Int32 JAICCEFIPKJ(::System::Int32 LDDJOFHAOHG, ::System::Int32 HEOCMDEHMNJ)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LLMJCKCKEDF_JAICCEFIPKJ_OFFSET))(LDDJOFHAOHG, HEOCMDEHMNJ);
	}
};
