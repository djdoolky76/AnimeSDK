#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Entity { class EntityEffectBlockRenderName; }
namespace System { class String; }

#define ABC_ENTITY_ENTITYEFFECTBLOCKRENDER_CHECKTAGMATCHES_OFFSET UNITYSDK_OFFSET(0x22CF100)
#define ABC_ENTITY_ENTITYEFFECTBLOCKRENDER_ISGIVENRENDERNAMEBLOCK_OFFSET UNITYSDK_OFFSET(0x22CF1E0)
#define ABC_ENTITY_ENTITYEFFECTBLOCKRENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Entity
{
	inline static constexpr unsigned int EntityEffectBlockRender_TypeDefinitionIndex = 7288;

	class EntityEffectBlockRender : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* Tags; // 0x10
		::Il2CppArray<::ABC::Entity::EntityEffectBlockRenderName*>* EntityEffectBlockRenderNames; // 0x18

		::System::Boolean IsGivenRenderNameBlock(::System::String* F79B4D487F303AB2, ::System::Boolean& F3F11EB6E8A5AC73, ::System::Boolean& AAB352B174776FFA)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + ABC_ENTITY_ENTITYEFFECTBLOCKRENDER_ISGIVENRENDERNAMEBLOCK_OFFSET))(this, F79B4D487F303AB2, F3F11EB6E8A5AC73, AAB352B174776FFA);
		}

		::System::Boolean CheckTagMatches(::System::String* AE57FF5179B75168)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_ENTITY_ENTITYEFFECTBLOCKRENDER_CHECKTAGMATCHES_OFFSET))(this, AE57FF5179B75168);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_ENTITYEFFECTBLOCKRENDER__CTOR_OFFSET))(this);
		}
	};
}
