#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Action_1; }

#define R3_INTERNAL_STUBS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3F5160)

namespace R3::Internal
{
	inline static constexpr unsigned int Stubs_TypeDefinitionIndex = 35975;

	class Stubs : public ::System::Object
	{
	public:
		static ::System::Action_1<::R3::Result>** StaticGet_HandleResult()
		{
			return (::System::Action_1<::R3::Result>**)UnitySDK::FromName("R3.Internal", "Stubs")->GetStaticField(0xA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_INTERNAL_STUBS_CCTOR_OFFSET))();
		}

	};
}
