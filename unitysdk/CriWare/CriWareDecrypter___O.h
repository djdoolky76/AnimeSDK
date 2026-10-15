#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace CriWare { class CriWareDecrypter_CallbackFromNativeDelegate; }

namespace CriWare
{
	class CriWareDecrypter___O : public ::System::Object
	{
	public:
		static ::CriWare::CriWareDecrypter_CallbackFromNativeDelegate** StaticGet__0___CallbackFromNative()
		{
			return (::CriWare::CriWareDecrypter_CallbackFromNativeDelegate**)UnitySDK::FromName("CriWare", "<>O")->GetStaticField(0x58930);
		}

	};
}
