#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJOKKBDDGNN;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__BUILDCUSTOMLISTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x16492E60)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16492E10)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16492E50)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_B__12_0_OFFSET UNITYSDK_OFFSET(0x16493010)
#define MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_B__12_1_OFFSET UNITYSDK_OFFSET(0x16493030)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelPageController___c_TypeDefinitionIndex = 51643;

	class UIRABInLevelPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::JJOKKBDDGNN*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::JJOKKBDDGNN*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x48C80);
		}
		static ::System::Func_2<::JJOKKBDDGNN*, ::System::Boolean>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::JJOKKBDDGNN*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x48C88);
		}
		static ::System::Comparison_1<::JJOKKBDDGNN*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::JJOKKBDDGNN*>**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x48C90);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRABInLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x48C98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildCustomLists_b__3_0(::JJOKKBDDGNN* a, ::JJOKKBDDGNN* b)
		{
			return ((::System::Int32(*)(::PVOID, ::JJOKKBDDGNN*, ::JJOKKBDDGNN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__BUILDCUSTOMLISTS_B__3_0_OFFSET))(this, a, b);
		}

		::System::Boolean _OnGamepadModuleTryOverrideNextSelectIndex_b__12_0(::JJOKKBDDGNN* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJOKKBDDGNN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_B__12_0_OFFSET))(this, s);
		}

		::System::Boolean _OnGamepadModuleTryOverrideNextSelectIndex_b__12_1(::JJOKKBDDGNN* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJOKKBDDGNN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELPAGECONTROLLER___C__ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_B__12_1_OFFSET))(this, s);
		}
	};
}
