#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define SYSTEM_LAZYHELPERS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2798A0)

namespace System
{
	class LazyHelpers : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_PUBLICATION_ONLY_SENTINEL()
		{
			return (::System::Object**)UnitySDK::FromName("System", "LazyHelpers")->GetStaticField(0x16610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LAZYHELPERS_CCTOR_OFFSET))();
		}

	};
}
