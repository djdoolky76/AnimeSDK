#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;

#define SYSTEM_REFLECTION_MISSING_E4E885C4011A55C2_OFFSET UNITYSDK_OFFSET(0x3BB8640)
#define SYSTEM_REFLECTION_MISSING__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BB8680)
#define SYSTEM_REFLECTION_MISSING__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System::Reflection
{
	inline static constexpr unsigned int Missing_TypeDefinitionIndex = 11191;

	class Missing : public ::System::Object
	{
	public:
		static ::System::Reflection::Missing** StaticGet_EBF25B8A59BACBA3()
		{
			return (::System::Reflection::Missing**)Il2CppClass::FromTypeDefinitionIndex(Missing_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Void E4E885C4011A55C2(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MISSING_E4E885C4011A55C2_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MISSING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MISSING__CCTOR_OFFSET))();
		}
	};
}
