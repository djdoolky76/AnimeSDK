#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RayFire { class RFDictionary; }
namespace RayFire { class RayfireRigid; }
namespace RayFire { class RayfireShatter; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define RAYFIRE_RFSURFACE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x2A10720)
#define RAYFIRE_RFSURFACE_SETINNERSUBID_1_OFFSET UNITYSDK_OFFSET(0x2A10780)
#define RAYFIRE_RFSURFACE_SETINNERSUBID_OFFSET UNITYSDK_OFFSET(0x2A108E0)
#define RAYFIRE_RFSURFACE_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x2A10A40)
#define RAYFIRE_RFSURFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x2A10CF0)

namespace RayFire
{
	inline static constexpr unsigned int RFSurface_TypeDefinitionIndex = 15919;

	class RFSurface : public ::System::Object
	{
	public:
		::UnityEngine::Material* innerMaterial; // 0x10
		::System::Single mappingScale; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* outerMaterial; // 0x20
		::System::Boolean needNewMat; // 0x28

		static ::System::Int32 SetInnerSubId(::RayFire::RayfireShatter* F2C7FF5A19F78852)
		{
			return ((::System::Int32(*)(::RayFire::RayfireShatter*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSURFACE_SETINNERSUBID_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void SetMaterial(::System::Collections::Generic::List_1<::RayFire::RFDictionary*>* F5B46DF8327871B7, ::Il2CppArray<::UnityEngine::Material*>* F38E38F60EF97100, ::RayFire::RFSurface* A6A0294071037952, ::UnityEngine::MeshRenderer* A8B7C65E60381FEC, ::System::Int32 FC300ADBDFF24726, ::System::Int32 FCB91636572348CF)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RFDictionary*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::RayFire::RFSurface*, ::UnityEngine::MeshRenderer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFSURFACE_SETMATERIAL_OFFSET))(F5B46DF8327871B7, F38E38F60EF97100, A6A0294071037952, A8B7C65E60381FEC, FC300ADBDFF24726, FCB91636572348CF);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFSURFACE__CTOR_OFFSET))(this);
		}

		static ::System::Int32 SetInnerSubId_1(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Int32(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSURFACE_SETINNERSUBID_1_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Void CopyFrom(::RayFire::RFSurface* A6A0294071037952)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFSurface*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSURFACE_COPYFROM_OFFSET))(this, A6A0294071037952);
		}
	};
}
