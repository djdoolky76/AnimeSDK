#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KGMDCDKMBEJ_HKEFCDFAGCF;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C757B0)
#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C757F0)
#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__ONINFO_B__19_2_OFFSET UNITYSDK_OFFSET(0x17C75800)

namespace MoleMole
{
	inline static constexpr unsigned int UIMaincityMiniGameChildWindowController___c_TypeDefinitionIndex = 61942;

	class UIMaincityMiniGameChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityMiniGameChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47160);
		}
		static ::System::Converter_2<::System::Object*, ::System::Int32>** StaticGet___9__19_2()
		{
			return (::System::Converter_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityMiniGameChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47168);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnInfo_b__19_2(::KGMDCDKMBEJ_HKEFCDFAGCF* t)
		{
			return ((::System::Int32(*)(::PVOID, ::KGMDCDKMBEJ_HKEFCDFAGCF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__ONINFO_B__19_2_OFFSET))(this, t);
		}
	};
}
