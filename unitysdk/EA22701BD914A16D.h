#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define EA22701BD914A16D_A1C5405346CBC83D_OFFSET UNITYSDK_OFFSET(0x2026870)
#define EA22701BD914A16D_A6E667C1711A6008_OFFSET UNITYSDK_OFFSET(0x1C1CAE0)
#define EA22701BD914A16D_AAB11D6219024A95_OFFSET UNITYSDK_OFFSET(0x2026970)
#define EA22701BD914A16D_B297601CFC5D6680_OFFSET UNITYSDK_OFFSET(0x2026820)
#define EA22701BD914A16D_B30BBBB2A9F54E27_OFFSET UNITYSDK_OFFSET(0x2026780)
#define EA22701BD914A16D_B565B7AC5132C4FB_OFFSET UNITYSDK_OFFSET(0x2026AF0)
#define EA22701BD914A16D_E0F9F50E1D30589C_OFFSET UNITYSDK_OFFSET(0x2026460)
#define EA22701BD914A16D_EED7E63B07564692_OFFSET UNITYSDK_OFFSET(0x20268E0)
#define EA22701BD914A16D_F6560574A6ACB0D1_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define EA22701BD914A16D_F96FA246ABE51569_OFFSET UNITYSDK_OFFSET(0x20266F0)
#define EA22701BD914A16D_FFFDDDA9B7FF728E_OFFSET UNITYSDK_OFFSET(0x20264B0)
#define EA22701BD914A16D__CCTOR_OFFSET UNITYSDK_OFFSET(0x2026AB0)
#define EA22701BD914A16D__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int EA22701BD914A16D_TypeDefinitionIndex = 8299;

class EA22701BD914A16D : public ::EFC4AEA2121EC272
{
public:
	static ::UnityEngine::Vector2* StaticGet_B3032CC97A04429E()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(EA22701BD914A16D_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::UnityEngine::RectTransform* E2AF587283A183ED; // 0x80
	::UnityEngine::GameObject* A5F281517F42CAE9; // 0x88
	::UnityEngine::GameObject* F97D17BCD2DEF46F; // 0x90
	::System::Boolean F54C1A107D19C621; // 0x98
	::System::Boolean E27D1ACFF68C86D5; // 0x99
	::System::Boolean A95E031C7D938476; // 0x9A

	::System::Void B30BBBB2A9F54E27(::System::Object* BE68C18FBFC68992, ::UnityEngine::Vector2 F14D7CA68702CAF8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EA22701BD914A16D_B30BBBB2A9F54E27_OFFSET))(this, BE68C18FBFC68992, F14D7CA68702CAF8);
	}

	::System::Void A1C5405346CBC83D(::System::Boolean E9203A1963F2CD87)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EA22701BD914A16D_A1C5405346CBC83D_OFFSET))(this, E9203A1963F2CD87);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EA22701BD914A16D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA22701BD914A16D__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* B297601CFC5D6680()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EA22701BD914A16D_B297601CFC5D6680_OFFSET))(this);
	}

	::System::Void F96FA246ABE51569()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA22701BD914A16D_F96FA246ABE51569_OFFSET))(this);
	}

	::System::Boolean B565B7AC5132C4FB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EA22701BD914A16D_B565B7AC5132C4FB_OFFSET))(this);
	}

	::System::Boolean F6560574A6ACB0D1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EA22701BD914A16D_F6560574A6ACB0D1_OFFSET))(this);
	}

	::System::Void AAB11D6219024A95(::UnityEngine::Vector2 FF9A37DE513AC35B)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EA22701BD914A16D_AAB11D6219024A95_OFFSET))(this, FF9A37DE513AC35B);
	}

	::System::Boolean EED7E63B07564692(::System::Boolean F1AACB3553F67303)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EA22701BD914A16D_EED7E63B07564692_OFFSET))(this, F1AACB3553F67303);
	}

	::System::Void E0F9F50E1D30589C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA22701BD914A16D_E0F9F50E1D30589C_OFFSET))(this);
	}

	::System::Void FFFDDDA9B7FF728E(::UnityEngine::Transform* EFE497ABF6BF98D8, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + EA22701BD914A16D_FFFDDDA9B7FF728E_OFFSET))(this, EFE497ABF6BF98D8, F9E6A5ABE3F78299);
	}

	::System::Boolean A6E667C1711A6008()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EA22701BD914A16D_A6E667C1711A6008_OFFSET))(this);
	}
};
