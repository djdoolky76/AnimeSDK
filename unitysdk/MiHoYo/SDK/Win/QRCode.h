#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/A32676FCB736C8E8.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class RawImage; }

#define MIHOYO_SDK_WIN_QRCODE_B06F8F2D7562C4CC_OFFSET UNITYSDK_OFFSET(0x3A0EE90)
#define MIHOYO_SDK_WIN_QRCODE_B4958454E4996DC5_OFFSET UNITYSDK_OFFSET(0x3A0EB80)
#define MIHOYO_SDK_WIN_QRCODE_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x3A0F320)
#define MIHOYO_SDK_WIN_QRCODE_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A0F260)
#define MIHOYO_SDK_WIN_QRCODE_FF0274BCC0F16D2B_OFFSET UNITYSDK_OFFSET(0x3A0ED50)
#define MIHOYO_SDK_WIN_QRCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x3A0F390)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int QRCode_TypeDefinitionIndex = 12753;

	class QRCode : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* url; // 0x20
		::UnityEngine::UI::RawImage* image; // 0x28
		::UnityEngine::Texture2D* encoded; // 0x30
		::System::String* strLevel; // 0x38

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_QRCODE_E02954280801633F_OFFSET))(this);
		}

		::System::Void B06F8F2D7562C4CC(::System::String* E0C0689B1CEBE48C)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_QRCODE_B06F8F2D7562C4CC_OFFSET))(this, E0C0689B1CEBE48C);
		}

		static ::Il2CppArray<::UnityEngine::A32676FCB736C8E8>* FF0274BCC0F16D2B(::System::String* F01FF7C47CCDB5DD, ::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D)
		{
			return ((::Il2CppArray<::UnityEngine::A32676FCB736C8E8>*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_QRCODE_FF0274BCC0F16D2B_OFFSET))(F01FF7C47CCDB5DD, F5EF7E29767E03BF, F0961C93719F7B0D);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_QRCODE_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_QRCODE__CTOR_OFFSET))(this);
		}

		::System::Void B4958454E4996DC5(::System::String* B960AC235824C6C8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_QRCODE_B4958454E4996DC5_OFFSET))(this, B960AC235824C6C8);
		}
	};
}
