#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLCGMPMEPEC.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class PNGJBNLGLBK;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define PDAPFILNAPE_DDHFGLLJPKO_OFFSET UNITYSDK_OFFSET(0x160031A0)
#define PDAPFILNAPE_KCOJEOPNJPE_OFFSET UNITYSDK_OFFSET(0x160032A0)
#define PDAPFILNAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x160030F0)

inline static constexpr unsigned int PDAPFILNAPE_TypeDefinitionIndex = 75364;

class PDAPFILNAPE : public ::GLCGMPMEPEC
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* PKBHJNJKGCJ; // 0x40

	::System::Void _ctor(::PNGJBNLGLBK* KFPOGNJNMLL, ::System::Threading::CancellationToken AMIDHEAIANO, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>* FCCFGMANMKM, ::System::Func_1<::System::Boolean>* AFGOENOJKHD)
	{
		return ((::System::Void(*)(::PVOID, ::PNGJBNLGLBK*, ::System::Threading::CancellationToken, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + PDAPFILNAPE__CTOR_OFFSET))(this, KFPOGNJNMLL, AMIDHEAIANO, FCCFGMANMKM, AFGOENOJKHD);
	}

	::System::Void DDHFGLLJPKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAPFILNAPE_DDHFGLLJPKO_OFFSET))(this);
	}

	::System::Void KCOJEOPNJPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAPFILNAPE_KCOJEOPNJPE_OFFSET))(this);
	}
};
