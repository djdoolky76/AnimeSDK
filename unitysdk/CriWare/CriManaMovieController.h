#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriManaMovieMaterial.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CRIWARE_CRIMANAMOVIECONTROLLER_A3B06FBF76B3955B_OFFSET UNITYSDK_OFFSET(0x2AADB70)
#define CRIWARE_CRIMANAMOVIECONTROLLER_BF98083ABECF7444_OFFSET UNITYSDK_OFFSET(0x2AADC30)
#define CRIWARE_CRIMANAMOVIECONTROLLER_E102AD3B74FDA3A5_OFFSET UNITYSDK_OFFSET(0x2AADA90)
#define CRIWARE_CRIMANAMOVIECONTROLLER_E192657B25556063_OFFSET UNITYSDK_OFFSET(0x2AAD9E0)
#define CRIWARE_CRIMANAMOVIECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x2AAD9C0)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieController_TypeDefinitionIndex = 19086;

	class CriManaMovieController : public ::CriWare::CriManaMovieMaterial
	{
	public:
		::UnityEngine::Renderer* target; // 0xA8
		::System::Boolean useOriginalMaterial; // 0xB0
		::System::Byte _padding0[0x7];
		::UnityEngine::Material* F4EF6D3853F17C82; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void E192657B25556063()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_E192657B25556063_OFFSET))(this);
		}

		::System::Void A3B06FBF76B3955B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_A3B06FBF76B3955B_OFFSET))(this);
		}

		::System::Void E102AD3B74FDA3A5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_E102AD3B74FDA3A5_OFFSET))(this);
		}

		::System::Boolean BF98083ABECF7444()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_BF98083ABECF7444_OFFSET))(this);
		}
	};
}
