#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/B0F5C6D9FFA2FAED.h"
#include "unitysdk/System/Object.h"

namespace RayFire { class RFMaterial; }
namespace UnityEngine { class PhysicMaterial; }

#define RAYFIRE_RFMATERIALPRESETS_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0x296B2F0)
#define RAYFIRE_RFMATERIALPRESETS_DENSITY_OFFSET UNITYSDK_OFFSET(0x296B390)
#define RAYFIRE_RFMATERIALPRESETS_DESTRUCTIBLE_OFFSET UNITYSDK_OFFSET(0x296B430)
#define RAYFIRE_RFMATERIALPRESETS_DRAG_OFFSET UNITYSDK_OFFSET(0x296B4C0)
#define RAYFIRE_RFMATERIALPRESETS_MATERIAL_OFFSET UNITYSDK_OFFSET(0x296B550)
#define RAYFIRE_RFMATERIALPRESETS_SETMATERIALS_OFFSET UNITYSDK_OFFSET(0x296B840)
#define RAYFIRE_RFMATERIALPRESETS_SOLIDITY_OFFSET UNITYSDK_OFFSET(0x296BC20)
#define RAYFIRE_RFMATERIALPRESETS__CTOR_OFFSET UNITYSDK_OFFSET(0x296BCB0)

namespace RayFire
{
	inline static constexpr unsigned int RFMaterialPresets_TypeDefinitionIndex = 15471;

	class RFMaterialPresets : public ::System::Object
	{
	public:
		::RayFire::RFMaterial* heavyMetal; // 0x10
		::RayFire::RFMaterial* lightMetal; // 0x18
		::RayFire::RFMaterial* denseRock; // 0x20
		::RayFire::RFMaterial* porousRock; // 0x28
		::RayFire::RFMaterial* concrete; // 0x30
		::RayFire::RFMaterial* brick; // 0x38
		::RayFire::RFMaterial* glass; // 0x40
		::RayFire::RFMaterial* rubber; // 0x48
		::RayFire::RFMaterial* ice; // 0x50
		::RayFire::RFMaterial* wood; // 0x58

		::System::Single Drag(::E33DBE3D45A5731A::B0F5C6D9FFA2FAED A03F27B031ECBA9E)
		{
			return ((::System::Single(*)(::PVOID, ::E33DBE3D45A5731A::B0F5C6D9FFA2FAED))((::PBYTE)hIl2Cpp + RAYFIRE_RFMATERIALPRESETS_DRAG_OFFSET))(this, A03F27B031ECBA9E);
		}

		::System::Boolean Destructible(::E33DBE3D45A5731A::B0F5C6D9FFA2FAED A03F27B031ECBA9E)
		{
			return ((::System::Boolean(*)(::PVOID, ::E33DBE3D45A5731A::B0F5C6D9FFA2FAED))((::PBYTE)hIl2Cpp + RAYFIRE_RFMATERIALPRESETS_DESTRUCTIBLE_OFFSET))(this, A03F27B031ECBA9E);
		}

		::System::Single AngularDrag(::E33DBE3D45A5731A::B0F5C6D9FFA2FAED A03F27B031ECBA9E)
		{
			return ((::System::Single(*)(::PVOID, ::E33DBE3D45A5731A::B0F5C6D9FFA2FAED))((::PBYTE)hIl2Cpp + RAYFIRE_RFMATERIALPRESETS_ANGULARDRAG_OFFSET))(this, A03F27B031ECBA9E);
		}

		::System::Void SetMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFMATERIALPRESETS_SETMATERIALS_OFFSET))(this);
		}

		static ::UnityEngine::PhysicMaterial* Material(::E33DBE3D45A5731A::B0F5C6D9FFA2FAED A03F27B031ECBA9E)
		{
			return ((::UnityEngine::PhysicMaterial*(*)(::E33DBE3D45A5731A::B0F5C6D9FFA2FAED))((::PBYTE)hIl2Cpp + RAYFIRE_RFMATERIALPRESETS_MATERIAL_OFFSET))(A03F27B031ECBA9E);
		}

		::System::Single Density(::E33DBE3D45A5731A::B0F5C6D9FFA2FAED A03F27B031ECBA9E)
		{
			return ((::System::Single(*)(::PVOID, ::E33DBE3D45A5731A::B0F5C6D9FFA2FAED))((::PBYTE)hIl2Cpp + RAYFIRE_RFMATERIALPRESETS_DENSITY_OFFSET))(this, A03F27B031ECBA9E);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFMATERIALPRESETS__CTOR_OFFSET))(this);
		}

		::System::Int32 Solidity(::E33DBE3D45A5731A::B0F5C6D9FFA2FAED A03F27B031ECBA9E)
		{
			return ((::System::Int32(*)(::PVOID, ::E33DBE3D45A5731A::B0F5C6D9FFA2FAED))((::PBYTE)hIl2Cpp + RAYFIRE_RFMATERIALPRESETS_SOLIDITY_OFFSET))(this, A03F27B031ECBA9E);
		}
	};
}
