#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COCJHGGDBCA;
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105FB250)
#define NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105FB290)
#define NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER___C__UPDATE_B__2_0_OFFSET UNITYSDK_OFFSET(0x105FB2A0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCAccessoryAttachedManager___c_TypeDefinitionIndex = 56949;

	class NPCAccessoryAttachedManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::COCJHGGDBCA*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::COCJHGGDBCA*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAttachedManager___c_TypeDefinitionIndex)->GetStaticField(0x4B110);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAttachedManager___c_TypeDefinitionIndex)->GetStaticField(0x4B118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__2_0(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER___C__UPDATE_B__2_0_OFFSET))(this, npcComp);
		}
	};
}
