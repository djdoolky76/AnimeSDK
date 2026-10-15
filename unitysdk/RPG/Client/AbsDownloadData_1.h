#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"
class CDKEBLNOEPH;
class HGDELEAHIJO;
class HJEIEIFLDGN;
namespace RPG::Client { template <typename T> class DelayList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int AbsDownloadData_1_TypeDefinitionIndex = 59445;

	template <typename T>
	class AbsDownloadData_1 : public ::System::Object
	{
	public:
		::HJEIEIFLDGN* _LocalBlockVersion; // 0x0
		::HJEIEIFLDGN* _ServerBlockVersionWithCache; // 0x0
		::CDKEBLNOEPH* _BaseAbsolutePath; // 0x0
		::HJEIEIFLDGN* _LocalBundleVersion; // 0x0
		::HJEIEIFLDGN* _ServerBundleVersionWithCache; // 0x0
		::System::String* _LocalRootPath; // 0x0
		::RPG::Client::DelayList_1<::HGDELEAHIJO*>* _BlockItems_k__BackingField; // 0x0
		::System::Boolean _NeedDownloadBlocks_k__BackingField; // 0x0
		::System::Collections::Generic::HashSet_1<::System::String*>* BadList; // 0x0
		::System::Collections::Generic::HashSet_1<::RPG::Client::ByteHash16>* InPatchBlockList; // 0x0
		T _ServerBlockIndex; // 0x0
		T _StreamBlockIndex; // 0x0
		T _PersistBlockIndex; // 0x0
	};
}
