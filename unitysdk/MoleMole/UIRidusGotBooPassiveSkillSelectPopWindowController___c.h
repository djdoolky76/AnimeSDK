#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJIFILPGMCF;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C5B9A0)
#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C5B9E0)
#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__GET_REMAINCOST_B__16_0_OFFSET UNITYSDK_OFFSET(0x15C5BA10)
#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__ONCLOSECLEARNEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x15C5BA30)
#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__REFRESHCOST_B__9_0_OFFSET UNITYSDK_OFFSET(0x15C5B9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPassiveSkillSelectPopWindowController___c_TypeDefinitionIndex = 48195;

	class UIRidusGotBooPassiveSkillSelectPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FJIFILPGMCF*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::FJIFILPGMCF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooPassiveSkillSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47280);
		}
		static ::System::Func_2<::FJIFILPGMCF*, ::System::Int32>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::FJIFILPGMCF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooPassiveSkillSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47288);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooPassiveSkillSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47290);
		}
		static ::System::Converter_2<::FJIFILPGMCF*, ::System::Int32>** StaticGet___9__18_0()
		{
			return (::System::Converter_2<::FJIFILPGMCF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooPassiveSkillSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshCost_b__9_0(::FJIFILPGMCF* x)
		{
			return ((::System::Int32(*)(::PVOID, ::FJIFILPGMCF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__REFRESHCOST_B__9_0_OFFSET))(this, x);
		}

		::System::Int32 _get_RemainCost_b__16_0(::FJIFILPGMCF* x)
		{
			return ((::System::Int32(*)(::PVOID, ::FJIFILPGMCF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__GET_REMAINCOST_B__16_0_OFFSET))(this, x);
		}

		::System::Int32 _OnCloseClearNew_b__18_0(::FJIFILPGMCF* x)
		{
			return ((::System::Int32(*)(::PVOID, ::FJIFILPGMCF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__ONCLOSECLEARNEW_B__18_0_OFFSET))(this, x);
		}
	};
}
