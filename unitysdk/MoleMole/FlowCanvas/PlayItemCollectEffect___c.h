#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x119184A0)
#define MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119184E0)
#define MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT___C__INVOKE_B__0_0_OFFSET UNITYSDK_OFFSET(0x119184F0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int PlayItemCollectEffect___c_TypeDefinitionIndex = 39336;

	class PlayItemCollectEffect___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PlayItemCollectEffect___c_TypeDefinitionIndex)->GetStaticField(0x41B40);
		}
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PlayItemCollectEffect___c_TypeDefinitionIndex)->GetStaticField(0x41B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Void _Invoke_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT___C__INVOKE_B__0_0_OFFSET))(this);
		}
	};
}
