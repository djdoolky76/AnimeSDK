#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriManaMovieMaterial.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CRIWARE_CRIMANAMOVIECONTROLLER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1F45C520)
#define CRIWARE_CRIMANAMOVIECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F45C8D0)
#define CRIWARE_CRIMANAMOVIECONTROLLER_ONMATERIALAVAILABLECHANGED_OFFSET UNITYSDK_OFFSET(0x1F45C840)
#define CRIWARE_CRIMANAMOVIECONTROLLER_RENDERTARGETMANUALFINALIZE_OFFSET UNITYSDK_OFFSET(0x1F45C7E0)
#define CRIWARE_CRIMANAMOVIECONTROLLER_RENDERTARGETMANUALSETUP_OFFSET UNITYSDK_OFFSET(0x1F45C590)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieController_TypeDefinitionIndex = 41102;

	class CriManaMovieController : public ::CriWare::CriManaMovieMaterial
	{
	public:
		::UnityEngine::Renderer* target; // 0xA0
		::System::Boolean useOriginalMaterial; // 0xA8
		::System::Byte _padding0[0x7];
		::UnityEngine::Material* originalMaterial; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Boolean RenderTargetManualSetup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_RENDERTARGETMANUALSETUP_OFFSET))(this);
		}

		::System::Void RenderTargetManualFinalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_RENDERTARGETMANUALFINALIZE_OFFSET))(this);
		}

		::System::Void OnMaterialAvailableChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_ONMATERIALAVAILABLECHANGED_OFFSET))(this);
		}

	};
}
