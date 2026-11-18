#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x147FEFC0)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x147FF000)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___C__SETDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0x147FF010)

namespace MoleMole
{
	inline static constexpr unsigned int UIRewardPreviewPopWindowController___c_TypeDefinitionIndex = 69227;

	class UIRewardPreviewPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRewardPreviewPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C610);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIRewardPreviewPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C618);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetData_b__14_0(::DEDDPKGLKHI_LODLFMBCLAH a, ::DEDDPKGLKHI_LODLFMBCLAH b)
		{
			return ((::System::Int32(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___C__SETDATA_B__14_0_OFFSET))(this, a, b);
		}
	};
}
