#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeComponent.h"
#include "unitysdk/BDC595893C6EE433/B1CEBF4F391B01CE.h"

class BA8E322398FEDDAF_F97B389C173BBBF6;
class BE1E11B808A636AE;
class FD13E078C250FD12;
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class BoolParameter; }

#define ABC_CUSTOMRENDERPIPELINE_LENSFLAREABC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x28192D0)
#define ABC_CUSTOMRENDERPIPELINE_LENSFLAREABC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2819D20)
#define ABC_CUSTOMRENDERPIPELINE_LENSFLAREABC_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC_CUSTOMRENDERPIPELINE_LENSFLAREABC_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define ABC_CUSTOMRENDERPIPELINE_LENSFLAREABC__CTOR_OFFSET UNITYSDK_OFFSET(0x2819D80)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int LensFlareABC_TypeDefinitionIndex = 16884;

	class LensFlareABC : public ::UnityEngine::Rendering::VolumeComponent
	{
	public:
		static ::UnityEngine::Material** StaticGet_m_lensFlareMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(LensFlareABC_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::Rendering::BoolParameter* isOpened; // 0x38

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LENSFLAREABC_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void Initialize(::BA8E322398FEDDAF_F97B389C173BBBF6* FC8953071E7A75C8)
		{
			return ((::System::Void(*)(::BA8E322398FEDDAF_F97B389C173BBBF6*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LENSFLAREABC_INITIALIZE_OFFSET))(FC8953071E7A75C8);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LENSFLAREABC_ISACTIVE_OFFSET))(this);
		}

		static ::System::Void Execute(::BDC595893C6EE433::B1CEBF4F391B01CE E6CE7391633EEC68, ::FD13E078C250FD12* BBA37BE3F1DE1B88, ::BE1E11B808A636AE*& AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::BDC595893C6EE433::B1CEBF4F391B01CE, ::FD13E078C250FD12*, ::BE1E11B808A636AE*&))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LENSFLAREABC_EXECUTE_OFFSET))(E6CE7391633EEC68, BBA37BE3F1DE1B88, AFE8F10692F5139F);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LENSFLAREABC__CTOR_OFFSET))(this);
		}
	};
}
