#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CurveData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD1A9C0)
#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xDD1A9B0)
#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_START_OFFSET UNITYSDK_OFFSET(0xDD1A5D0)
#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD1A780)

namespace RPG::Client
{
	inline static constexpr unsigned int HDRPaperWhiteReferenceImage_TypeDefinitionIndex = 74884;

	class HDRPaperWhiteReferenceImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* KIODLMCBHLL; // 0x18
		::UnityEngine::Material* PCANJIIKLDC; // 0x20
		::UnityEngine::TextAsset* curveParamsJson; // 0x28
		::RPG::CustomRP::CurveData OHNILEIAFEB; // 0x30
		static ::System::Int32* StaticGet_ILHCDFBNEHN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "HDRPaperWhiteReferenceImage")->GetStaticField(0x4D20);
		}

		static ::System::Int32* StaticGet_PEJDNHPLHKK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "HDRPaperWhiteReferenceImage")->GetStaticField(0x4D24);
		}

		static ::System::Int32* StaticGet_LHPECKJBPFB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "HDRPaperWhiteReferenceImage")->GetStaticField(0x4D28);
		}

		static ::System::Int32* StaticGet_ECMJLFALECH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "HDRPaperWhiteReferenceImage")->GetStaticField(0x4D2C);
		}

		static ::System::Int32* StaticGet_CJLICPBKFGB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "HDRPaperWhiteReferenceImage")->GetStaticField(0x4D30);
		}

		static ::System::Int32* StaticGet_FMDDHMGJBPG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "HDRPaperWhiteReferenceImage")->GetStaticField(0x4D34);
		}

		static ::System::Int32* StaticGet_IOOLDFFILPI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "HDRPaperWhiteReferenceImage")->GetStaticField(0x4D38);
		}

		static ::System::Int32* StaticGet_JANJLLAJLGF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "HDRPaperWhiteReferenceImage")->GetStaticField(0x4D3C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_UPDATE_OFFSET))(this);
		}

	};
}
