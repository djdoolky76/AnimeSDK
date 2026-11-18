#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLCGMPMEPEC.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class PNGJBNLGLBK;
namespace System { template <typename T> class Func_1; }

#define BNFHDLPNLEB_DDHFGLLJPKO_OFFSET UNITYSDK_OFFSET(0x13984DB0)
#define BNFHDLPNLEB_KCOJEOPNJPE_OFFSET UNITYSDK_OFFSET(0x13984E00)
#define BNFHDLPNLEB__CTOR_OFFSET UNITYSDK_OFFSET(0x13984DA0)

inline static constexpr unsigned int BNFHDLPNLEB_TypeDefinitionIndex = 67949;

class BNFHDLPNLEB : public ::GLCGMPMEPEC
{
public:
	::System::Void _ctor(::PNGJBNLGLBK* KFPOGNJNMLL, ::System::Func_1<::System::Boolean>* AFGOENOJKHD, ::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::System::Void(*)(::PVOID, ::PNGJBNLGLBK*, ::System::Func_1<::System::Boolean>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + BNFHDLPNLEB__CTOR_OFFSET))(this, KFPOGNJNMLL, AFGOENOJKHD, AMIDHEAIANO);
	}

	::System::Void DDHFGLLJPKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHDLPNLEB_DDHFGLLJPKO_OFFSET))(this);
	}

	::System::Void KCOJEOPNJPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHDLPNLEB_KCOJEOPNJPE_OFFSET))(this);
	}
};
