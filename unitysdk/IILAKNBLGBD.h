#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class GGLPJCKICNF;
namespace EnviromentSystemV2Space { class ImageCurveAsset; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define IILAKNBLGBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x173FE160)
#define IILAKNBLGBD_CTOR_OFFSET UNITYSDK_OFFSET(0x173FE120)
#define IILAKNBLGBD_ENMMCCNFDGC_OFFSET UNITYSDK_OFFSET(0x173FD280)
#define IILAKNBLGBD_KODNOFIPEOH_OFFSET UNITYSDK_OFFSET(0x173FD0E0)
#define IILAKNBLGBD_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x173FD3E0)
#define IILAKNBLGBD_PCDLKLNDNKO_OFFSET UNITYSDK_OFFSET(0x173FD8B0)
#define IILAKNBLGBD__INTERPOLATERES_B__11_0_OFFSET UNITYSDK_OFFSET(0x173FE1E0)

inline static constexpr unsigned int IILAKNBLGBD_TypeDefinitionIndex = 50572;

	class IILAKNBLGBD
	{
	public:
		::GGLPJCKICNF* CKJEFIJNAMF; // 0x40
		::UnityEngine::RenderTexture* NJJJEBNBDIL; // 0x48
		::UnityEngine::ComputeShader* CNIJBCAMNPG; // 0x50
		::System::Single KJECILPBCOD; // 0x58
		::RPG::GameCore::GraphicQuality DAPKDIEKEGH; // 0x5C
		::UnityEngine::Vector2Int KLHJPLELNNI; // 0x60
		static ::UnityEngine::Texture** StaticGet_DGHDEJOAHFO()
		{
			return (::UnityEngine::Texture**)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x67A40);
		}

		static ::System::Int32* StaticGet_MBJODJGHFII()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x14D10);
		}

		static ::System::Int32* StaticGet_IDBALFPIGFE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x14D14);
		}

		static ::System::Int32* StaticGet_BAGFJOFEJEK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x14D18);
		}

		static ::System::Int32* StaticGet_DPBKJHAEHLI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x14D1C);
		}

		static ::System::Int32* StaticGet_GLHLKHCOOBF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x14D20);
		}

		static ::System::Int32* StaticGet_KAKCAOFGJBM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IILAKNBLGBD")->GetStaticField(0x14D24);
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
