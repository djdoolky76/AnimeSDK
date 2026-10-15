#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { class ReferencePool_ReferenceCollection; }

namespace RPG
{
	template <typename T>
	class ReferencePool_ReferenceCollectionAccessor_1 : public ::System::Object
	{
	public:
		static ::RPG::ReferencePool_ReferenceCollection** StaticGet_Get()
		{
			return (::RPG::ReferencePool_ReferenceCollection**)UnitySDK::FromName("RPG", "ReferenceCollectionAccessor`1")->GetStaticField(0x0);
		}

	};
}
