#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFShard; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshFilter; }

#define RAYFIRE_RFTRIANGLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x295BBA0)
#define RAYFIRE_RFTRIANGLE_SETTRIANGLES_OFFSET UNITYSDK_OFFSET(0x295BC20)
#define RAYFIRE_RFTRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x295C250)

namespace RayFire
{
	inline static constexpr unsigned int RFTriangle_TypeDefinitionIndex = 15436;

	class RFTriangle : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::Single area; // 0x14
		::UnityEngine::Vector3 normal; // 0x18
		::UnityEngine::Vector3 pos; // 0x24
		::System::Collections::Generic::List_1<::System::Int32>* neibs; // 0x30

		static ::System::Void SetTriangles(::RayFire::RFShard* A9B58EA01420571C, ::UnityEngine::MeshFilter* FA58A598BB9C8553)
		{
			return ((::System::Void(*)(::RayFire::RFShard*, ::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + RAYFIRE_RFTRIANGLE_SETTRIANGLES_OFFSET))(A9B58EA01420571C, FA58A598BB9C8553);
		}

		static ::System::Void Clear(::RayFire::RFShard* A9B58EA01420571C)
		{
			return ((::System::Void(*)(::RayFire::RFShard*))((::PBYTE)hIl2Cpp + RAYFIRE_RFTRIANGLE_CLEAR_OFFSET))(A9B58EA01420571C);
		}

		::System::Void _ctor(::System::Int32 EA7CFF2710F5BB56, ::System::Single B32A2FC0F9EB70AF, ::UnityEngine::Vector3 F25C12EB264A416C, ::UnityEngine::Vector3 E26AE3C940A9D0CA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RFTRIANGLE__CTOR_OFFSET))(this, EA7CFF2710F5BB56, B32A2FC0F9EB70AF, F25C12EB264A416C, E26AE3C940A9D0CA);
		}
	};
}
