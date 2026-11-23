#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK { class UIElement; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Transform; }

#define MIHOYO_SDK_UIMANAGER_A18B28016A892215_OFFSET UNITYSDK_OFFSET(0x3A82B50)
#define MIHOYO_SDK_UIMANAGER_A601690FE3B8134F_OFFSET UNITYSDK_OFFSET(0x3A81980)
#define MIHOYO_SDK_UIMANAGER_A885A10C19C54538_OFFSET UNITYSDK_OFFSET(0x3A82530)
#define MIHOYO_SDK_UIMANAGER_AB0D3EC11B25D9FB_OFFSET UNITYSDK_OFFSET(0x3A82A70)
#define MIHOYO_SDK_UIMANAGER_AB3519E46B6DD627_OFFSET UNITYSDK_OFFSET(0x3A82AE0)
#define MIHOYO_SDK_UIMANAGER_B10456EE796D56CF_OFFSET UNITYSDK_OFFSET(0x3A81770)
#define MIHOYO_SDK_UIMANAGER_B1310ED617FC9257_OFFSET UNITYSDK_OFFSET(0x3A82A10)
#define MIHOYO_SDK_UIMANAGER_B356286D2C6A5EA8_OFFSET UNITYSDK_OFFSET(0x3A82230)
#define MIHOYO_SDK_UIMANAGER_B4D17071833CB433_OFFSET UNITYSDK_OFFSET(0x3A82540)
#define MIHOYO_SDK_UIMANAGER_B7899F886507E4C5_OFFSET UNITYSDK_OFFSET(0x3A821C0)
#define MIHOYO_SDK_UIMANAGER_BC5599CD80909EE7_OFFSET UNITYSDK_OFFSET(0x3A822A0)
#define MIHOYO_SDK_UIMANAGER_BE258939A99B4B24_OFFSET UNITYSDK_OFFSET(0x3A81FD0)
#define MIHOYO_SDK_UIMANAGER_BF21230FDB86C27C_OFFSET UNITYSDK_OFFSET(0x3A81920)
#define MIHOYO_SDK_UIMANAGER_EEA5D6E8F4B2655A_OFFSET UNITYSDK_OFFSET(0x3A81A10)
#define MIHOYO_SDK_UIMANAGER_F5FA821676AF0AFB_OFFSET UNITYSDK_OFFSET(0x3A82930)
#define MIHOYO_SDK_UIMANAGER_F750F69A2BBDAA53_OFFSET UNITYSDK_OFFSET(0x3A82150)
#define MIHOYO_SDK_UIMANAGER_F7C5C4F3C8F125F5_OFFSET UNITYSDK_OFFSET(0x3A82740)
#define MIHOYO_SDK_UIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x3A828B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UIManager_TypeDefinitionIndex = 11948;

	class UIManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Font** StaticGet_F6C179B0E1903E2F()
		{
			return (::UnityEngine::Font**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_EAE0569B007CD057()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::System::Collections::Generic::List_1<::MiHoYo::SDK::UIElement*>* B3F817886A2E802B; // 0x20
		::MiHoYo::SDK::UIElement* FDE75D0D17DE0CB6; // 0x28
		::System::Boolean EA71AAB0346E293F; // 0x30

		::System::Void A885A10C19C54538()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_A885A10C19C54538_OFFSET))(this);
		}

		::System::Void B7899F886507E4C5(::System::String* B26FB45137C102C9, ::System::String* B513951677D1FD70)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_B7899F886507E4C5_OFFSET))(this, B26FB45137C102C9, B513951677D1FD70);
		}

		::System::Void A18B28016A892215(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_A18B28016A892215_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void AB0D3EC11B25D9FB(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_AB0D3EC11B25D9FB_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void AB3519E46B6DD627(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_AB3519E46B6DD627_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::MiHoYo::SDK::UIManager* EEA5D6E8F4B2655A(::System::String* F79B4D487F303AB2)
		{
			return ((::MiHoYo::SDK::UIManager*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_EEA5D6E8F4B2655A_OFFSET))(F79B4D487F303AB2);
		}

		static ::MiHoYo::SDK::UIManager* F5FA821676AF0AFB()
		{
			return ((::MiHoYo::SDK::UIManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_F5FA821676AF0AFB_OFFSET))();
		}

		::System::Boolean B1310ED617FC9257(::MiHoYo::SDK::UIElement* FDA7979CE82824CB)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::UIElement*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_B1310ED617FC9257_OFFSET))(this, FDA7979CE82824CB);
		}

		::System::Void BC5599CD80909EE7(::System::String* A840046D94B72E88)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_BC5599CD80909EE7_OFFSET))(this, A840046D94B72E88);
		}

		::System::Void F7C5C4F3C8F125F5(::UnityEngine::Transform* A86A90C31A146E9C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_F7C5C4F3C8F125F5_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Void BF21230FDB86C27C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_BF21230FDB86C27C_OFFSET))(this);
		}

		::System::Void B4D17071833CB433()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_B4D17071833CB433_OFFSET))(this);
		}

		::System::Void B10456EE796D56CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_B10456EE796D56CF_OFFSET))(this);
		}

		::System::Void B356286D2C6A5EA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_B356286D2C6A5EA8_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void BE258939A99B4B24()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_BE258939A99B4B24_OFFSET))(this);
		}

		::System::Void F750F69A2BBDAA53(::System::String* B26FB45137C102C9, ::System::String* B513951677D1FD70)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_F750F69A2BBDAA53_OFFSET))(this, B26FB45137C102C9, B513951677D1FD70);
		}

		::System::Void A601690FE3B8134F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGER_A601690FE3B8134F_OFFSET))(this);
		}
	};
}
