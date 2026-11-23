#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TapTap/Sdk/UIBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TapTap::Sdk { class UIManager; }

#define TAPTAP_SDK_UIELEMENT_A15CD8994619B742_OFFSET UNITYSDK_OFFSET(0x3343E30)
#define TAPTAP_SDK_UIELEMENT_A658A3D52982827C_OFFSET UNITYSDK_OFFSET(0x3F0F490)
#define TAPTAP_SDK_UIELEMENT_A68CF246F7FFC243_OFFSET UNITYSDK_OFFSET(0x3F0F5B0)
#define TAPTAP_SDK_UIELEMENT_A7DC35E57CB21550_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define TAPTAP_SDK_UIELEMENT_AC80F7BB8E48CE53_OFFSET UNITYSDK_OFFSET(0x3F0F420)
#define TAPTAP_SDK_UIELEMENT_B1C0357C32436D24_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define TAPTAP_SDK_UIELEMENT_B5F29BA688D59098_OFFSET UNITYSDK_OFFSET(0x165A410)
#define TAPTAP_SDK_UIELEMENT_B661FF2042834432_OFFSET UNITYSDK_OFFSET(0x165A480)
#define TAPTAP_SDK_UIELEMENT_B77F3EFEBAA11BAF_OFFSET UNITYSDK_OFFSET(0x171B7D0)
#define TAPTAP_SDK_UIELEMENT_BD0D5AA82C90F827_OFFSET UNITYSDK_OFFSET(0x171B7D0)
#define TAPTAP_SDK_UIELEMENT_E0310F896C3ECB31_OFFSET UNITYSDK_OFFSET(0x165A410)
#define TAPTAP_SDK_UIELEMENT_E544CBC1BA13F6BC_OFFSET UNITYSDK_OFFSET(0x3F0F380)
#define TAPTAP_SDK_UIELEMENT_E6331A25FEA91B9F_OFFSET UNITYSDK_OFFSET(0x3F0F500)
#define TAPTAP_SDK_UIELEMENT_E9AD345E01545F86_OFFSET UNITYSDK_OFFSET(0x3F0F3C0)
#define TAPTAP_SDK_UIELEMENT_F4403F534935E116_OFFSET UNITYSDK_OFFSET(0x3F0F400)
#define TAPTAP_SDK_UIELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x3F04340)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIElement_TypeDefinitionIndex = 20880;

	class UIElement : public ::TapTap::Sdk::UIBase
	{
	public:
		static ::System::Int32* StaticGet_F890DED414F1325E()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIElement_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* B9232A020A1B48A4; // 0x20
		::System::Action_2<::System::Int32, ::System::Object*>* A58A6DA0FD8844FB; // 0x28
		::System::Boolean AD0DC0039110EF29; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single BEFA84F61ED6BA11; // 0x34
		::TapTap::Sdk::UIManager* B652192C71ED7C58; // 0x38

		::TapTap::Sdk::UIManager* B5F29BA688D59098()
		{
			return ((::TapTap::Sdk::UIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_B5F29BA688D59098_OFFSET))(this);
		}

		::System::Void A15CD8994619B742()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_A15CD8994619B742_OFFSET))(this);
		}

		::System::Void A7DC35E57CB21550(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_A7DC35E57CB21550_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void F4403F534935E116(::System::Int32 B714679C324FF96E, ::System::Object* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_F4403F534935E116_OFFSET))(this, B714679C324FF96E, F220A2D27F7C6B6C);
		}

		::System::Collections::IEnumerator* AC80F7BB8E48CE53()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_AC80F7BB8E48CE53_OFFSET))(this);
		}

		::System::Single B77F3EFEBAA11BAF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_B77F3EFEBAA11BAF_OFFSET))(this);
		}

		::TapTap::Sdk::UIManager* E0310F896C3ECB31()
		{
			return ((::TapTap::Sdk::UIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_E0310F896C3ECB31_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* B1C0357C32436D24()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_B1C0357C32436D24_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__CTOR_OFFSET))(this);
		}

		::System::Single E544CBC1BA13F6BC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_E544CBC1BA13F6BC_OFFSET))(this);
		}

		::System::Single BD0D5AA82C90F827()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_BD0D5AA82C90F827_OFFSET))(this);
		}

		::System::Void B661FF2042834432(::TapTap::Sdk::UIManager* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::UIManager*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_B661FF2042834432_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single E9AD345E01545F86()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_E9AD345E01545F86_OFFSET))(this);
		}

		::System::Void A68CF246F7FFC243(::System::Action_2<::System::Int32, ::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_A68CF246F7FFC243_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void E6331A25FEA91B9F(::System::Action_2<::System::Int32, ::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_E6331A25FEA91B9F_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Collections::IEnumerator* A658A3D52982827C()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_A658A3D52982827C_OFFSET))(this);
		}
	};
}
