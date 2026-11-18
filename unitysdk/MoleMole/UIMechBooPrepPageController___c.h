#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OBCHINACLEL;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1961A840)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__CLICKSCRIPTACTION_B__15_4_OFFSET UNITYSDK_OFFSET(0x1961A890)
#define MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1961A880)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepPageController___c_TypeDefinitionIndex = 43051;

	class UIMechBooPrepPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::OBCHINACLEL*, ::System::Int32>** StaticGet___9__15_4()
		{
			return (::System::Func_2<::OBCHINACLEL*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x38F90);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMechBooPrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x38F98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ClickScriptAction_b__15_4(::OBCHINACLEL* config)
		{
			return ((::System::Int32(*)(::PVOID, ::OBCHINACLEL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPPAGECONTROLLER___C__CLICKSCRIPTACTION_B__15_4_OFFSET))(this, config);
		}
	};
}
