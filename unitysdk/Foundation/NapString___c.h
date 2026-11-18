#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class StringBuilder; }

#define FOUNDATION_NAPSTRING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7C690)
#define FOUNDATION_NAPSTRING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7C6D0)
#define FOUNDATION_NAPSTRING___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1EA7C6E0)

namespace Foundation
{
	inline static constexpr unsigned int NapString___c_TypeDefinitionIndex = 8141;

	class NapString___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NapString___c_TypeDefinitionIndex)->GetStaticField(0x6740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING___C__CTOR_OFFSET))(this);
		}

		::System::Text::StringBuilder* __cctor_b__42_0()
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING___C___CCTOR_B__42_0_OFFSET))(this);
		}
	};
}
