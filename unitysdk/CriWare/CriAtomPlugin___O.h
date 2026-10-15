#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace CriWare { class CriAtomPlugin_CallbackFromNativeDelegate; }

namespace CriWare
{
	class CriAtomPlugin___O : public ::System::Object
	{
	public:
		static ::CriWare::CriAtomPlugin_CallbackFromNativeDelegate** StaticGet__0___CallbackFromNative()
		{
			return (::CriWare::CriAtomPlugin_CallbackFromNativeDelegate**)UnitySDK::FromName("CriWare", "<>O")->GetStaticField(0x56E50);
		}

	};
}
