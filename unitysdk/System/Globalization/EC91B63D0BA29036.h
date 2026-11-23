#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_EC91B63D0BA29036__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D1E850)

namespace System::Globalization
{
	inline static constexpr unsigned int EC91B63D0BA29036_TypeDefinitionIndex = 10898;

	class EC91B63D0BA29036 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_FB472F406B89A0FF()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EC91B63D0BA29036_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_EC91B63D0BA29036__CCTOR_OFFSET))();
		}
	};
}
