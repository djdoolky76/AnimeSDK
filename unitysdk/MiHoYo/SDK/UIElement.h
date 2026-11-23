#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIBase.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_UIELEMENT_B5F29BA688D59098_OFFSET UNITYSDK_OFFSET(0x17A62C0)
#define MIHOYO_SDK_UIELEMENT_B661FF2042834432_OFFSET UNITYSDK_OFFSET(0x16E1590)
#define MIHOYO_SDK_UIELEMENT_BDA49604088D84C2_OFFSET UNITYSDK_OFFSET(0x184C910)
#define MIHOYO_SDK_UIELEMENT_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x3A61680)
#define MIHOYO_SDK_UIELEMENT_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x3AE09F0)
#define MIHOYO_SDK_UIELEMENT_E0310F896C3ECB31_OFFSET UNITYSDK_OFFSET(0x3AE0840)
#define MIHOYO_SDK_UIELEMENT_E21F3BC02AF22C96_OFFSET UNITYSDK_OFFSET(0x3AE08E0)
#define MIHOYO_SDK_UIELEMENT_F7BA3006092A7B0C_OFFSET UNITYSDK_OFFSET(0x3AE0850)
#define MIHOYO_SDK_UIELEMENT_FBA8293A7F67CB26_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define MIHOYO_SDK_UIELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x3ACBC40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UIElement_TypeDefinitionIndex = 12182;

	class UIElement : public ::MiHoYo::SDK::UIBase
	{
	public:
		::System::Action* OnTab; // 0x20
		::System::Action* OnReturn; // 0x28
		::System::Action* OnEsc; // 0x30
		::System::Action* OnEnabled; // 0x38
		::System::String* B0355696392823C2; // 0x40
		::MiHoYo::SDK::UIManager* B652192C71ED7C58; // 0x48
		::System::Int32 E584023EF64C03CC; // 0x50
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* tabList; // 0x58

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_E02954280801633F_OFFSET))(this);
		}

		::MiHoYo::SDK::UIManager* B5F29BA688D59098()
		{
			return ((::MiHoYo::SDK::UIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_B5F29BA688D59098_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_BF13C91AD80643D2_OFFSET))(this);
		}

		::MiHoYo::SDK::UIManager* E0310F896C3ECB31()
		{
			return ((::MiHoYo::SDK::UIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_E0310F896C3ECB31_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void BDA49604088D84C2(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_BDA49604088D84C2_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void B661FF2042834432(::MiHoYo::SDK::UIManager* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UIManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_B661FF2042834432_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean F7BA3006092A7B0C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_F7BA3006092A7B0C_OFFSET))(this);
		}

		::System::Void E21F3BC02AF22C96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_E21F3BC02AF22C96_OFFSET))(this);
		}

		::System::String* FBA8293A7F67CB26()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_FBA8293A7F67CB26_OFFSET))(this);
		}
	};
}
