#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define RAYFIRE_RFSHATTERADVANCED_ISCOPLANAR_OFFSET UNITYSDK_OFFSET(0x29F7930)
#define RAYFIRE_RFSHATTERADVANCED__CCTOR_OFFSET UNITYSDK_OFFSET(0x29F85B0)
#define RAYFIRE_RFSHATTERADVANCED__CTOR_1_OFFSET UNITYSDK_OFFSET(0x29F8670)
#define RAYFIRE_RFSHATTERADVANCED__CTOR_OFFSET UNITYSDK_OFFSET(0x29F85F0)

namespace RayFire
{
	inline static constexpr unsigned int RFShatterAdvanced_TypeDefinitionIndex = 15834;

	class RFShatterAdvanced : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_planarThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RFShatterAdvanced_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 seed; // 0x10
		::System::Boolean decompose; // 0x14
		::System::Boolean removeCollinear; // 0x15
		::System::Boolean copyComponents; // 0x16
		::System::Boolean inputPrecap; // 0x17
		::System::Boolean outputPrecap; // 0x18
		::System::Boolean removeDoubleFaces; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 elementSizeThreshold; // 0x1C
		::System::Boolean inner; // 0x20
		::System::Boolean planar; // 0x21
		::System::Byte _padding1[0x2];
		::System::Int32 relativeSize; // 0x24
		::System::Single absoluteSize; // 0x28
		::System::Boolean vertexLimitation; // 0x2C
		::System::Byte _padding2[0x3];
		::System::Int32 vertexAmount; // 0x30

		::System::Void _ctor(::RayFire::RFShatterAdvanced* BADCD2C933ABE188)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFShatterAdvanced*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHATTERADVANCED__CTOR_OFFSET))(this, BADCD2C933ABE188);
		}

		static ::System::Boolean IsCoplanar(::UnityEngine::Mesh* FF762A0FE86505A5, ::System::Single B51A351BB86764FD)
		{
			return ((::System::Boolean(*)(::UnityEngine::Mesh*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHATTERADVANCED_ISCOPLANAR_OFFSET))(FF762A0FE86505A5, B51A351BB86764FD);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RFSHATTERADVANCED__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFSHATTERADVANCED__CTOR_1_OFFSET))(this);
		}
	};
}
