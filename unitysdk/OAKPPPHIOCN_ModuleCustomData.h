#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
class OAKPPPHIOCN_ItemData;

#define OAKPPPHIOCN_MODULECUSTOMDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD2AFA0)
#define OAKPPPHIOCN_MODULECUSTOMDATA_GET_CUSTOMUVTILLING_OFFSET UNITYSDK_OFFSET(0x22A10)
#define OAKPPPHIOCN_MODULECUSTOMDATA_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x22A80)

inline static constexpr unsigned int OAKPPPHIOCN_ModuleCustomData_TypeDefinitionIndex = 48866;

	struct alignas(4) OAKPPPHIOCN_ModuleCustomData
	{
		::System::Boolean IfEnableDeform; // 0x10
		::System::Boolean IfEnableStretch; // 0x11
		::System::Boolean IfUseCustomScale; // 0x12
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 CustomScale; // 0x14
		::System::Boolean IfUseCustomTransform; // 0x20
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 CustomTransform; // 0x24
		::System::Boolean IfUseCustomColor; // 0x30
		::System::Boolean IfUseCustomAngle; // 0x31
		::System::Byte _padding2[0x2];
		::System::Single CustomAngle; // 0x34
		::UnityEngine::Color CustomColor; // 0x38
		::System::Int32 CustomAtlasID; // 0x48
		::System::Int32 CustomWSBlendAtlasID; // 0x4C
		::System::Boolean IfShowDebugData; // 0x50
		::System::Byte _padding3[0x3];
		::System::Single VertexOffsetXZ1; // 0x54
		::System::Single VertexOffsetXZ2; // 0x58
		::System::Single VertexOffsetYZ1; // 0x5C
		::System::Single VertexOffsetYZ2; // 0x60
		::System::Single VertexOffsetXY1; // 0x64
		::System::Single VertexOffsetYX1; // 0x68
		::System::Boolean IfSkipNormalFix; // 0x6C
		::System::Boolean IfForceUpNormal; // 0x6D
		::System::Byte _padding4[0x2];
		::System::Single UVOffset; // 0x70
		::System::Single MainUVScale; // 0x74
		::System::Single LeftTopOffsetZ; // 0x78
		::System::Single RightTopOffsetZ; // 0x7C
		::System::Single RightTopOffsetX; // 0x80
		::System::Single RightTopOffsetY; // 0x84
		static ::OAKPPPHIOCN_ModuleCustomData* StaticGet_Default()
		{
			return (::OAKPPPHIOCN_ModuleCustomData*)UnitySDK::FromName("", "ModuleCustomData")->GetStaticField(0x13E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAKPPPHIOCN_MODULECUSTOMDATA_CCTOR_OFFSET))();
		}

		::UnityEngine::Vector2 get_CustomUVTilling()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKPPPHIOCN_MODULECUSTOMDATA_GET_CUSTOMUVTILLING_OFFSET))(this);
		}

		::OAKPPPHIOCN_ItemData* get_ItemData()
		{
			return ((::OAKPPPHIOCN_ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKPPPHIOCN_MODULECUSTOMDATA_GET_ITEMDATA_OFFSET))(this);
		}

	};
