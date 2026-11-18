#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapRenderer;
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105F76B0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS64_0__INITCPUMATERIALCOLORS_B__0_OFFSET UNITYSDK_OFFSET(0x105F76C0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass64_0_TypeDefinitionIndex = 61119;

	class NPCCrowdAvatarManager___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* partGoInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitCPUMaterialColors_b__0(::NapRenderer* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::NapRenderer*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS64_0__INITCPUMATERIALCOLORS_B__0_OFFSET))(this, x);
		}
	};
}
