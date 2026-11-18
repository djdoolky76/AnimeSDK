#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJINAMHPGHO;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15636A80)
#define MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15636AC0)
#define MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0x15636AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseBangbooPageController___c_TypeDefinitionIndex = 81477;

	class UITowerDefenseBangbooPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseBangbooPageController___c_TypeDefinitionIndex)->GetStaticField(0x453A0);
		}
		static ::System::Comparison_1<::AJINAMHPGHO*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::AJINAMHPGHO*>**)Il2CppClass::FromTypeDefinitionIndex(UITowerDefenseBangbooPageController___c_TypeDefinitionIndex)->GetStaticField(0x453A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__8_0(::AJINAMHPGHO* a, ::AJINAMHPGHO* b)
		{
			return ((::System::Int32(*)(::PVOID, ::AJINAMHPGHO*, ::AJINAMHPGHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBANGBOOPAGECONTROLLER___C__REFRESHVIEW_B__8_0_OFFSET))(this, a, b);
		}
	};
}
