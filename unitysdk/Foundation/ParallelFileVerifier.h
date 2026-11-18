#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHJPJMKIHBG.h"
#include "unitysdk/Foundation/ParallelFileVerifier_Step.h"
#include "unitysdk/Foundation/ReportErrorCode.h"
#include "unitysdk/System/Object.h"

class BMHHNCFBFMM;
namespace Foundation { class ExceptionInfo; }
namespace Foundation { class IFileHashTask; }
namespace Foundation { class ParallelFileHash; }
namespace Foundation { class ParallelFileVerifier_FileInfoCheckResult; }
namespace Foundation { class ParallelHashTask; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Diagnostics { class Stopwatch; }

#define FOUNDATION_PARALLELFILEVERIFIER_ABORT_OFFSET UNITYSDK_OFFSET(0x116D0350)
#define FOUNDATION_PARALLELFILEVERIFIER_ADDFINISHRESULT_OFFSET UNITYSDK_OFFSET(0x116CE810)
#define FOUNDATION_PARALLELFILEVERIFIER_CHECKFINISHRESULTTASK_OFFSET UNITYSDK_OFFSET(0x116CCD20)
#define FOUNDATION_PARALLELFILEVERIFIER_CHECKFINISHRESULT_OFFSET UNITYSDK_OFFSET(0x116CD3B0)
#define FOUNDATION_PARALLELFILEVERIFIER_CHECKHASHFINISH_OFFSET UNITYSDK_OFFSET(0x116D0670)
#define FOUNDATION_PARALLELFILEVERIFIER_CREATEFASTCHECKTASK_OFFSET UNITYSDK_OFFSET(0x116CDB90)
#define FOUNDATION_PARALLELFILEVERIFIER_DONEXTSTEP_OFFSET UNITYSDK_OFFSET(0x116D0170)
#define FOUNDATION_PARALLELFILEVERIFIER_DOSLICE_CHECKFINISHRESULT_OFFSET UNITYSDK_OFFSET(0x116CCB60)
#define FOUNDATION_PARALLELFILEVERIFIER_DOSLICE_PREFASTCHECK_OFFSET UNITYSDK_OFFSET(0x116CD8D0)
#define FOUNDATION_PARALLELFILEVERIFIER_DUMP_OFFSET UNITYSDK_OFFSET(0x116CF5A0)
#define FOUNDATION_PARALLELFILEVERIFIER_FILEHASHCHECK_OFFSET UNITYSDK_OFFSET(0x116D0210)
#define FOUNDATION_PARALLELFILEVERIFIER_FINISHSTEP_OFFSET UNITYSDK_OFFSET(0x116CFE40)
#define FOUNDATION_PARALLELFILEVERIFIER_FINISH_OFFSET UNITYSDK_OFFSET(0x116CFC90)
#define FOUNDATION_PARALLELFILEVERIFIER_GETFILECHECKRESULT_OFFSET UNITYSDK_OFFSET(0x116CE130)
#define FOUNDATION_PARALLELFILEVERIFIER_GETPARALLELHASHTASK_OFFSET UNITYSDK_OFFSET(0x116CE9E0)
#define FOUNDATION_PARALLELFILEVERIFIER_ISFASTCHECKFAILED_OFFSET UNITYSDK_OFFSET(0x116CE930)
#define FOUNDATION_PARALLELFILEVERIFIER_ISSKIPCHECK_OFFSET UNITYSDK_OFFSET(0x116CE6C0)
#define FOUNDATION_PARALLELFILEVERIFIER_ONFILETASKFINISH_OFFSET UNITYSDK_OFFSET(0x116D03E0)
#define FOUNDATION_PARALLELFILEVERIFIER_PREFASTCHECK_OFFSET UNITYSDK_OFFSET(0x116CECB0)
#define FOUNDATION_PARALLELFILEVERIFIER_REGISTERSTATE_OFFSET UNITYSDK_OFFSET(0x116CFFE0)
#define FOUNDATION_PARALLELFILEVERIFIER_SETVERIFYRESULT_OFFSET UNITYSDK_OFFSET(0x116CD020)
#define FOUNDATION_PARALLELFILEVERIFIER_START_OFFSET UNITYSDK_OFFSET(0x116CF8F0)
#define FOUNDATION_PARALLELFILEVERIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0x116D0040)
#define FOUNDATION_PARALLELFILEVERIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x116D07E0)

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier_TypeDefinitionIndex = 50669;

