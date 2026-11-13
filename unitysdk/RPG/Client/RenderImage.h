#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class IBCIBKEIBOE;
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::UI { class RawImage; }

#define RPG_CLIENT_RENDERIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x19731B10)
#define RPG_CLIENT_RENDERIMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x19732150)
#define RPG_CLIENT_RENDERIMAGE_EMFICDEKDBK_OFFSET UNITYSDK_OFFSET(0x19731EF0)
#define RPG_CLIENT_RENDERIMAGE_INIT_OFFSET UNITYSDK_OFFSET(0x19731CB0)
#define RPG_CLIENT_RENDERIMAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19731C10)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderImage_TypeDefinitionIndex = 74718;

	class RenderImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* RenderTextureName; // 0x18
		::UnityEngine::UI::RawImage* JLNJJGLNDHI; // 0x20
		::IBCIBKEIBOE* AMLPJLDKLEL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERIMAGE_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERIMAGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERIMAGE_INIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int EMFICDEKDBK()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERIMAGE_EMFICDEKDBK_OFFSET))(this);
		}

	};
}
