#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define IRI_DECALCUSTOMDATA_INSTANCEDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x16525630)

inline static constexpr unsigned int IRI_DecalCustomData_InstanceData_TypeDefinitionIndex = 47171;

	struct alignas(4) IRI_DecalCustomData_InstanceData
	{
		::System::Int32 AtlasID; // 0x10
		::System::Single SmoothScale; // 0x14
		::System::Single NormalScale; // 0x18
		::UnityEngine::Vector4 TilingOffset; // 0x1C
		::UnityEngine::Color CustomColor; // 0x2C
		static ::IRI_DecalCustomData_InstanceData* StaticGet_DefaultValue()
		{
			return (::IRI_DecalCustomData_InstanceData*)UnitySDK::FromName("", "InstanceData")->GetStaticField(0x150C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IRI_DECALCUSTOMDATA_INSTANCEDATA_CCTOR_OFFSET))();
		}

	};
