#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPGTools::LDWhiteBox { class WhiteBoxConnector; }
namespace RPGTools::LDWhiteBox { class WhiteBoxRouteNode; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD4B3A0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4B390)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_FMCADMCIHOJ_OFFSET UNITYSDK_OFFSET(0x1BD4B080)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_HFHPJIAJJMI_OFFSET UNITYSDK_OFFSET(0x1BD4AEC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_IDIHOCHBCEK_OFFSET UNITYSDK_OFFSET(0x1BD4ABC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_INITIALIZECONNECTOR_OFFSET UNITYSDK_OFFSET(0x1BD4AAC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_INITIALIZEROUTENODE_OFFSET UNITYSDK_OFFSET(0x1BD4ADD0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_MCMKLOCBLEC_OFFSET UNITYSDK_OFFSET(0x1BD4B180)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BD4B2F0)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxRuntimePreview_TypeDefinitionIndex = 50023;

	class WhiteBoxRuntimePreview : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* PJCFECMFOMI; // 0x18
		::UnityEngine::Mesh* IANLCOHGLKP; // 0x20
		::UnityEngine::Mesh* HDNBPAKCEPB; // 0x28
		static ::UnityEngine::Color* StaticGet_EIHBOANPIBM()
		{
			return (::UnityEngine::Color*)UnitySDK::FromName("RPGTools.LDWhiteBox", "WhiteBoxRuntimePreview")->GetStaticField(0x16350);
		}

		static ::UnityEngine::Color* StaticGet_MKNPLALLPLF()
		{
			return (::UnityEngine::Color*)UnitySDK::FromName("RPGTools.LDWhiteBox", "WhiteBoxRuntimePreview")->GetStaticField(0x16360);
		}

		static ::UnityEngine::Color* StaticGet_HKJGEIEOMOC()
		{
			return (::UnityEngine::Color*)UnitySDK::FromName("RPGTools.LDWhiteBox", "WhiteBoxRuntimePreview")->GetStaticField(0x16370);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_CCTOR_OFFSET))();
		}

		::System::Void InitializeConnector(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxConnector*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_INITIALIZECONNECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void InitializeRouteNode(::RPGTools::LDWhiteBox::WhiteBoxRouteNode* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRouteNode*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_INITIALIZEROUTENODE_OFFSET))(this, a1, a2);
		}

		::System::Void HFHPJIAJJMI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_HFHPJIAJJMI_OFFSET))(this, a1);
		}

		::System::Void IDIHOCHBCEK(::System::String* a1, ::UnityEngine::Material* a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Material*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_IDIHOCHBCEK_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::Material* MCMKLOCBLEC(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_MCMKLOCBLEC_OFFSET))(a1);
		}

		static ::System::Void FMCADMCIHOJ(::UnityEngine::MeshRenderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Color a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::MeshRenderer*, ::UnityEngine::Material*, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_FMCADMCIHOJ_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXRUNTIMEPREVIEW_ONDESTROY_OFFSET))(this);
		}

	};
}
