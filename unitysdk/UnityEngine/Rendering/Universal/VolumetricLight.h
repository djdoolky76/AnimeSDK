#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightShape.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::Universal { class VolumetricLightMask; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_AREABOUNDINGRADIUS_OFFSET UNITYSDK_OFFSET(0x1D71C610)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D71D6C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_COMPUTEALIGNSHEAR_OFFSET UNITYSDK_OFFSET(0x1D71F3E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_COMPUTEBOUNDINGORIGIN_OFFSET UNITYSDK_OFFSET(0x1D71F790)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_COPYFROMLIGHTCOMPONENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D71CAB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_COPYTOLIGHTCOMPONENTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D71D3D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_DESTROYRENDERINGRESOURCES_OFFSET UNITYSDK_OFFSET(0x1D71EF00)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_ENSURERENDERINGCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1D71DEF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GETMAINDIRECTIONALLIGHT_OFFSET UNITYSDK_OFFSET(0x1D71F980)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_ALIGNSHEARCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F2E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_AREAEDGESOFTNESS_OFFSET UNITYSDK_OFFSET(0x1D71C900)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_BASELIGHTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D71FC90)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_BOUNDINGORIGINCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F280)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_BOUNDINGRADIUSCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F2C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_BOUNDINGRADIUS_OFFSET UNITYSDK_OFFSET(0x1D71C4A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_CANCOPYLIGHTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D71C290)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_CONTROLLEDBYSCENEOBJECTPROXY_OFFSET UNITYSDK_OFFSET(0x1D71CA90)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_COPYLIGHTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D71FD00)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_DEPTHFADE_OFFSET UNITYSDK_OFFSET(0x1D71C980)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_DISTANCEFADEENABLED_OFFSET UNITYSDK_OFFSET(0x1D7200C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_EDGESOFTNESS_OFFSET UNITYSDK_OFFSET(0x1D71C8E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_ENDFADEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D7201B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_HEIGHTFALLOFF_OFFSET UNITYSDK_OFFSET(0x1D71C9C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LASTUPDATEDFRAME_OFFSET UNITYSDK_OFFSET(0x1D71F360)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTCOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1D71FDA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x1D71FD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTENABLED_OFFSET UNITYSDK_OFFSET(0x1D71C210)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D71FDB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTMASK_OFFSET UNITYSDK_OFFSET(0x1D71FF50)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTPRIMARYANGLE_OFFSET UNITYSDK_OFFSET(0x1D71FF30)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTRANGE_OFFSET UNITYSDK_OFFSET(0x1D71FE40)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTRECT_OFFSET UNITYSDK_OFFSET(0x1D71FE50)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTSCATTERINGSQRCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F340)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTSCATTERING_OFFSET UNITYSDK_OFFSET(0x1D71FDC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTSECONDARYANGLE_OFFSET UNITYSDK_OFFSET(0x1D71FF40)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTSHAPE_OFFSET UNITYSDK_OFFSET(0x1D71FD70)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTVISIBLECOLORCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F260)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTVISIBLECOLOR_OFFSET UNITYSDK_OFFSET(0x1D71C3F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_MAINLIGHTALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1D71FEC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_PRIMARYANGLERADCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F300)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_RADIALFALLOFF_OFFSET UNITYSDK_OFFSET(0x1D71C9A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_REVERSEDISTANCEFADE_OFFSET UNITYSDK_OFFSET(0x1D71CA70)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_SCATTERINGANISOTROPY_OFFSET UNITYSDK_OFFSET(0x1D71C9E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_SECONDARYANGLERADCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F320)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_SPREADANGLEX_OFFSET UNITYSDK_OFFSET(0x1D71FFC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_SPREADANGLEY_OFFSET UNITYSDK_OFFSET(0x1D720040)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_SPREADTANX_OFFSET UNITYSDK_OFFSET(0x1D71C800)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_SPREADTANY_OFFSET UNITYSDK_OFFSET(0x1D71C870)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_STARTFADEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D720130)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_TRANSFORMCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F180)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_TRANSFORMFORWARDCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F220)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_TRANSFORMRIGHTCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F1A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_TRANSFORMUPCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F1E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_USECOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1D71FD90)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_INVALIDATEALLCACHE_OFFSET UNITYSDK_OFFSET(0x1D71F920)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_MARKRENDERINGDIRTY_OFFSET UNITYSDK_OFFSET(0x1D71E780)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D71EEB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D71ED50)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D71E6B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1D720BC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_REFRESHRENDERING_OFFSET UNITYSDK_OFFSET(0x1D71EE00)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_RESOLVEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D720230)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_RESOLVESHADER_OFFSET UNITYSDK_OFFSET(0x1D720710)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SETRENDERERENABLED_OFFSET UNITYSDK_OFFSET(0x1D71E800)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_ALIGNSHEARCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F2F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_AREAEDGESOFTNESS_OFFSET UNITYSDK_OFFSET(0x1D71C910)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_BASELIGHTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D71FCA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_BOUNDINGORIGINCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F2A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_BOUNDINGRADIUSCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F2D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_CONTROLLEDBYSCENEOBJECTPROXY_OFFSET UNITYSDK_OFFSET(0x1D71CAA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_COPYLIGHTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D71FD10)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_DEPTHFADE_OFFSET UNITYSDK_OFFSET(0x1D71C990)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_DISTANCEFADEENABLED_OFFSET UNITYSDK_OFFSET(0x1D7200D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_EDGESOFTNESS_OFFSET UNITYSDK_OFFSET(0x1D71C8F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_ENDFADEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D7201C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_HEIGHTFALLOFF_OFFSET UNITYSDK_OFFSET(0x1D71C9D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LASTUPDATEDFRAME_OFFSET UNITYSDK_OFFSET(0x1D71F370)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTCOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1D71D1A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x1D71D0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D71D210)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTMASK_OFFSET UNITYSDK_OFFSET(0x1D71FF60)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTPRIMARYANGLE_OFFSET UNITYSDK_OFFSET(0x1D71D2F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTRANGE_OFFSET UNITYSDK_OFFSET(0x1D71D280)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTRECT_OFFSET UNITYSDK_OFFSET(0x1D71FE60)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTSCATTERINGSQRCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F350)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTSCATTERING_OFFSET UNITYSDK_OFFSET(0x1D71FDD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTSECONDARYANGLE_OFFSET UNITYSDK_OFFSET(0x1D71D360)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTSHAPE_OFFSET UNITYSDK_OFFSET(0x1D71D070)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTVISIBLECOLORCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F270)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_MAINLIGHTALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1D71FED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_PRIMARYANGLERADCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F310)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_RADIALFALLOFF_OFFSET UNITYSDK_OFFSET(0x1D71C9B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_REVERSEDISTANCEFADE_OFFSET UNITYSDK_OFFSET(0x1D71CA80)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_SCATTERINGANISOTROPY_OFFSET UNITYSDK_OFFSET(0x1D71C9F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_SECONDARYANGLERADCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F330)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_SPREADANGLEX_OFFSET UNITYSDK_OFFSET(0x1D71FFD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_SPREADANGLEY_OFFSET UNITYSDK_OFFSET(0x1D720050)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_STARTFADEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1D720140)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_TRANSFORMCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F190)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_TRANSFORMFORWARDCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F240)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_TRANSFORMRIGHTCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F1C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_TRANSFORMUPCACHED_OFFSET UNITYSDK_OFFSET(0x1D71F200)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_USECOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1D71D140)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_UPDATELIGHTCACHEFORCE_OFFSET UNITYSDK_OFFSET(0x1D71D710)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_UPDATELIGHTCACHE_OFFSET UNITYSDK_OFFSET(0x1D71F380)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_UPDATEMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D721290)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_UPDATERENDERING_OFFSET UNITYSDK_OFFSET(0x1D71E990)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D71EDA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D721A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D721960)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricLight_TypeDefinitionIndex = 27129;

	class VolumetricLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Light** StaticGet__cachedMainLight()
		{
			return (::UnityEngine::Light**)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x24800);
		}
		static ::UnityEngine::Material** StaticGet_s_sharedMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x24808);
		}
		static ::System::Int32* StaticGet_IdUniformFalloff()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6F70);
		}
		static ::System::Int32* StaticGet_IdRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6F74);
		}
		static ::System::Int32* StaticGet_IdWorldToMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6F78);
		}
		static ::System::Int32* StaticGet_IdForward()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6F7C);
		}
		static ::System::Int32* StaticGet_IdHasMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6F80);
		}
		static ::System::Int32* StaticGet_IdBoundingRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6F84);
		}
		static ::System::Int32* StaticGet_IdAlignShear()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6F88);
		}
		static ::System::Int32* StaticGet__cachedMainLightFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6F8C);
		}
		static ::System::Int32* StaticGet_IdUp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6F90);
		}
		static ::System::Int32* StaticGet_IdDepthFade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6F94);
		}
		static ::System::Int32* StaticGet_IdEdgeSoftness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6F98);
		}
		static ::System::Int32* StaticGet_IdOrigin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6F9C);
		}
		static ::System::Int32* StaticGet_IdColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6FA0);
		}
		static ::System::Int32* StaticGet_IdSecondaryAngle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6FA4);
		}
		static ::System::Int32* StaticGet_IdScatteringAniso()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6FA8);
		}
		static ::System::Int32* StaticGet_IdRight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6FAC);
		}
		static ::System::Int32* StaticGet_IdFadeParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6FB0);
		}
		static ::System::Int32* StaticGet_IdScattering()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6FB4);
		}
		static ::System::Int32* StaticGet_IdType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6FB8);
		}
		static ::System::Int32* StaticGet_IdPrimaryAngle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6FBC);
		}
		static ::System::Int32* StaticGet_IdBoundingOrigin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6FC0);
		}
		static ::System::Int32* StaticGet_IdMaskType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6FC4);
		}
		static ::System::Int32* StaticGet_IdMaskReverse()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6FC8);
		}
		static ::System::Int32* StaticGet_IdRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricLight_TypeDefinitionIndex)->GetStaticField(0x6FCC);
		}
		// static const ::System::Single MaxSpreadAngle; // 0x0
		// static const ::System::Single MinAlignForward; // 0x0
		// static const ::System::String* ShaderName; // 0x0
		::UnityEngine::Light* _baseLightComponent; // 0x18
		::System::Boolean _copyLightComponent; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::Universal::LightShape _lightShape; // 0x24
		::UnityEngine::Color _lightColor; // 0x28
		::System::Boolean _useColorTemperature; // 0x38
		::System::Byte _padding1[0x3];
		::System::Single _lightColorTemperature; // 0x3C
		::System::Single _lightIntensity; // 0x40
		::System::Single _lightScattering; // 0x44
		::System::Single _lightRange; // 0x48
		::UnityEngine::Vector2 _lightRect; // 0x4C
		::System::Boolean _mainLightAlignment; // 0x54
		::System::Byte _padding2[0x3];
		::System::Single _lightPrimaryAngle; // 0x58
		::System::Single _lightSecondaryAngle; // 0x5C
		::System::Single _spreadAngleX; // 0x60
		::System::Single _spreadAngleY; // 0x64
		::System::Single _edgeSoftness; // 0x68
		::System::Single _areaEdgeSoftness; // 0x6C
		::System::Single _radialFalloff; // 0x70
		::System::Single _heightFalloff; // 0x74
		::System::Single _scatteringAnisotropy; // 0x78
		::System::Byte _padding3[0x4];
		::UnityEngine::Rendering::Universal::VolumetricLightMask* _lightMask; // 0x80
		::UnityEngine::Material* _material; // 0x88
		::System::Boolean _distanceFadeEnabled; // 0x90
		::System::Byte _padding4[0x3];
		::System::Single _startFadeDistance; // 0x94
		::System::Single _endFadeDistance; // 0x98
		::System::Boolean _reverseDistanceFade; // 0x9C
		::System::Byte _padding5[0x3];
		::System::Single _depthFade; // 0xA0
		::System::Boolean _controlledBySceneObjectProxy; // 0xA4
		::System::Byte _padding6[0x3];
		::UnityEngine::Transform* _TransformCached_k__BackingField; // 0xA8
		::UnityEngine::Vector3 _TransformRightCached_k__BackingField; // 0xB0
		::UnityEngine::Vector3 _TransformUpCached_k__BackingField; // 0xBC
		::UnityEngine::Vector3 _TransformForwardCached_k__BackingField; // 0xC8
		::UnityEngine::Color _LightVisibleColorCached_k__BackingField; // 0xD4
		::UnityEngine::Vector3 _BoundingOriginCached_k__BackingField; // 0xE4
		::System::Single _BoundingRadiusCached_k__BackingField; // 0xF0
		::UnityEngine::Vector2 _AlignShearCached_k__BackingField; // 0xF4
		::UnityEngine::Vector4 _PrimaryAngleRadCached_k__BackingField; // 0xFC
		::UnityEngine::Vector4 _SecondaryAngleRadCached_k__BackingField; // 0x10C
		::System::Single _LightScatteringSqrCached_k__BackingField; // 0x11C
		::System::Int32 _LastUpdatedFrame_k__BackingField; // 0x120
		::System::Boolean _transformHasBeenCached; // 0x124
		::System::Boolean _baseLightComponentInvalidated; // 0x125
		::System::Boolean _copyLightComponentInvalidated; // 0x126
		::System::Boolean _lightShapeInvalidated; // 0x127
		::System::Boolean _lightColorInvalidated; // 0x128
		::System::Boolean _useColorTemperatureInvalidated; // 0x129
		::System::Boolean _lightColorTemperatureInvalidated; // 0x12A
		::System::Boolean _lightIntensityInvalidated; // 0x12B
		::System::Boolean _lightScatteringInvalidated; // 0x12C
		::System::Boolean _lightRangeInvalidated; // 0x12D
		::System::Boolean _lightRectInvalidated; // 0x12E
		::System::Boolean _mainLightAlignmentInvalidated; // 0x12F
		::System::Boolean _lightPrimaryAngleInvalidated; // 0x130
		::System::Boolean _lightSecondaryAngleInvalidated; // 0x131
		::System::Boolean _lightMaskInvalidated; // 0x132
		::System::Boolean _spreadAngleXInvalidated; // 0x133
		::System::Boolean _spreadAngleYInvalidated; // 0x134
		::System::Boolean _distanceFadeEnabledInvalidated; // 0x135
		::System::Boolean _startFadeDistanceInvalidated; // 0x136
		::System::Boolean _endFadeDistanceInvalidated; // 0x137
		::UnityEngine::MeshFilter* _meshFilter; // 0x138
		::UnityEngine::MeshRenderer* _meshRenderer; // 0x140
		::UnityEngine::Mesh* _boundsMesh; // 0x148
		::UnityEngine::MaterialPropertyBlock* _propertyBlock; // 0x150
		::System::Boolean _renderingDirty; // 0x158
		::System::Boolean _meshParamsDirty; // 0x159

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT__CCTOR_OFFSET))();
		}

		::System::Boolean get_LightEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTENABLED_OFFSET))(this);
		}

		::UnityEngine::Color get_LightVisibleColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTVISIBLECOLOR_OFFSET))(this);
		}

		::System::Single get_BoundingRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_BOUNDINGRADIUS_OFFSET))(this);
		}

		::System::Single AreaBoundingRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_AREABOUNDINGRADIUS_OFFSET))(this);
		}

		::System::Single get_SpreadTanX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_SPREADTANX_OFFSET))(this);
		}

		::System::Single get_SpreadTanY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_SPREADTANY_OFFSET))(this);
		}

		::System::Single get_edgeSoftness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_EDGESOFTNESS_OFFSET))(this);
		}

		::System::Void set_edgeSoftness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_EDGESOFTNESS_OFFSET))(this, value);
		}

		::System::Single get_areaEdgeSoftness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_AREAEDGESOFTNESS_OFFSET))(this);
		}

		::System::Void set_areaEdgeSoftness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_AREAEDGESOFTNESS_OFFSET))(this, value);
		}

		::System::Single get_depthFade()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_DEPTHFADE_OFFSET))(this);
		}

		::System::Void set_depthFade(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_DEPTHFADE_OFFSET))(this, value);
		}

		::System::Single get_radialFalloff()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_RADIALFALLOFF_OFFSET))(this);
		}

		::System::Void set_radialFalloff(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_RADIALFALLOFF_OFFSET))(this, value);
		}

		::System::Single get_heightFalloff()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_HEIGHTFALLOFF_OFFSET))(this);
		}

		::System::Void set_heightFalloff(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_HEIGHTFALLOFF_OFFSET))(this, value);
		}

		::System::Single get_scatteringAnisotropy()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_SCATTERINGANISOTROPY_OFFSET))(this);
		}

		::System::Void set_scatteringAnisotropy(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_SCATTERINGANISOTROPY_OFFSET))(this, value);
		}

		::System::Boolean get_reverseDistanceFade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_REVERSEDISTANCEFADE_OFFSET))(this);
		}

		::System::Void set_reverseDistanceFade(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_REVERSEDISTANCEFADE_OFFSET))(this, value);
		}

		::System::Boolean get_CanCopyLightComponent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_CANCOPYLIGHTCOMPONENT_OFFSET))(this);
		}

		::System::Boolean get_ControlledBySceneObjectProxy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_CONTROLLEDBYSCENEOBJECTPROXY_OFFSET))(this);
		}

		::System::Void set_ControlledBySceneObjectProxy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_CONTROLLEDBYSCENEOBJECTPROXY_OFFSET))(this, value);
		}

		::System::Void CopyFromLightComponentSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_COPYFROMLIGHTCOMPONENTSETTINGS_OFFSET))(this);
		}

		::System::Void CopyToLightComponentSettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_COPYTOLIGHTCOMPONENTSETTINGS_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshRendering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_REFRESHRENDERING_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Transform* get_TransformCached()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_TRANSFORMCACHED_OFFSET))(this);
		}

		::System::Void set_TransformCached(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_TRANSFORMCACHED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_TransformRightCached()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_TRANSFORMRIGHTCACHED_OFFSET))(this);
		}

		::System::Void set_TransformRightCached(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_TRANSFORMRIGHTCACHED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_TransformUpCached()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_TRANSFORMUPCACHED_OFFSET))(this);
		}

		::System::Void set_TransformUpCached(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_TRANSFORMUPCACHED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_TransformForwardCached()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_TRANSFORMFORWARDCACHED_OFFSET))(this);
		}

		::System::Void set_TransformForwardCached(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_TRANSFORMFORWARDCACHED_OFFSET))(this, value);
		}

		::UnityEngine::Color get_LightVisibleColorCached()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTVISIBLECOLORCACHED_OFFSET))(this);
		}

		::System::Void set_LightVisibleColorCached(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTVISIBLECOLORCACHED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_BoundingOriginCached()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_BOUNDINGORIGINCACHED_OFFSET))(this);
		}

		::System::Void set_BoundingOriginCached(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_BOUNDINGORIGINCACHED_OFFSET))(this, value);
		}

		::System::Single get_BoundingRadiusCached()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_BOUNDINGRADIUSCACHED_OFFSET))(this);
		}

		::System::Void set_BoundingRadiusCached(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_BOUNDINGRADIUSCACHED_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_AlignShearCached()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_ALIGNSHEARCACHED_OFFSET))(this);
		}

		::System::Void set_AlignShearCached(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_ALIGNSHEARCACHED_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_PrimaryAngleRadCached()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_PRIMARYANGLERADCACHED_OFFSET))(this);
		}

		::System::Void set_PrimaryAngleRadCached(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_PRIMARYANGLERADCACHED_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_SecondaryAngleRadCached()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_SECONDARYANGLERADCACHED_OFFSET))(this);
		}

		::System::Void set_SecondaryAngleRadCached(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_SECONDARYANGLERADCACHED_OFFSET))(this, value);
		}

		::System::Single get_LightScatteringSqrCached()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTSCATTERINGSQRCACHED_OFFSET))(this);
		}

		::System::Void set_LightScatteringSqrCached(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTSCATTERINGSQRCACHED_OFFSET))(this, value);
		}

		::System::Int32 get_LastUpdatedFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LASTUPDATEDFRAME_OFFSET))(this);
		}

		::System::Void set_LastUpdatedFrame(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LASTUPDATEDFRAME_OFFSET))(this, value);
		}

		::System::Void UpdateLightCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_UPDATELIGHTCACHE_OFFSET))(this);
		}

		::System::Void UpdateLightCacheForce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_UPDATELIGHTCACHEFORCE_OFFSET))(this);
		}

		::System::Void InvalidateAllCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_INVALIDATEALLCACHE_OFFSET))(this);
		}

		::UnityEngine::Vector3 ComputeBoundingOrigin()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_COMPUTEBOUNDINGORIGIN_OFFSET))(this);
		}

		::UnityEngine::Vector2 ComputeAlignShear()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_COMPUTEALIGNSHEAR_OFFSET))(this);
		}

		static ::UnityEngine::Light* GetMainDirectionalLight()
		{
			return ((::UnityEngine::Light*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GETMAINDIRECTIONALLIGHT_OFFSET))();
		}

		::UnityEngine::Light* get_baseLightComponent()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_BASELIGHTCOMPONENT_OFFSET))(this);
		}

		::System::Void set_baseLightComponent(::UnityEngine::Light* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_BASELIGHTCOMPONENT_OFFSET))(this, value);
		}

		::System::Boolean get_copyLightComponent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_COPYLIGHTCOMPONENT_OFFSET))(this);
		}

		::System::Void set_copyLightComponent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_COPYLIGHTCOMPONENT_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::Universal::LightShape get_lightShape()
		{
			return ((::UnityEngine::Rendering::Universal::LightShape(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTSHAPE_OFFSET))(this);
		}

		::System::Void set_lightShape(::UnityEngine::Rendering::Universal::LightShape value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LightShape))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTSHAPE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_lightColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTCOLOR_OFFSET))(this);
		}

		::System::Void set_lightColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTCOLOR_OFFSET))(this, value);
		}

		::System::Boolean get_useColorTemperature()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_USECOLORTEMPERATURE_OFFSET))(this);
		}

		::System::Void set_useColorTemperature(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_USECOLORTEMPERATURE_OFFSET))(this, value);
		}

		::System::Single get_lightColorTemperature()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTCOLORTEMPERATURE_OFFSET))(this);
		}

		::System::Void set_lightColorTemperature(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTCOLORTEMPERATURE_OFFSET))(this, value);
		}

		::System::Single get_lightIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTINTENSITY_OFFSET))(this);
		}

		::System::Void set_lightIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTINTENSITY_OFFSET))(this, value);
		}

		::System::Single get_lightScattering()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTSCATTERING_OFFSET))(this);
		}

		::System::Void set_lightScattering(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTSCATTERING_OFFSET))(this, value);
		}

		::System::Single get_lightRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTRANGE_OFFSET))(this);
		}

		::System::Void set_lightRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTRANGE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_lightRect()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTRECT_OFFSET))(this);
		}

		::System::Void set_lightRect(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTRECT_OFFSET))(this, value);
		}

		::System::Boolean get_mainLightAlignment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_MAINLIGHTALIGNMENT_OFFSET))(this);
		}

		::System::Void set_mainLightAlignment(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_MAINLIGHTALIGNMENT_OFFSET))(this, value);
		}

		::System::Single get_lightPrimaryAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTPRIMARYANGLE_OFFSET))(this);
		}

		::System::Void set_lightPrimaryAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTPRIMARYANGLE_OFFSET))(this, value);
		}

		::System::Single get_lightSecondaryAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTSECONDARYANGLE_OFFSET))(this);
		}

		::System::Void set_lightSecondaryAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTSECONDARYANGLE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::Universal::VolumetricLightMask* get_lightMask()
		{
			return ((::UnityEngine::Rendering::Universal::VolumetricLightMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_LIGHTMASK_OFFSET))(this);
		}

		::System::Void set_lightMask(::UnityEngine::Rendering::Universal::VolumetricLightMask* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VolumetricLightMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_LIGHTMASK_OFFSET))(this, value);
		}

		::System::Single get_spreadAngleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_SPREADANGLEX_OFFSET))(this);
		}

		::System::Void set_spreadAngleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_SPREADANGLEX_OFFSET))(this, value);
		}

		::System::Single get_spreadAngleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_SPREADANGLEY_OFFSET))(this);
		}

		::System::Void set_spreadAngleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_SPREADANGLEY_OFFSET))(this, value);
		}

		::System::Boolean get_distanceFadeEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_DISTANCEFADEENABLED_OFFSET))(this);
		}

		::System::Void set_distanceFadeEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_DISTANCEFADEENABLED_OFFSET))(this, value);
		}

		::System::Single get_startFadeDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_STARTFADEDISTANCE_OFFSET))(this);
		}

		::System::Void set_startFadeDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_STARTFADEDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_endFadeDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_GET_ENDFADEDISTANCE_OFFSET))(this);
		}

		::System::Void set_endFadeDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SET_ENDFADEDISTANCE_OFFSET))(this, value);
		}

		::UnityEngine::Material* ResolveMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_RESOLVEMATERIAL_OFFSET))(this);
		}

		static ::UnityEngine::Shader* ResolveShader()
		{
			return ((::UnityEngine::Shader*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_RESOLVESHADER_OFFSET))();
		}

		::System::Void EnsureRenderingComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_ENSURERENDERINGCOMPONENTS_OFFSET))(this);
		}

		::System::Void MarkRenderingDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_MARKRENDERINGDIRTY_OFFSET))(this);
		}

		::System::Void SetRendererEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_SETRENDERERENABLED_OFFSET))(this, value);
		}

		::System::Void UpdateRendering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_UPDATERENDERING_OFFSET))(this);
		}

		::System::Void RebuildMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_REBUILDMESH_OFFSET))(this);
		}

		::System::Void UpdateMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_UPDATEMATERIALPROPERTIES_OFFSET))(this);
		}

		::System::Void DestroyRenderingResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHT_DESTROYRENDERINGRESOURCES_OFFSET))(this);
		}
	};
}
