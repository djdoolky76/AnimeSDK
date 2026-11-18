#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_UIGENERALTEXTITEMDETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1804C520)
#define MOLEMOLE_UIGENERALTEXTITEMDETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1804C560)
#define MOLEMOLE_UIGENERALTEXTITEMDETAILPOPWINDOWCONTROLLER___C__PROCESSTEXTITEMDETAIL_B__8_0_OFFSET UNITYSDK_OFFSET(0x1804C570)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTextItemDetailPopWindowController___c_TypeDefinitionIndex = 84408;

	class UIGeneralTextItemDetailPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::System::String*, ::System::String*>** StaticGet___9__8_0()
		{
			return (::System::Converter_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralTextItemDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EEA0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralTextItemDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EEA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTEXTITEMDETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTEXTITEMDETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _ProcessTextItemDetail_b__8_0(::System::String* x)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTEXTITEMDETAILPOPWINDOWCONTROLLER___C__PROCESSTEXTITEMDETAIL_B__8_0_OFFSET))(this, x);
		}
	};
}
