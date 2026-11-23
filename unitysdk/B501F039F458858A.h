#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A916C3A9658A83A2.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoVideoPlayer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define B501F039F458858A_B09E35DE5AFC798A_OFFSET UNITYSDK_OFFSET(0x2105CE0)
#define B501F039F458858A_EA1EE503010D3F18_OFFSET UNITYSDK_OFFSET(0x2106150)
#define B501F039F458858A_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x2106710)
#define B501F039F458858A_EE9A824D02F4AE06_OFFSET UNITYSDK_OFFSET(0x21064C0)
#define B501F039F458858A_F46034DE3D3A890D_OFFSET UNITYSDK_OFFSET(0x2106030)
#define B501F039F458858A_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x2105F50)
#define B501F039F458858A__CTOR_OFFSET UNITYSDK_OFFSET(0x1E431F0)

inline static constexpr unsigned int B501F039F458858A_TypeDefinitionIndex = 8665;

class B501F039F458858A : public ::A916C3A9658A83A2
{
public:
	::ABC::UI::MonoLocalizedTmp* FF11B1CB9B66A0F9; // 0x48
	::ABC::UI::MonoLocalizedTmp* BD9BF8C018FD3624; // 0x50
	::UnityEngine::UI::Image* E026843E67BEDF3D; // 0x58
	::UnityEngine::UI::Image* FB543329A075B8B0; // 0x60
	::ABC::UI::MonoLocalizedTmp* EACF5A4E62486FC8; // 0x68
	::UnityEngine::GameObject* A76FF710BEC04573; // 0x70
	::UnityEngine::GameObject* A4049267120D3200; // 0x78
	::ABC::UI::MonoVideoPlayer* FFBC787B99B10CD6; // 0x80
	::System::UInt32 A1849E722670960F; // 0x88

	::System::Void EC3033C0485522FB(::System::UInt32 BC8A36DD3606E794, ::System::UInt32 E14961743E675799, ::UnityEngine::Transform* EFE497ABF6BF98D8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + B501F039F458858A_EC3033C0485522FB_OFFSET))(this, BC8A36DD3606E794, E14961743E675799, EFE497ABF6BF98D8);
	}

	::System::Void EA1EE503010D3F18(::System::UInt32 BC8A36DD3606E794, ::System::UInt32 E14961743E675799)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + B501F039F458858A_EA1EE503010D3F18_OFFSET))(this, BC8A36DD3606E794, E14961743E675799);
	}

	::System::Void EE9A824D02F4AE06(::System::UInt32 E14961743E675799)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B501F039F458858A_EE9A824D02F4AE06_OFFSET))(this, E14961743E675799);
	}

	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + B501F039F458858A__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B501F039F458858A_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void F46034DE3D3A890D(::System::UInt32 E25957467AB6271C)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B501F039F458858A_F46034DE3D3A890D_OFFSET))(this, E25957467AB6271C);
	}

	::System::Void B09E35DE5AFC798A(::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + B501F039F458858A_B09E35DE5AFC798A_OFFSET))(this, F9E6A5ABE3F78299);
	}
};