	class ParallelFileVerifier : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>* errorList; // 0x10
		::System::Diagnostics::Stopwatch* sw; // 0x18
		::System::String* displayErrMsg_restartGame; // 0x20
		::Foundation::ParallelFileHash* _parallelFileHash; // 0x28
		::System::Collections::Concurrent::ConcurrentQueue_1<::System::Object*>* _finishResultList; // 0x30
		::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*>* onFinished; // 0x38
		::System::Collections::Generic::List_1<::FHJPJMKIHBG>* _badFiles; // 0x40
		::System::Collections::Generic::Queue_1<::System::Action*>* sliceQueueTask; // 0x48
		::BMHHNCFBFMM* timeSlice; // 0x50
		::System::Collections::Concurrent::ConcurrentQueue_1<::System::Object*>* _checkResultList; // 0x58
		::System::Collections::Generic::List_1<::Foundation::IFileHashTask*>* _FileHashCheckList; // 0x60
		::System::Action_1<::System::Single>* onUpdate; // 0x68
		::System::Collections::Generic::List_1<::FHJPJMKIHBG>* _checkFiles; // 0x70
		::System::Boolean isDone; // 0x78
		::System::Boolean verifySuccess; // 0x79
		::System::Byte _padding0[0x2];
		::Foundation::ParallelFileVerifier_Step _step; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER__CTOR_OFFSET))(this);
		}

		::System::Void DoSlice_CheckFinishResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_DOSLICE_CHECKFINISHRESULT_OFFSET))(this);
		}

		::System::Void CheckFinishResultTask(::Foundation::ParallelFileVerifier_FileInfoCheckResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ParallelFileVerifier_FileInfoCheckResult*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_CHECKFINISHRESULTTASK_OFFSET))(this, result);
		}

		::System::Void CheckFinishResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_CHECKFINISHRESULT_OFFSET))(this);
		}

		::System::Void DoSlice_PreFastCheck(::System::Collections::Generic::List_1<::FHJPJMKIHBG>* fileList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FHJPJMKIHBG>*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_DOSLICE_PREFASTCHECK_OFFSET))(this, fileList);
		}

		::System::Void CreateFastCheckTask(::FHJPJMKIHBG& checkFile)
		{
			return ((::System::Void(*)(::PVOID, ::FHJPJMKIHBG&))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_CREATEFASTCHECKTASK_OFFSET))(this, checkFile);
		}

		::System::Void PreFastCheck(::System::Collections::Generic::List_1<::FHJPJMKIHBG>* fileList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FHJPJMKIHBG>*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_PREFASTCHECK_OFFSET))(this, fileList);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_DUMP_OFFSET))(this);
		}

		::System::Void Start(::System::Collections::Generic::List_1<::FHJPJMKIHBG>* files)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FHJPJMKIHBG>*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_START_OFFSET))(this, files);
		}

		::System::Void RegisterState(::System::Action_1<::System::Single>* onUpdate, ::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*>* onFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*>*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_REGISTERSTATE_OFFSET))(this, onUpdate, onFinished);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_UPDATE_OFFSET))(this);
		}

		::System::Void FinishStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_FINISHSTEP_OFFSET))(this);
		}

		::System::Void DoNextStep(::Foundation::ParallelFileVerifier_Step s)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ParallelFileVerifier_Step))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_DONEXTSTEP_OFFSET))(this, s);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_ABORT_OFFSET))(this);
		}

		::System::Void FileHashCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_FILEHASHCHECK_OFFSET))(this);
		}

		::System::Void OnFileTaskFinish(::Foundation::IFileHashTask* file, ::System::UInt64 hash)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IFileHashTask*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_ONFILETASKFINISH_OFFSET))(this, file, hash);
		}

		::System::Boolean CheckHashFinish(::Foundation::ParallelFileVerifier_FileInfoCheckResult* fileInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ParallelFileVerifier_FileInfoCheckResult*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_CHECKHASHFINISH_OFFSET))(this, fileInfo);
		}

		::System::Boolean IsFastCheckFailed(::Foundation::ParallelFileVerifier_FileInfoCheckResult* fileInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ParallelFileVerifier_FileInfoCheckResult*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_ISFASTCHECKFAILED_OFFSET))(this, fileInfo);
		}

		::System::Boolean IsSkipCheck(::Foundation::ParallelFileVerifier_FileInfoCheckResult* fileInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ParallelFileVerifier_FileInfoCheckResult*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_ISSKIPCHECK_OFFSET))(this, fileInfo);
		}

		::System::Collections::Generic::List_1<::Foundation::ParallelHashTask*>* GetParallelHashTask(::Foundation::ParallelFileVerifier_FileInfoCheckResult* fileInfo)
		{
			return ((::System::Collections::Generic::List_1<::Foundation::ParallelHashTask*>*(*)(::PVOID, ::Foundation::ParallelFileVerifier_FileInfoCheckResult*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_GETPARALLELHASHTASK_OFFSET))(this, fileInfo);
		}

		::Foundation::ParallelFileVerifier_FileInfoCheckResult* GetFileCheckResult(::FHJPJMKIHBG fileInfo)
		{
			return ((::Foundation::ParallelFileVerifier_FileInfoCheckResult*(*)(::PVOID, ::FHJPJMKIHBG))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_GETFILECHECKRESULT_OFFSET))(this, fileInfo);
		}

		::System::Void SetVerifyResult(::Foundation::ParallelFileVerifier_FileInfoCheckResult* result, ::Foundation::ReportErrorCode errcode)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ParallelFileVerifier_FileInfoCheckResult*, ::Foundation::ReportErrorCode))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_SETVERIFYRESULT_OFFSET))(this, result, errcode);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_FINISH_OFFSET))(this);
		}

		::System::Void AddFinishResult(::Foundation::ParallelFileVerifier_FileInfoCheckResult* checkResult)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ParallelFileVerifier_FileInfoCheckResult*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_ADDFINISHRESULT_OFFSET))(this, checkResult);
		}
	};
}
