#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHMFJHFOLAI.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class PNGJBNLGLBK;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { template <typename T> class Func_1; }

#define GLCGMPMEPEC_CICILNOMOLF_OFFSET UNITYSDK_OFFSET(0x16CD08B0)
#define GLCGMPMEPEC_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x16CD0510)
#define GLCGMPMEPEC_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x16CD0950)
#define GLCGMPMEPEC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD0500)

inline static constexpr unsigned int GLCGMPMEPEC_TypeDefinitionIndex = 62033;

class GLCGMPMEPEC : public ::EHMFJHFOLAI
{
public:
	::System::Func_1<::System::Boolean>* LMOEMEKJEIC; // 0x28
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* EAHNAIPFCDD; // 0x30
	::System::Threading::CancellationToken HNGBKOCIDPE; // 0x38

	::System::Void _ctor(::PNGJBNLGLBK* KFPOGNJNMLL, ::System::Func_1<::System::Boolean>* AFGOENOJKHD, ::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::System::Void(*)(::PVOID, ::PNGJBNLGLBK*, ::System::Func_1<::System::Boolean>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + GLCGMPMEPEC__CTOR_OFFSET))(this, KFPOGNJNMLL, AFGOENOJKHD, AMIDHEAIANO);
	}

	::System::Void EDEFLFIKNFK(::System::Boolean CFHNOIIHLIM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLCGMPMEPEC_EDEFLFIKNFK_OFFSET))(this, CFHNOIIHLIM);
	}

	::System::Void CICILNOMOLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGMPMEPEC_CICILNOMOLF_OFFSET))(this);
	}

	::System::Void NIGDIMFIAEJ(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLCGMPMEPEC_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}
};
