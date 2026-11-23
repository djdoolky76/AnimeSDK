#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_SPRITEANIMATOR_E780DB786C65526D_OFFSET UNITYSDK_OFFSET(0x40BE7F0)
#define TMPRO_TMP_SPRITEANIMATOR_EACD26FFC6B4844E_OFFSET UNITYSDK_OFFSET(0x40BE600)
#define TMPRO_TMP_SPRITEANIMATOR_F05D2D93D0BE17E4_OFFSET UNITYSDK_OFFSET(0x40BE6C0)
#define TMPRO_TMP_SPRITEANIMATOR_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x40BE5B0)
#define TMPRO_TMP_SPRITEANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x40BE840)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteAnimator_TypeDefinitionIndex = 18239;

	class TMP_SpriteAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* AA90C39AFC09FE0B; // 0x20
		::TMPro::TMP_Text* F449A0FE8CC4D359; // 0x28

		::System::Void E780DB786C65526D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_E780DB786C65526D_OFFSET))(this);
		}

		::System::Collections::IEnumerator* EACD26FFC6B4844E(::System::Int32 FD20179BFA856129, ::TMPro::TMP_SpriteAsset* FBB25D464987D82F, ::System::Int32 BC37316376A565D9, ::System::Int32 F53169E3300C680F, ::System::Int32 A9BAB14A589915EC)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_EACD26FFC6B4844E_OFFSET))(this, FD20179BFA856129, FBB25D464987D82F, BC37316376A565D9, F53169E3300C680F, A9BAB14A589915EC);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void F05D2D93D0BE17E4(::System::Int32 FD20179BFA856129, ::TMPro::TMP_SpriteAsset* FBB25D464987D82F, ::System::Int32 BC37316376A565D9, ::System::Int32 F53169E3300C680F, ::System::Int32 A9BAB14A589915EC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR_F05D2D93D0BE17E4_OFFSET))(this, FD20179BFA856129, FBB25D464987D82F, BC37316376A565D9, F53169E3300C680F, A9BAB14A589915EC);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR__CTOR_OFFSET))(this);
		}
	};
}
