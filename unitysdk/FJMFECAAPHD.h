#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHMFJHFOLAI.h"

class PNGJBNLGLBK;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define FJMFECAAPHD_CICILNOMOLF_OFFSET UNITYSDK_OFFSET(0x17500C20)
#define FJMFECAAPHD__CTOR_OFFSET UNITYSDK_OFFSET(0x17500C10)

inline static constexpr unsigned int FJMFECAAPHD_TypeDefinitionIndex = 42406;

class FJMFECAAPHD : public ::EHMFJHFOLAI
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* EAHNAIPFCDD; // 0x28

	::System::Void _ctor(::PNGJBNLGLBK* KFPOGNJNMLL, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* BOIBONJOJKH)
	{
		return ((::System::Void(*)(::PVOID, ::PNGJBNLGLBK*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FJMFECAAPHD__CTOR_OFFSET))(this, KFPOGNJNMLL, BOIBONJOJKH);
	}

	::System::Void CICILNOMOLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJMFECAAPHD_CICILNOMOLF_OFFSET))(this);
	}
};
