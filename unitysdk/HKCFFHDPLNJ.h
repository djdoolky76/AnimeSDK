#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGINJIKKBJA;
namespace System { class Action; }

#define HKCFFHDPLNJ_FJJDOLOFNPF_OFFSET UNITYSDK_OFFSET(0x14A1D160)
#define HKCFFHDPLNJ_LNEJFLEGGBN_OFFSET UNITYSDK_OFFSET(0x14A1CFD0)
#define HKCFFHDPLNJ_NFLNALIFPBG_OFFSET UNITYSDK_OFFSET(0x14A1D1B0)
#define HKCFFHDPLNJ_OPGEKKJIACK_OFFSET UNITYSDK_OFFSET(0x14A1D0D0)
#define HKCFFHDPLNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1CFC0)

inline static constexpr unsigned int HKCFFHDPLNJ_TypeDefinitionIndex = 77933;

class HKCFFHDPLNJ : public ::System::Object
{
public:
	::System::Action* IFKGOIDAABA; // 0x10
	::LGINJIKKBJA* HNAMOOMCGLM; // 0x18
	::System::Boolean HNFIPEAMDGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCFFHDPLNJ__CTOR_OFFSET))(this);
	}

	::System::Void LNEJFLEGGBN(::LGINJIKKBJA* JEPEJDNMFOK)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + HKCFFHDPLNJ_LNEJFLEGGBN_OFFSET))(this, JEPEJDNMFOK);
	}

	::System::Void OPGEKKJIACK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCFFHDPLNJ_OPGEKKJIACK_OFFSET))(this);
	}

	::System::Void FJJDOLOFNPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCFFHDPLNJ_FJJDOLOFNPF_OFFSET))(this);
	}

	::System::Void NFLNALIFPBG(::System::Action* IFKGOIDAABA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HKCFFHDPLNJ_NFLNALIFPBG_OFFSET))(this, IFKGOIDAABA);
	}
};
