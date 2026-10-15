#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class IDisposable; }

#define R3_DISPOSABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C423770)

namespace R3
{
	class Disposable : public ::System::Object
	{
	public:
		static ::System::IDisposable** StaticGet_Empty()
		{
			return (::System::IDisposable**)UnitySDK::FromName("R3", "Disposable")->GetStaticField(0x9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_DISPOSABLE_CCTOR_OFFSET))();
		}

	};
}
