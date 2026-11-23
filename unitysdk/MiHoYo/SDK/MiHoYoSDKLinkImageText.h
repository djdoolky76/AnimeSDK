#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoUI/HoYoText.h"
#include "unitysdk/UnityEngine/AAEF1EC408DB9A41.h"

class B8BEC2FAC7C5C948;
namespace BF500EC7044DC6A8 { class F7D6E5F587A36E43; }
namespace F5D9B2730D543D46 { class A9BDD7E8F3994CE6; }
namespace MiHoYo::SDK { class HrefClickEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_A343A4D94E620F1A_OFFSET UNITYSDK_OFFSET(0x29D79D0)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_A8D7884A47F0A107_OFFSET UNITYSDK_OFFSET(0x29D7C50)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_AE0208F3EBAF14D3_OFFSET UNITYSDK_OFFSET(0x29D8AA0)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_EAA713BBB14C543A_OFFSET UNITYSDK_OFFSET(0x29D8A90)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F0B685FC47CBCA26_OFFSET UNITYSDK_OFFSET(0x29D6C90)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F110D4EA3279C094_OFFSET UNITYSDK_OFFSET(0x29D6250)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F94DADE743FF8414_OFFSET UNITYSDK_OFFSET(0x29D69E0)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_FC09948235A61144_OFFSET UNITYSDK_OFFSET(0x29D7C30)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x29D8730)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x29D8860)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKLinkImageText_TypeDefinitionIndex = 15745;

	class MiHoYoSDKLinkImageText : public ::MiHoYo::SDK::HoYoUI::HoYoText
	{
	public:
		static ::System::Text::StringBuilder** StaticGet_AFEC25EE894AC33D()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKLinkImageText_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::B8BEC2FAC7C5C948** StaticGet_E922DA7578A0220B()
		{
			return (::B8BEC2FAC7C5C948**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKLinkImageText_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::B8BEC2FAC7C5C948** StaticGet_FCDAFB2D00AC3DF1()
		{
			return (::B8BEC2FAC7C5C948**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKLinkImageText_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::Sprite*>** StaticGet_F265AAE8F1D87CFE()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::Sprite*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKLinkImageText_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		::System::String* B9E7A140F5C5CC81; // 0x188
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* BCFCEF829F4070FF; // 0x190
		::System::Collections::Generic::List_1<::System::Int32>* BEC6A39812EDC45B; // 0x198
		::System::Collections::Generic::List_1<::System::Object*>* A5E97492C6CE7EB2; // 0x1A0
		::MiHoYo::SDK::HrefClickEvent* m_OnHrefClick; // 0x1A8
		::Il2CppArray<::UnityEngine::AAEF1EC408DB9A41>* FD05223B92257DDC; // 0x1B0
		::UnityEngine::AAEF1EC408DB9A41 B606369226B7083D; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT__CTOR_OFFSET))(this);
		}

		::System::String* A343A4D94E620F1A(::System::String* BB83557721B5F386)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_A343A4D94E620F1A_OFFSET))(this, BB83557721B5F386);
		}

		::System::Void AE0208F3EBAF14D3(::MiHoYo::SDK::HrefClickEvent* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HrefClickEvent*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_AE0208F3EBAF14D3_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FC09948235A61144()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_FC09948235A61144_OFFSET))(this);
		}

		::System::Void A8D7884A47F0A107()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_A8D7884A47F0A107_OFFSET))(this);
		}

		::System::Void F0B685FC47CBCA26(::BF500EC7044DC6A8::F7D6E5F587A36E43* FB83BD30328A585D)
		{
			return ((::System::Void(*)(::PVOID, ::BF500EC7044DC6A8::F7D6E5F587A36E43*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F0B685FC47CBCA26_OFFSET))(this, FB83BD30328A585D);
		}

		::System::Void F94DADE743FF8414(::F5D9B2730D543D46::A9BDD7E8F3994CE6* E7336521BA8945EE)
		{
			return ((::System::Void(*)(::PVOID, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F94DADE743FF8414_OFFSET))(this, E7336521BA8945EE);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::HrefClickEvent* EAA713BBB14C543A()
		{
			return ((::MiHoYo::SDK::HrefClickEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_EAA713BBB14C543A_OFFSET))(this);
		}

		::System::String* F110D4EA3279C094(::System::String* B056F275088E463C)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F110D4EA3279C094_OFFSET))(this, B056F275088E463C);
		}
	};
}
