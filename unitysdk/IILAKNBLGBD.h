#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class GGLPJCKICNF;
namespace EnviromentSystemV2Space { class ImageCurveAsset; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define IILAKNBLGBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x193D84F0)
#define IILAKNBLGBD_CTOR_OFFSET UNITYSDK_OFFSET(0x193D84B0)
#define IILAKNBLGBD_ENMMCCNFDGC_OFFSET UNITYSDK_OFFSET(0x193D7610)
#define IILAKNBLGBD_KODNOFIPEOH_OFFSET UNITYSDK_OFFSET(0x193D7470)
#define IILAKNBLGBD_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x193D7770)
#define IILAKNBLGBD_PCDLKLNDNKO_OFFSET UNITYSDK_OFFSET(0x193D7C40)
#define IILAKNBLGBD__INTERPOLATERES_B__11_0_OFFSET UNITYSDK_OFFSET(0x193D8570)

inline static constexpr unsigned int IILAKNBLGBD_TypeDefinitionIndex = 50572;

	class IILAKNBLGBD
	{
	public:
		::UnityEngine::ComputeShader* CNIJBCAMNPG; // 0x40
		::UnityEngine::RenderTexture* NJJJEBNBDIL; // 0x48
		::GGLPJCKICNF* CKJEFIJNAMF; // 0x50
		::RPG::GameCore::GraphicQuality DAPKDIEKEGH; // 0x58
		::System::Single KJECILPBCOD; // 0x5C
		::UnityEngine::Vector2Int KLHJPLELNNI; // 0x60
		static ::UnityEngine::Texture** StaticGet_DGHDEJOAHFO()
		{
			return (::UnityEngine::Texture**)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x66930);
		}

		static ::System::Int32* StaticGet_GLHLKHCOOBF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x14500);
		}

		static ::System::Int32* StaticGet_MBJODJGHFII()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x14504);
		}

		static ::System::Int32* StaticGet_BAGFJOFEJEK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x14508);
		}

		static ::System::Int32* StaticGet_DPBKJHAEHLI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x1450C);
		}

		static ::System::Int32* StaticGet_KAKCAOFGJBM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x14510);
		}

		static ::System::Int32* StaticGet_IDBALFPIGFE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x14514);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILAKNBLGBD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IILAKNBLGBD_CCTOR_OFFSET))();
		}

		::UnityEngine::Texture* KODNOFIPEOH()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILAKNBLGBD_KODNOFIPEOH_OFFSET))(this);
		}

		::UnityEngine::Texture* ENMMCCNFDGC()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILAKNBLGBD_ENMMCCNFDGC_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::EnviromentSystemV2Space::ImageCurveAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::ImageCurveAsset*))((::PBYTE)hIl2Cpp + IILAKNBLGBD_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* PCDLKLNDNKO(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + IILAKNBLGBD_PCDLKLNDNKO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InterpolateRes_b__11_0(::UnityEngine::ComputeShader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + IILAKNBLGBD__INTERPOLATERES_B__11_0_OFFSET))(this, a1);
		}

	};
