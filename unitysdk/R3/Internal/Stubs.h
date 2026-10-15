#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define R3_INTERNAL_STUBS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4237E0)

namespace R3::Internal
{
	class Stubs : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_HandleResult()
		{
			return (::System::Action**)UnitySDK::FromName("R3.Internal", "Stubs")->GetStaticField(0xA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_INTERNAL_STUBS_CCTOR_OFFSET))();
		}

	};
}
