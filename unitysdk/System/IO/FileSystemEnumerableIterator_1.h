#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SearchOption.h"
namespace Microsoft::Win32::SafeHandles { class SafeFindHandle; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Directory_SearchData; }
namespace System::IO { template <typename T> class SearchResultHandler_1; }

namespace System::IO
{
	template <typename T>
	class FileSystemEnumerableIterator_1
	{
	public:
		::System::IO::SearchResultHandler_1<T>* _resultHandler; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* searchStack; // 0x0
		::System::IO::Directory_SearchData* searchData; // 0x0
		::System::String* searchCriteria; // 0x0
		::Microsoft::Win32::SafeHandles::SafeFindHandle* _hnd; // 0x0
		::System::Boolean needsParentPathDiscoveryDemand; // 0x0
		::System::Boolean empty; // 0x0
		::System::String* userPath; // 0x0
		::System::IO::SearchOption searchOption; // 0x0
		::System::String* fullPath; // 0x0
		::System::String* normalizedSearchPath; // 0x0
		::System::Boolean _checkHost; // 0x0
	};
}
