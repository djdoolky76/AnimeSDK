#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LLJHKEAFOAF.h"

namespace System { class Action; }

#define FPCKOMIAJLD_AJOPHKHFMLF_OFFSET UNITYSDK_OFFSET(0x10ED64C0)
#define FPCKOMIAJLD_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x10ED6670)
#define FPCKOMIAJLD_MJDDONGKHCG_OFFSET UNITYSDK_OFFSET(0x10ED66E0)

inline static constexpr unsigned int FPCKOMIAJLD_TypeDefinitionIndex = 49328;

class FPCKOMIAJLD : public ::System::Object
{
public:
	static ::LLJHKEAFOAF AJOPHKHFMLF(::System::Action* HNNHBOMOOEM, ::System::Int64 EFEJKFALOCI, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::LLJHKEAFOAF(*)(::System::Action*, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + FPCKOMIAJLD_AJOPHKHFMLF_OFFSET))(HNNHBOMOOEM, EFEJKFALOCI, JHFKDGBCOBA);
	}

	static ::LLJHKEAFOAF JFDOOELFAOA(::System::Action* GJBHEJGENMI)
	{
		return ((::LLJHKEAFOAF(*)(::System::Action*))((::PBYTE)hIl2Cpp + FPCKOMIAJLD_JFDOOELFAOA_OFFSET))(GJBHEJGENMI);
	}

	static ::LLJHKEAFOAF MJDDONGKHCG(::System::Action* HNNHBOMOOEM, ::System::Single HPCILAJBBHH, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::LLJHKEAFOAF(*)(::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FPCKOMIAJLD_MJDDONGKHCG_OFFSET))(HNNHBOMOOEM, HPCILAJBBHH, JHFKDGBCOBA);
	}
};
