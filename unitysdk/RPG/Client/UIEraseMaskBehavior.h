#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace RPG::Client { class UIEraseMask; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_UIERASEMASKBEHAVIOR_BLAHKDFLLDB_OFFSET UNITYSDK_OFFSET(0x175747A0)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x17574B70)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x17573C10)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_CHEJGMKNIDD_OFFSET UNITYSDK_OFFSET(0x17572990)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_COOIKMJEJMM_OFFSET UNITYSDK_OFFSET(0x175722E0)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x17574B60)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_DPCOLFECNDE_OFFSET UNITYSDK_OFFSET(0x175728C0)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_EBBCKPNAPIL_OFFSET UNITYSDK_OFFSET(0x17574380)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_ELMBLGMDION_OFFSET UNITYSDK_OFFSET(0x17572D60)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x17572170)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x17574110)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_GFENGJIGOMP_OFFSET UNITYSDK_OFFSET(0x17574730)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_ICJNPIILHLD_OFFSET UNITYSDK_OFFSET(0x17573F90)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_IHFHKPKBOIC_OFFSET UNITYSDK_OFFSET(0x175734A0)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_KJCIKIPNILN_OFFSET UNITYSDK_OFFSET(0x17573F30)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x17572A40)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x17573B70)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_NFGFMAGHLGD_OFFSET UNITYSDK_OFFSET(0x17573E10)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_ODIEINNOEHD_OFFSET UNITYSDK_OFFSET(0x17573680)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_OLJHJDEIFDI_OFFSET UNITYSDK_OFFSET(0x175748F0)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_PAKGFHPGDAP_OFFSET UNITYSDK_OFFSET(0x175745A0)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x175731D0)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_PHEGIFJAANK_OFFSET UNITYSDK_OFFSET(0x17574190)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR_PLIPPOIIJNC_OFFSET UNITYSDK_OFFSET(0x17573280)
#define RPG_CLIENT_UIERASEMASKBEHAVIOR__INIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x17574B90)

namespace RPG::Client
{
	inline static constexpr unsigned int UIEraseMaskBehavior_TypeDefinitionIndex = 73036;

	class UIEraseMaskBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::RenderTexture* _canvas; // 0x38
		::UnityEngine::Matrix4x4 _canvasProjection; // 0x40
		::UnityEngine::Material* _brushMaterial; // 0x80
		::UnityEngine::Rendering::CommandBuffer* _cmd; // 0x88
		::UnityEngine::Mesh* _quad; // 0x90
		::UnityEngine::Vector2 _lastStrokeUV; // 0x98
		::System::Boolean _hasStrokePoint; // 0xA0
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Boolean>* _coverage; // 0xA8
		::System::Int32 _coverageX; // 0xB0
		::System::Int32 _coverageY; // 0xB4
		::System::Int32 _totalCells; // 0xB8
		::System::Int32 _erasedCells; // 0xBC
		::UnityEngine::RectTransform* _rectTransform; // 0xC0
		::UnityEngine::UI::SmoothMask* _smoothMask; // 0xC8
		::UnityEngine::UI::Graphic* _targetGraphic; // 0xD0
		::UnityEngine::Canvas* _rootCanvas; // 0xD8
		static ::System::Int32* StaticGet_s_SmoothMaskSoftRangesID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "UIEraseMaskBehavior")->GetStaticField(0xE0F0);
		}

		// static const ::System::String* c_BrushMaterialPath; // 0x0
		// static const ::System::Object c_MaxInsertsPerStroke; // 0x0
		// static const ::System::Object c_MinResolution; // 0x0
		// static const ::System::Object c_MinGrid; // 0x0
		// static const ::System::Object c_MaxGrid; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void DPCOLFECNDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_DPCOLFECNDE_OFFSET))(this);
		}

		::System::Void COOIKMJEJMM(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_COOIKMJEJMM_OFFSET))(this, a1, a2);
		}

		::System::Void CHEJGMKNIDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_CHEJGMKNIDD_OFFSET))(this);
		}

		::System::Void PHEGIFJAANK(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_PHEGIFJAANK_OFFSET))(this, a1, a2);
		}

		::System::Void EBBCKPNAPIL(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_EBBCKPNAPIL_OFFSET))(this, a1, a2);
		}

		::System::Void PAKGFHPGDAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_PAKGFHPGDAP_OFFSET))(this);
		}

		::System::Void GFENGJIGOMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_GFENGJIGOMP_OFFSET))(this);
		}

		::System::Boolean ICJNPIILHLD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_ICJNPIILHLD_OFFSET))(this);
		}

		::System::Boolean ODIEINNOEHD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_ODIEINNOEHD_OFFSET))(this);
		}

		::UnityEngine::Vector2Int OLJHJDEIFDI()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_OLJHJDEIFDI_OFFSET))(this);
		}

		::System::Void BLAHKDFLLDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_BLAHKDFLLDB_OFFSET))(this);
		}

		::System::Void NFGFMAGHLGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_NFGFMAGHLGD_OFFSET))(this);
		}

		::System::Void PLIPPOIIJNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_PLIPPOIIJNC_OFFSET))(this);
		}

		::System::Void IHFHKPKBOIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_IHFHKPKBOIC_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* ELMBLGMDION()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_ELMBLGMDION_OFFSET))();
		}

		static ::System::Void KJCIKIPNILN(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_KJCIKIPNILN_OFFSET))(a1);
		}

		::RPG::Client::UIEraseMask* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::UIEraseMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void _Init_b__6_0(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIERASEMASKBEHAVIOR__INIT_B__6_0_OFFSET))(this, a1);
		}

	};
}
