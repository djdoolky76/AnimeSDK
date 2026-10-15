#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine { class Texture; }

#define OJHGNKEBPHO_DECJJPDKPLJ_OFFSET UNITYSDK_OFFSET(0xBEB7590)
#define OJHGNKEBPHO_HGOEOGBCLJG_OFFSET UNITYSDK_OFFSET(0xBEB7720)
#define OJHGNKEBPHO_HHJGEDJKENL_OFFSET UNITYSDK_OFFSET(0xBEB7690)
#define OJHGNKEBPHO_HMEOAFFMHNE_OFFSET UNITYSDK_OFFSET(0xBEB76D0)
#define OJHGNKEBPHO_IALLMNNHOJA_OFFSET UNITYSDK_OFFSET(0xBEB72A0)
#define OJHGNKEBPHO_PAGJNLMPDJI_OFFSET UNITYSDK_OFFSET(0xBEB7610)

inline static constexpr unsigned int OJHGNKEBPHO_TypeDefinitionIndex = 51804;

	class OJHGNKEBPHO : public ::System::Object
	{
	public:
		static ::UnityEngine::RenderTexture** StaticGet_BOLHAAMHGIM()
		{
			return (::UnityEngine::RenderTexture**)UnitySDK::FromName("", "OJHGNKEBPHO")->GetStaticField(0x54740);
		}

		static ::System::Boolean* StaticGet_JAENOPLFFHA()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OJHGNKEBPHO")->GetStaticField(0x12C40);
		}

		static ::UnityEngine::RenderTexture* IALLMNNHOJA()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + OJHGNKEBPHO_IALLMNNHOJA_OFFSET))();
		}

		static ::System::Void DECJJPDKPLJ()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJHGNKEBPHO_DECJJPDKPLJ_OFFSET))();
		}

		static ::System::UInt64 PAGJNLMPDJI(::UnityEngine::Texture* a1, ::UnityEngine::Bounds a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::UInt64(*)(::UnityEngine::Texture*, ::UnityEngine::Bounds, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OJHGNKEBPHO_PAGJNLMPDJI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void HHJGEDJKENL(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + OJHGNKEBPHO_HHJGEDJKENL_OFFSET))(a1);
		}

		static ::System::Void HMEOAFFMHNE(::UnityEngine::Terrain* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Terrain*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + OJHGNKEBPHO_HMEOAFFMHNE_OFFSET))(a1, a2);
		}

		static ::System::Void HGOEOGBCLJG(::UnityEngine::Terrain* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + OJHGNKEBPHO_HGOEOGBCLJG_OFFSET))(a1);
		}

	};
