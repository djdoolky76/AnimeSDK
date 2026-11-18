#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COCJHGGDBCA;
class GIGFDLPMNND;
namespace System { template <typename T1, typename T2> class Action_2; }

#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DCA1E0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10DCA220)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__UPDATE_B__24_0_OFFSET UNITYSDK_OFFSET(0x10DCA230)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__UPDATE_B__24_1_OFFSET UNITYSDK_OFFSET(0x10DCA2C0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__UPDATE_B__24_2_OFFSET UNITYSDK_OFFSET(0x10DCA340)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarSubSystem___c_TypeDefinitionIndex = 84813;

	class NPCAvatarSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x4C7F0);
		}
		static ::System::Action_2<::COCJHGGDBCA*, ::GIGFDLPMNND*>** StaticGet___9__24_0()
		{
			return (::System::Action_2<::COCJHGGDBCA*, ::GIGFDLPMNND*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x4C7F8);
		}
		static ::System::Action_2<::COCJHGGDBCA*, ::GIGFDLPMNND*>** StaticGet___9__24_1()
		{
			return (::System::Action_2<::COCJHGGDBCA*, ::GIGFDLPMNND*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x4C800);
		}
		static ::System::Action_2<::COCJHGGDBCA*, ::GIGFDLPMNND*>** StaticGet___9__24_2()
		{
			return (::System::Action_2<::COCJHGGDBCA*, ::GIGFDLPMNND*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x4C808);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__24_0(::COCJHGGDBCA* npcComponent, ::GIGFDLPMNND* materialComponent)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__UPDATE_B__24_0_OFFSET))(this, npcComponent, materialComponent);
		}

		::System::Void _Update_b__24_1(::COCJHGGDBCA* npcComponent, ::GIGFDLPMNND* materialComponent)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__UPDATE_B__24_1_OFFSET))(this, npcComponent, materialComponent);
		}

		::System::Void _Update_b__24_2(::COCJHGGDBCA* npcComponent, ::GIGFDLPMNND* materialComponent)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*, ::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__UPDATE_B__24_2_OFFSET))(this, npcComponent, materialComponent);
		}
	};
}
