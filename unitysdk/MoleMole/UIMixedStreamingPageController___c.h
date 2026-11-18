#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FC5F80)
#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC5FC0)
#define MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__ONFINISHCHAT_B__42_0_OFFSET UNITYSDK_OFFSET(0x18FC5FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMixedStreamingPageController___c_TypeDefinitionIndex = 79223;

	class UIMixedStreamingPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMixedStreamingPageController___c_TypeDefinitionIndex)->GetStaticField(0x38FB0);
		}
		static ::System::Action** StaticGet___9__42_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMixedStreamingPageController___c_TypeDefinitionIndex)->GetStaticField(0x38FB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnFinishChat_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMIXEDSTREAMINGPAGECONTROLLER___C__ONFINISHCHAT_B__42_0_OFFSET))(this);
		}
	};
}
