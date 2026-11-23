#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class PopImageModel; }
namespace MiHoYo::SDK { class PopImage_B7D4E836171E0C5E; }
namespace MiHoYo::SDK { class PopImage_EE6D8A8F58A135DB; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_POPIMAGE_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3922C10)
#define MIHOYO_SDK_POPIMAGE_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3922140)
#define MIHOYO_SDK_POPIMAGE_B0E493EA594D3E80_OFFSET UNITYSDK_OFFSET(0x39230B0)
#define MIHOYO_SDK_POPIMAGE_B4556D8D2E57E578_OFFSET UNITYSDK_OFFSET(0x3922190)
#define MIHOYO_SDK_POPIMAGE_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x39227B0)
#define MIHOYO_SDK_POPIMAGE_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x3922CE0)
#define MIHOYO_SDK_POPIMAGE_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x39220F0)
#define MIHOYO_SDK_POPIMAGE_ED5EF2AFA79576F3_OFFSET UNITYSDK_OFFSET(0x39226B0)
#define MIHOYO_SDK_POPIMAGE_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x39220C0)
#define MIHOYO_SDK_POPIMAGE_FA7846ED11A55C92_OFFSET UNITYSDK_OFFSET(0x39228A0)
#define MIHOYO_SDK_POPIMAGE_FA8F5B2A601FE818_OFFSET UNITYSDK_OFFSET(0x3921FE0)
#define MIHOYO_SDK_POPIMAGE_FAE7C7B48F4D96C9_OFFSET UNITYSDK_OFFSET(0x39230C0)
#define MIHOYO_SDK_POPIMAGE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x39215E0)
#define MIHOYO_SDK_POPIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopImage_TypeDefinitionIndex = 12357;

	class PopImage : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::PopImage** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::PopImage**)Il2CppClass::FromTypeDefinitionIndex(PopImage_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* E0A0B1019FEB7BC0; // 0x60
		::UnityEngine::GameObject* A9936835854DFAB5; // 0x68
		::UnityEngine::GameObject* BCFA4804C7F77ED1; // 0x70
		::UnityEngine::GameObject* BD7B3603DF5162D7; // 0x78
		::UnityEngine::GameObject* EB036FB2B94E1DE6; // 0x80
		::UnityEngine::GameObject* AE084BAAA82C0697; // 0x88
		::UnityEngine::UI::Text* B7C8F6C1005826C8; // 0x90
		::UnityEngine::UI::Text* A9224FB7E4902D58; // 0x98
		::UnityEngine::GameObject* ED413FD9535D15D8; // 0xA0
		::UnityEngine::GameObject* B9D955A207109ED8; // 0xA8
		::UnityEngine::GameObject* FDCA6FD4CF275E21; // 0xB0
		::UnityEngine::GameObject* BE9F0683EEE90B99; // 0xB8
		::UnityEngine::GameObject* F999B68F5B1AAE75; // 0xC0
		::UnityEngine::GameObject* BF5CDEC73E542D4E; // 0xC8
		::UnityEngine::GameObject* F776316109653F23; // 0xD0
		::UnityEngine::GameObject* EFB4E3C67D6F04D9; // 0xD8
		::UnityEngine::GameObject* EEA852DC840314A2; // 0xE0
		::UnityEngine::GameObject* AF0A3552968DEB36; // 0xE8
		::MiHoYo::SDK::PopImage_B7D4E836171E0C5E* OnClose; // 0xF0
		::MiHoYo::SDK::PopImage_EE6D8A8F58A135DB* OnClickImage; // 0xF8
		::MiHoYo::SDK::PopImageModel* FC3481975A379AB3; // 0x100
		::System::Boolean B11077E64FB4D5E7; // 0x108

		::System::Void ED5EF2AFA79576F3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_ED5EF2AFA79576F3_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::System::Boolean F3A9AE2CE6C68915)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_BFA7961FF2AC380B_OFFSET))(F3A9AE2CE6C68915);
		}

		::System::Void FA7846ED11A55C92()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_FA7846ED11A55C92_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_E02954280801633F_OFFSET))(this);
		}

		::System::Void FA8F5B2A601FE818()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_FA8F5B2A601FE818_OFFSET))(this);
		}

		::MiHoYo::SDK::PopImageModel* B0E493EA594D3E80()
		{
			return ((::MiHoYo::SDK::PopImageModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_B0E493EA594D3E80_OFFSET))(this);
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void B4556D8D2E57E578(::UnityEngine::Texture2D* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_B4556D8D2E57E578_OFFSET))(this, F220A2D27F7C6B6C);
		}

		::System::Void FAE7C7B48F4D96C9(::MiHoYo::SDK::PopImageModel* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImageModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_FAE7C7B48F4D96C9_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_AB36E0EE549986E5_OFFSET))(this);
		}
	};
}
