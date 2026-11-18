#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHJPJMKIHBG.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ExceptionInfo; }
namespace Foundation { class ParallelFileVerifier_FileResult; }
namespace System { class String; }

#define FOUNDATION_PARALLELFILEVERIFIER_FILEINFOCHECKRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x116D0720)

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier_FileInfoCheckResult_TypeDefinitionIndex = 50673;

	class ParallelFileVerifier_FileInfoCheckResult : public ::System::Object
	{
	public:
		::FHJPJMKIHBG filePickInfo; // 0x10
		::Foundation::ParallelFileVerifier_FileResult* Persist; // 0x58
		::System::String* errMsg; // 0x60
		::Foundation::ExceptionInfo* errorInfo; // 0x68
		::System::String* displayMsg; // 0x70
		::Foundation::ParallelFileVerifier_FileResult* PersistNew; // 0x78
		::Foundation::ParallelFileVerifier_FileResult* Streaming; // 0x80
		::System::Boolean verifyPass; // 0x88
		::System::Boolean fileExistInBuildIn; // 0x89

		::System::Void _ctor(::FHJPJMKIHBG filePickInfo)
		{
			return ((::System::Void(*)(::PVOID, ::FHJPJMKIHBG))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_FILEINFOCHECKRESULT__CTOR_OFFSET))(this, filePickInfo);
		}
	};
}
