#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIWAREPS5_SAFENATIVEMETHODS_CRIFSUNITY_SETUP_PS5_OFFSET UNITYSDK_OFFSET(0x16737C30)

namespace CriWare
{
	class CriWarePS5_SafeNativeMethods : public ::System::Object
	{
	public:
		static ::System::Void criFsUnity_Setup_PS5(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREPS5_SAFENATIVEMETHODS_CRIFSUNITY_SETUP_PS5_OFFSET))(a1);
		}

	};
}
