#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIWAREPS5_SAFENATIVEMETHODS_CRIFSUNITY_SETUP_PS5_OFFSET UNITYSDK_OFFSET(0x1757BED0)

namespace CriWare
{
	inline static constexpr unsigned int CriWarePS5_SafeNativeMethods_TypeDefinitionIndex = 40903;

	class CriWarePS5_SafeNativeMethods : public ::System::Object
	{
	public:
		static ::System::Void criFsUnity_Setup_PS5(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREPS5_SAFENATIVEMETHODS_CRIFSUNITY_SETUP_PS5_OFFSET))(a1);
		}

	};
}
