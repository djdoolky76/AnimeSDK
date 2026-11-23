#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/E7B23211DE80AB79.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RFSLICE_AXIS_OFFSET UNITYSDK_OFFSET(0x2A23910)
#define RAYFIRE_RFSLICE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2A23980)
#define RAYFIRE_RFSLICE__CTOR_OFFSET UNITYSDK_OFFSET(0x2A239D0)

namespace RayFire
{
	inline static constexpr unsigned int RFSlice_TypeDefinitionIndex = 15940;

	class RFSlice : public ::System::Object
	{
	public:
		::E33DBE3D45A5731A::E7B23211DE80AB79 plane; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* sliceList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFSLICE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RayFire::RFSlice* BADCD2C933ABE188)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFSlice*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSLICE__CTOR_1_OFFSET))(this, BADCD2C933ABE188);
		}

		::UnityEngine::Vector3 Axis(::UnityEngine::Transform* F64C72FFEBBF3A94)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSLICE_AXIS_OFFSET))(this, F64C72FFEBBF3A94);
		}
	};
}
