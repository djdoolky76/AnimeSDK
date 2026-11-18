#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLPDCNADIDI;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER___C__CACHEEXFILCONFIGS_B__70_0_OFFSET UNITYSDK_OFFSET(0x1285C790)
#define MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1285C740)
#define MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1285C780)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovResultPopWindowController___c_TypeDefinitionIndex = 40675;

	class UIZenkovResultPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::BLPDCNADIDI*>** StaticGet___9__70_0()
		{
			return (::System::Comparison_1<::BLPDCNADIDI*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4ECA0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovResultPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4ECA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CacheExfilConfigs_b__70_0(::BLPDCNADIDI* a, ::BLPDCNADIDI* b)
		{
			return ((::System::Int32(*)(::PVOID, ::BLPDCNADIDI*, ::BLPDCNADIDI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER___C__CACHEEXFILCONFIGS_B__70_0_OFFSET))(this, a, b);
		}
	};
}
