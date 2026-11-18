#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHJPJMKIHBG.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ExceptionInfo; }
namespace System { class String; }

#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFFILECOLLECTRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7E310)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_DiffFileCollectResult_TypeDefinitionIndex = 62281;

	class DownloadDiffPatcher_DiffFileCollectResult : public ::System::Object
	{
	public:
		::System::String* diffFilePath; // 0x10
		::FHJPJMKIHBG verifyFilePickInfo; // 0x18
		::Foundation::ExceptionInfo* exception; // 0x60
		::System::String* outFilePath; // 0x68
		::System::String* oldFilePath; // 0x70
		::System::Boolean isInPersist; // 0x78

		::System::Void _ctor(::FHJPJMKIHBG filePickInfo)
		{
			return ((::System::Void(*)(::PVOID, ::FHJPJMKIHBG))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFFILECOLLECTRESULT__CTOR_OFFSET))(this, filePickInfo);
		}
	};
}
