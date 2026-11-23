#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriManaMovieMaterial.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Graphic; }

#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_A3B06FBF76B3955B_OFFSET UNITYSDK_OFFSET(0x2AAD770)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_BF98083ABECF7444_OFFSET UNITYSDK_OFFSET(0x2AAD840)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_E102AD3B74FDA3A5_OFFSET UNITYSDK_OFFSET(0x2AAD670)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_E192657B25556063_OFFSET UNITYSDK_OFFSET(0x2AAD5B0)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2AAD530)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x2AAD9C0)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieControllerForUI_TypeDefinitionIndex = 19120;

	class CriManaMovieControllerForUI : public ::CriWare::CriManaMovieMaterial
	{
	public:
		::UnityEngine::UI::Graphic* target; // 0xA8
		::System::Boolean useOriginalMaterial; // 0xB0
		::System::Byte _padding0[0x7];
		::UnityEngine::Material* F4EF6D3853F17C82; // 0xB8

		::System::Void E192657B25556063()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLERFORUI_E192657B25556063_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLERFORUI__CTOR_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLERFORUI_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void E102AD3B74FDA3A5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLERFORUI_E102AD3B74FDA3A5_OFFSET))(this);
		}

		::System::Boolean BF98083ABECF7444()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLERFORUI_BF98083ABECF7444_OFFSET))(this);
		}

		::System::Void A3B06FBF76B3955B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLERFORUI_A3B06FBF76B3955B_OFFSET))(this);
		}
	};
}
