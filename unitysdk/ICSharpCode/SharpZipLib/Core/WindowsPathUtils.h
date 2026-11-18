#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_WINDOWSPATHUTILS_DROPPATHROOT_OFFSET UNITYSDK_OFFSET(0x1FC8B1A0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_WINDOWSPATHUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC8B190)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int WindowsPathUtils_TypeDefinitionIndex = 6804;

	class WindowsPathUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_WINDOWSPATHUTILS__CTOR_OFFSET))(this);
		}

		static ::System::String* DropPathRoot(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_WINDOWSPATHUTILS_DROPPATHROOT_OFFSET))(path);
		}
	};
}
