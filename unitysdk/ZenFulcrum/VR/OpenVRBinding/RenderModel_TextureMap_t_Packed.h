#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/RenderModel_TextureMap_t.h"

#define ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_TEXTUREMAP_T_PACKED_CTOR_OFFSET UNITYSDK_OFFSET(0x3C94E20)
#define ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_TEXTUREMAP_T_PACKED_UNPACK_OFFSET UNITYSDK_OFFSET(0x3C94E30)

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) RenderModel_TextureMap_t_Packed
	{
		::System::Char unWidth; // 0x10
		::System::Char unHeight; // 0x12
		::System::IntPtr rubTextureMapData; // 0x14
		::System::Void _ctor(::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_TEXTUREMAP_T_PACKED_CTOR_OFFSET))(this, a1);
		}

		::System::Void Unpack(::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_TextureMap_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_RENDERMODEL_TEXTUREMAP_T_PACKED_UNPACK_OFFSET))(this, a1);
		}

	};
}
