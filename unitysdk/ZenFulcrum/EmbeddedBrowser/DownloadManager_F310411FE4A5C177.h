#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_F310411FE4A5C177__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DownloadManager_F310411FE4A5C177_TypeDefinitionIndex = 19419;

	class DownloadManager_F310411FE4A5C177 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x10
		::System::Int32 EBE1E85BB5F00BE9; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* F79B4D487F303AB2; // 0x20
		::System::String* EFF983A80A48BB2A; // 0x28
		::System::Int32 F7EF7A8033FFCB17; // 0x30
		::System::Int32 E11AF987C81C7047; // 0x34
		::System::String* E1C9D5D57F5AB79E; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_F310411FE4A5C177__CTOR_OFFSET))(this);
		}
	};
}
