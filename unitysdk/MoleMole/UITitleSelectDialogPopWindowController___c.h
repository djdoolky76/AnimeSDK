#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJLIAOJCHIH;
class JFDMHLOBDGB;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B222E0)
#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__CLEARALLNEWMEDALMARK_B__28_0_OFFSET UNITYSDK_OFFSET(0x13B22350)
#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B22320)
#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__ONUPDATEMEDALDATA_B__24_0_OFFSET UNITYSDK_OFFSET(0x13B22330)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleSelectDialogPopWindowController___c_TypeDefinitionIndex = 79085;

	class UITitleSelectDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::CJLIAOJCHIH*, ::System::Collections::Generic::IEnumerable_1<::JFDMHLOBDGB*>*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::CJLIAOJCHIH*, ::System::Collections::Generic::IEnumerable_1<::JFDMHLOBDGB*>*>**)Il2CppClass::FromTypeDefinitionIndex(UITitleSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FBB0);
		}
		static ::System::Func_2<::CJLIAOJCHIH*, ::System::Int32>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::CJLIAOJCHIH*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UITitleSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FBB8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UITitleSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUpdateMedalData_b__24_0(::CJLIAOJCHIH* frameData)
		{
			return ((::System::Int32(*)(::PVOID, ::CJLIAOJCHIH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__ONUPDATEMEDALDATA_B__24_0_OFFSET))(this, frameData);
		}

		::System::Collections::Generic::IEnumerable_1<::JFDMHLOBDGB*>* _ClearAllNewMedalMark_b__28_0(::CJLIAOJCHIH* frameData)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::JFDMHLOBDGB*>*(*)(::PVOID, ::CJLIAOJCHIH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__CLEARALLNEWMEDALMARK_B__28_0_OFFSET))(this, frameData);
		}
	};
}
