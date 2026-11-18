#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define OCTREE_NATIVE_NATIVESIZEAREAOUTRANGEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16F98CC0)

namespace Octree::Native
{
	inline static constexpr unsigned int NativeSizeAreaOutRangeException_TypeDefinitionIndex = 45566;

	class NativeSizeAreaOutRangeException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVESIZEAREAOUTRANGEEXCEPTION__CTOR_OFFSET))(this, msg);
		}
	};
}
