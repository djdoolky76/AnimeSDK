#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KAJAGPBJADH;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class String; }

#define GCGKPBMGPBF_FCFOEJGPDNO_1_OFFSET UNITYSDK_OFFSET(0x125C4530)
#define GCGKPBMGPBF_FCFOEJGPDNO_2_OFFSET UNITYSDK_OFFSET(0x125C4680)
#define GCGKPBMGPBF_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x125C43E0)

inline static constexpr unsigned int GCGKPBMGPBF_TypeDefinitionIndex = 70202;

class GCGKPBMGPBF : public ::System::Object
{
public:
	static ::System::Single FCFOEJGPDNO(::MoleMole::Config::DynamicFloat* ADHHLLDCDEB, ::KAJAGPBJADH* KNHIFHIKHIO, ::System::Boolean IMKGCCPDPIB)
	{
		return ((::System::Single(*)(::MoleMole::Config::DynamicFloat*, ::KAJAGPBJADH*, ::System::Boolean))((::PBYTE)hIl2Cpp + GCGKPBMGPBF_FCFOEJGPDNO_OFFSET))(ADHHLLDCDEB, KNHIFHIKHIO, IMKGCCPDPIB);
	}

	static ::System::Int32 FCFOEJGPDNO_1(::MoleMole::Config::DynamicInt* ADHHLLDCDEB, ::KAJAGPBJADH* KNHIFHIKHIO, ::System::Boolean IMKGCCPDPIB)
	{
		return ((::System::Int32(*)(::MoleMole::Config::DynamicInt*, ::KAJAGPBJADH*, ::System::Boolean))((::PBYTE)hIl2Cpp + GCGKPBMGPBF_FCFOEJGPDNO_1_OFFSET))(ADHHLLDCDEB, KNHIFHIKHIO, IMKGCCPDPIB);
	}

	static ::System::String* FCFOEJGPDNO_2(::MoleMole::Config::DynamicString* ADHHLLDCDEB, ::KAJAGPBJADH* KNHIFHIKHIO, ::System::Boolean IMKGCCPDPIB)
	{
		return ((::System::String*(*)(::MoleMole::Config::DynamicString*, ::KAJAGPBJADH*, ::System::Boolean))((::PBYTE)hIl2Cpp + GCGKPBMGPBF_FCFOEJGPDNO_2_OFFSET))(ADHHLLDCDEB, KNHIFHIKHIO, IMKGCCPDPIB);
	}
};
