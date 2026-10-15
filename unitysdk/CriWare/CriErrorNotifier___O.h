#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace CriWare { class CriErrorNotifier_ErrorCallbackFunc; }

namespace CriWare
{
	class CriErrorNotifier___O : public ::System::Object
	{
	public:
		static ::CriWare::CriErrorNotifier_ErrorCallbackFunc** StaticGet__0___ErrorCallbackFromNative()
		{
			return (::CriWare::CriErrorNotifier_ErrorCallbackFunc**)UnitySDK::FromName("CriWare", "<>O")->GetStaticField(0x57370);
		}

	};
}
