#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define SYSTEM_LAZYHELPERS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D400540)

namespace System
{
	inline static constexpr unsigned int LazyHelpers_TypeDefinitionIndex = 157;

	class LazyHelpers : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_PUBLICATION_ONLY_SENTINEL()
		{
			return (::System::Object**)UnitySDK::FromName("System", "LazyHelpers")->GetStaticField(0x19B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LAZYHELPERS_CCTOR_OFFSET))();
		}

	};
}
