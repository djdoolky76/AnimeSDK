#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D23D30)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D23D70)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__ONBANGBOOMICROWEBSUBMITMATERIALFINISH_B__61_0_OFFSET UNITYSDK_OFFSET(0x18D23D80)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__ONBANGBOOMICROWEBSUBMITMATERIALFINISH_B__61_1_OFFSET UNITYSDK_OFFSET(0x18D23D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRewardPageController___c_TypeDefinitionIndex = 70472;

	class UIBangbooMicroWebRewardPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRewardPageController___c_TypeDefinitionIndex)->GetStaticField(0x44DA0);
		}
		static ::System::Action** StaticGet___9__61_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRewardPageController___c_TypeDefinitionIndex)->GetStaticField(0x44DA8);
		}
		static ::System::Action_1<::UnityEngine::Transform*>** StaticGet___9__61_1()
		{
			return (::System::Action_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangbooMicroWebRewardPageController___c_TypeDefinitionIndex)->GetStaticField(0x44DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBangbooMicroWebSubmitMaterialFinish_b__61_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__ONBANGBOOMICROWEBSUBMITMATERIALFINISH_B__61_0_OFFSET))(this);
		}

		::System::Void _OnBangbooMicroWebSubmitMaterialFinish_b__61_1(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__ONBANGBOOMICROWEBSUBMITMATERIALFINISH_B__61_1_OFFSET))(this, root);
		}
	};
}
