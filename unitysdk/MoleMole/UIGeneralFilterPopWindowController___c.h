#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GPPIBFNLGIL;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F0C6C0)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F0C700)
#define MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__28_0_OFFSET UNITYSDK_OFFSET(0x18F0C710)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFilterPopWindowController___c_TypeDefinitionIndex = 52841;

	class UIGeneralFilterPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralFilterPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AB60);
		}
		static ::System::Func_2<::GPPIBFNLGIL*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::GPPIBFNLGIL*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralFilterPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AB68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__28_0(::GPPIBFNLGIL* g)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPPIBFNLGIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__28_0_OFFSET))(this, g);
		}
	};
}
