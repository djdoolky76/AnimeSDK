#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A916C3A9658A83A2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
class FDB5A51D6BDA9D18;
namespace ABC::UI { class MonoAvatarIcon; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define B4E646FF529296CD_A4403AB2453709A1_OFFSET UNITYSDK_OFFSET(0x1D7F8C0)
#define B4E646FF529296CD_BF4EEFA752089CA2_OFFSET UNITYSDK_OFFSET(0x1D7F450)
#define B4E646FF529296CD_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1D7FBB0)
#define B4E646FF529296CD_F4DEF48CD4F4427D_OFFSET UNITYSDK_OFFSET(0x1D7FA30)
#define B4E646FF529296CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7FF90)
#define B4E646FF529296CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FFD0)

inline static constexpr unsigned int B4E646FF529296CD_TypeDefinitionIndex = 10124;

class B4E646FF529296CD : public ::A916C3A9658A83A2
{
public:
	static ::System::Single* StaticGet_B52720D03E146FA3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(B4E646FF529296CD_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::UnityEngine::UI::Image* BDD4F9D1C2F749C1; // 0x48
	::UnityEngine::UI::Image* AF033AC34E5E442D; // 0x50
	::ABC::UI::MonoAvatarIcon* A288C6EF90A27882; // 0x58
	::UnityEngine::GameObject* A4A5C4C3716F3475; // 0x60
	::ABC::UI::MonoLocalizedTmp* B75BAEB30FDE56D9; // 0x68
	::UnityEngine::GameObject* F2ED899B99AAD5D6; // 0x70
	::ABC::UI::MonoLocalizedTmp* AD48B173E07DBB1B; // 0x78

	::System::Void _ctor(::UnityEngine::GameObject* BC63F4052E4478D7, ::UnityEngine::RectTransform* B854E321B3FDB646)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + B4E646FF529296CD__CTOR_OFFSET))(this, BC63F4052E4478D7, B854E321B3FDB646);
	}

	::System::Void A4403AB2453709A1(::AB642D1382756991* E3E3158AF5700E52)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + B4E646FF529296CD_A4403AB2453709A1_OFFSET))(this, E3E3158AF5700E52);
	}

	::System::Void F4DEF48CD4F4427D(::System::UInt32 FB1F1DEFDE9B3223, ::System::UInt32 E55921BC6C3AFAD3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + B4E646FF529296CD_F4DEF48CD4F4427D_OFFSET))(this, FB1F1DEFDE9B3223, E55921BC6C3AFAD3);
	}

	::System::Void BF4EEFA752089CA2(::UnityEngine::Vector3 A7D010719A57D5B4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + B4E646FF529296CD_BF4EEFA752089CA2_OFFSET))(this, A7D010719A57D5B4);
	}

	::System::Void EC3033C0485522FB(::FDB5A51D6BDA9D18* F350A27822A17EC8, ::AB642D1382756991* E3E3158AF5700E52, ::UnityEngine::Vector2 A7D010719A57D5B4, ::System::UInt32 FB1F1DEFDE9B3223, ::System::UInt32 E55921BC6C3AFAD3)
	{
		return ((::System::Void(*)(::PVOID, ::FDB5A51D6BDA9D18*, ::AB642D1382756991*, ::UnityEngine::Vector2, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + B4E646FF529296CD_EC3033C0485522FB_OFFSET))(this, F350A27822A17EC8, E3E3158AF5700E52, A7D010719A57D5B4, FB1F1DEFDE9B3223, E55921BC6C3AFAD3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B4E646FF529296CD__CCTOR_OFFSET))();
	}
};
