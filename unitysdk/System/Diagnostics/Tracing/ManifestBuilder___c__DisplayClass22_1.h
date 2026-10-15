#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER___C__DISPLAYCLASS22_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1CFFC0)
#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER___C__DISPLAYCLASS22_1__TRANSLATETOMANIFESTCONVENTION_B__0_OFFSET UNITYSDK_OFFSET(0x1C1D0160)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ManifestBuilder___c__DisplayClass22_1_TypeDefinitionIndex = 1708;

	template <typename T>
	class ManifestBuilder___c__DisplayClass22_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 i; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER___C__DISPLAYCLASS22_1_CTOR_OFFSET))(this);
		}

		::System::Void _TranslateToManifestConvention_b__0(::System::Char a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER___C__DISPLAYCLASS22_1__TRANSLATETOMANIFESTCONVENTION_B__0_OFFSET))(this, a1, a2);
		}

	};
}
