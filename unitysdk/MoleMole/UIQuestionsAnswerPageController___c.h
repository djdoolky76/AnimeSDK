#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186EECF0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186EED30)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__28_0_OFFSET UNITYSDK_OFFSET(0x186EED40)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__28_1_OFFSET UNITYSDK_OFFSET(0x186EED50)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__28_2_OFFSET UNITYSDK_OFFSET(0x186EED60)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerPageController___c_TypeDefinitionIndex = 52850;

	class UIQuestionsAnswerPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Transform*>** StaticGet___9__28_0()
		{
			return (::System::Action_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswerPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C5A0);
		}
		static ::System::Action** StaticGet___9__28_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswerPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C5A8);
		}
		static ::System::Action** StaticGet___9__28_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswerPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C5B0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIQuestionsAnswerPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C5B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTimeline_b__28_0(::UnityEngine::Transform* tr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__28_0_OFFSET))(this, tr);
		}

		::System::Void _PlayTimeline_b__28_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__28_1_OFFSET))(this);
		}

		::System::Void _PlayTimeline_b__28_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__PLAYTIMELINE_B__28_2_OFFSET))(this);
		}
	};
}
