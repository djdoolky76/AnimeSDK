#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46128E11FD26499.h"

namespace System { template <typename T> class ADDF5F55A85EB950; }

#define HOUDINIENGINEUNITY_HEU_PARTDATA_F5628F8349D4A8A6_E58B14446C0461B7_OFFSET UNITYSDK_OFFSET(0x3897840)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3897C70)
#define HOUDINIENGINEUNITY_HEU_PARTDATA_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PartData_F5628F8349D4A8A6_TypeDefinitionIndex = 18084;

	class HEU_PartData_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::HEU_PartData_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::HoudiniEngineUnity::HEU_PartData_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(HEU_PartData_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::ADDF5F55A85EB950<::UnityEngine::E46128E11FD26499>** StaticGet_EBB8F324143C4E45()
		{
			return (::System::ADDF5F55A85EB950<::UnityEngine::E46128E11FD26499>**)Il2CppClass::FromTypeDefinitionIndex(HEU_PartData_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Int32 E58B14446C0461B7(::UnityEngine::E46128E11FD26499 B35BBBE7E39341A2, ::UnityEngine::E46128E11FD26499 AE40CAA6BBFEAD2C)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::E46128E11FD26499, ::UnityEngine::E46128E11FD26499))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARTDATA_F5628F8349D4A8A6_E58B14446C0461B7_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
	};
}
