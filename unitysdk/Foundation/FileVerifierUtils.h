#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReportErrorCode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FHJPJMKIHBG.h"

namespace Foundation { class ExceptionInfo; }
namespace Foundation { class ParallelFileHash_Config; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_FILEVERIFIERUTILS_CREATEERRORINFO_OFFSET UNITYSDK_OFFSET(0x156DB760)
#define FOUNDATION_FILEVERIFIERUTILS_GETDEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x156DAE80)
#define FOUNDATION_FILEVERIFIERUTILS_GET_PARALLELFILEHASHCONFIG_OFFSET UNITYSDK_OFFSET(0x156DAE40)
#define FOUNDATION_FILEVERIFIERUTILS_ISHUAWEIDEVICE_OFFSET UNITYSDK_OFFSET(0x156DAFA0)
#define FOUNDATION_FILEVERIFIERUTILS_WRITEBADFILELIST_1_OFFSET UNITYSDK_OFFSET(0x156DB2F0)
#define FOUNDATION_FILEVERIFIERUTILS_WRITEBADFILELIST_OFFSET UNITYSDK_OFFSET(0x156DB050)

namespace Foundation
{
	inline static constexpr unsigned int FileVerifierUtils_TypeDefinitionIndex = 71231;

	class FileVerifierUtils : public ::System::Object
	{
	public:
		static ::Foundation::ParallelFileHash_Config** StaticGet__parallelFileHashConfig()
		{
			return (::Foundation::ParallelFileHash_Config**)Il2CppClass::FromTypeDefinitionIndex(FileVerifierUtils_TypeDefinitionIndex)->GetStaticField(0x43580);
		}

		static ::Foundation::ParallelFileHash_Config* get_ParallelFileHashConfig()
		{
			return ((::Foundation::ParallelFileHash_Config*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEVERIFIERUTILS_GET_PARALLELFILEHASHCONFIG_OFFSET))();
		}

		static ::System::Boolean IsHuaweiDevice()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEVERIFIERUTILS_ISHUAWEIDEVICE_OFFSET))();
		}

		static ::Foundation::ParallelFileHash_Config* GetDefaultConfig()
		{
			return ((::Foundation::ParallelFileHash_Config*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEVERIFIERUTILS_GETDEFAULTCONFIG_OFFSET))();
		}

		static ::System::Void WriteBadFileList(::System::Collections::Generic::List_1<::FHJPJMKIHBG>* badFiles)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::FHJPJMKIHBG>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEVERIFIERUTILS_WRITEBADFILELIST_OFFSET))(badFiles);
		}

		static ::System::Void WriteBadFileList_1(::System::Collections::Generic::IEnumerable_1<::System::String*>* badFiles)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEVERIFIERUTILS_WRITEBADFILELIST_1_OFFSET))(badFiles);
		}

		static ::Foundation::ExceptionInfo* CreateErrorInfo(::Foundation::ReportErrorCode code, ::System::String* errMsgToUpload, ::System::String* errMsgToDisplay, ::System::String* defaultDisplayErrMsg)
		{
			return ((::Foundation::ExceptionInfo*(*)(::Foundation::ReportErrorCode, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEVERIFIERUTILS_CREATEERRORINFO_OFFSET))(code, errMsgToUpload, errMsgToDisplay, defaultDisplayErrMsg);
		}
	};
}
