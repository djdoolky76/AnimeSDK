#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NCKLEONBIDH;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSARPEGGIOTALENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1897D010)
#define MOLEMOLE_UIABYSSARPEGGIOTALENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1897D050)
#define MOLEMOLE_UIABYSSARPEGGIOTALENTPAGECONTROLLER___C__ONUIOPEN_B__20_0_OFFSET UNITYSDK_OFFSET(0x1897D060)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioTalentPageController___c_TypeDefinitionIndex = 71482;

	class UIAbyssArpeggioTalentPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioTalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x41DE0);
		}
		static ::System::Comparison_1<::NCKLEONBIDH*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::NCKLEONBIDH*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssArpeggioTalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x41DE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOTALENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOTALENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpen_b__20_0(::NCKLEONBIDH* x, ::NCKLEONBIDH* y)
		{
			return ((::System::Int32(*)(::PVOID, ::NCKLEONBIDH*, ::NCKLEONBIDH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOTALENTPAGECONTROLLER___C__ONUIOPEN_B__20_0_OFFSET))(this, x, y);
		}
	};
}
