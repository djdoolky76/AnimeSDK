#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIVHSREWARDINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B247E0)
#define MOLEMOLE_UIVHSREWARDINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B24820)
#define MOLEMOLE_UIVHSREWARDINFO___C__ONPROCESS_B__3_0_OFFSET UNITYSDK_OFFSET(0x13B24830)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSRewardInfo___c_TypeDefinitionIndex = 76294;

	class UIVHSRewardInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIVHSRewardInfo___c_TypeDefinitionIndex)->GetStaticField(0x51970);
		}
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIVHSRewardInfo___c_TypeDefinitionIndex)->GetStaticField(0x51978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSREWARDINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSREWARDINFO___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnProcess_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSREWARDINFO___C__ONPROCESS_B__3_0_OFFSET))(this);
		}
	};
}
