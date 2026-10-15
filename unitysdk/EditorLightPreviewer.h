#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CNNIBJAKKOI;
class EditorLightPreviewer;
class MEIGMBOLDOF;
class SceneLightVolume;
namespace ScenenLightManager { class BlockEnvExportDataHeader; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define EDITORLIGHTPREVIEWER_ALKKOCPBDJG_OFFSET UNITYSDK_OFFSET(0x155D2580)
#define EDITORLIGHTPREVIEWER_BCCAHNEBLPN_OFFSET UNITYSDK_OFFSET(0x155D2C50)
#define EDITORLIGHTPREVIEWER_BFHBNMFGBLL_OFFSET UNITYSDK_OFFSET(0x155D3670)
#define EDITORLIGHTPREVIEWER_CANCELPINCURRENTCAMPOS_OFFSET UNITYSDK_OFFSET(0x155D2180)
#define EDITORLIGHTPREVIEWER_CCCMOCIELFO_OFFSET UNITYSDK_OFFSET(0x155D2F90)
#define EDITORLIGHTPREVIEWER_CHANGEENV_OFFSET UNITYSDK_OFFSET(0x155D1F10)
#define EDITORLIGHTPREVIEWER_CHANGEQUALITY_OFFSET UNITYSDK_OFFSET(0x155D1DA0)
#define EDITORLIGHTPREVIEWER_CNJPBHGIKHM_OFFSET UNITYSDK_OFFSET(0x155D3880)
#define EDITORLIGHTPREVIEWER_CTOR_OFFSET UNITYSDK_OFFSET(0x155D3AD0)
#define EDITORLIGHTPREVIEWER_EXITLIGHTPREVIEW_OFFSET UNITYSDK_OFFSET(0x155D38C0)
#define EDITORLIGHTPREVIEWER_EXITPREVIEW_OFFSET UNITYSDK_OFFSET(0x155D0F30)
#define EDITORLIGHTPREVIEWER_GETCIDFROMOBJ_OFFSET UNITYSDK_OFFSET(0x155D0E50)
#define EDITORLIGHTPREVIEWER_GETLIGHTFGAMEOBJECTFROMCONTROLID_OFFSET UNITYSDK_OFFSET(0x155D2450)
#define EDITORLIGHTPREVIEWER_GETREGISTEREDLIGHTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x155D3480)
#define EDITORLIGHTPREVIEWER_GET_INPREVIEW_OFFSET UNITYSDK_OFFSET(0x155D3A50)
#define EDITORLIGHTPREVIEWER_HOEIPJAIAEH_OFFSET UNITYSDK_OFFSET(0x155D2AA0)
#define EDITORLIGHTPREVIEWER_IHEHEGCHEKD_OFFSET UNITYSDK_OFFSET(0x155D21D0)
#define EDITORLIGHTPREVIEWER_ISALIVE_OFFSET UNITYSDK_OFFSET(0x155D0DE0)
#define EDITORLIGHTPREVIEWER_ISINLIGHTPREVIEW_OFFSET UNITYSDK_OFFSET(0x155D39E0)
#define EDITORLIGHTPREVIEWER_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x155CFD80)
#define EDITORLIGHTPREVIEWER_KBCJNOGFMFE_OFFSET UNITYSDK_OFFSET(0x155D3300)
#define EDITORLIGHTPREVIEWER_KCJMPDAFPHJ_OFFSET UNITYSDK_OFFSET(0x155D28F0)
#define EDITORLIGHTPREVIEWER_KDEHKKOHDCM_OFFSET UNITYSDK_OFFSET(0x155D3760)
#define EDITORLIGHTPREVIEWER_KEIBLCCEFAK_OFFSET UNITYSDK_OFFSET(0x155D2060)
#define EDITORLIGHTPREVIEWER_KNLBBIALPNK_OFFSET UNITYSDK_OFFSET(0x155D2F50)
#define EDITORLIGHTPREVIEWER_LCOEGFACMDD_OFFSET UNITYSDK_OFFSET(0x155D2DD0)
#define EDITORLIGHTPREVIEWER_LOADHEADER_OFFSET UNITYSDK_OFFSET(0x155D18B0)
#define EDITORLIGHTPREVIEWER_MOEPNHDJLLB_OFFSET UNITYSDK_OFFSET(0x155D20A0)
#define EDITORLIGHTPREVIEWER_OLCDNOFPDNE_OFFSET UNITYSDK_OFFSET(0x155D2720)
#define EDITORLIGHTPREVIEWER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x155D3990)
#define EDITORLIGHTPREVIEWER_PINCURRENTCAMPOS_OFFSET UNITYSDK_OFFSET(0x155D20E0)
#define EDITORLIGHTPREVIEWER_PPCICJBEPML_OFFSET UNITYSDK_OFFSET(0x155D1410)
#define EDITORLIGHTPREVIEWER_RESETLIGHTSCENE_OFFSET UNITYSDK_OFFSET(0x155D1130)
#define EDITORLIGHTPREVIEWER_STARTLIGHTPREVIEW_OFFSET UNITYSDK_OFFSET(0x155D37C0)
#define EDITORLIGHTPREVIEWER_STARTPREVIEW_OFFSET UNITYSDK_OFFSET(0x155D1700)
#define EDITORLIGHTPREVIEWER_UPDATE_OFFSET UNITYSDK_OFFSET(0x155CFD30)

inline static constexpr unsigned int EditorLightPreviewer_TypeDefinitionIndex = 47342;

	class EditorLightPreviewer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ScenenLightManager::BlockEnvExportDataHeader* EEBIJDNJFKF; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* MPCHNPHCOGA; // 0x20
		::CNNIBJAKKOI* POEIIMGCLDH; // 0x28
		::CNNIBJAKKOI* IBDGBHJINLM; // 0x30
		::UnityEngine::Transform* EKLHELJMIKG; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* NEKFLGKEMLA; // 0x40
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Int32>* DDCLJFPCNKD; // 0x48
		::System::Int32 LightId; // 0x50
		::System::Int32 LightCount; // 0x54
		::UnityEngine::Vector3 SetPos; // 0x58
		::System::Boolean SetP; // 0x64
		::System::Boolean ELAJDPJKPPB; // 0x65
		::System::Boolean ABGLNFDEELA; // 0x66
		::System::Byte _padding0[0x1];
		::RPG::CustomRP::CustomLightQualityFilter quality; // 0x68
		::RPG::CustomRP::CustomLightQualityFilter KCOKJLJEJOC; // 0x6C
		::System::Collections::Generic::List_1<::System::String*>* envOption; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LKEIKDJAKOG; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BDPKDMFLHFC; // 0x80
		::System::Int32 envIdx; // 0x88
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* MLNACGNHHCD; // 0x90
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>* HNMLECLMKCN; // 0x98
		::System::Collections::Generic::List_1<::SceneLightVolume*>* NMJIEIECGCK; // 0xA0
		::UnityEngine::Vector3 LDDCMDFGIOB; // 0xA8
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MEIGMBOLDOF*>* OKHPACJOOHL; // 0xB8
		::System::Boolean JGKDBPPOKHI; // 0xC0
		::System::Byte _padding3[0x7];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::OpenWorld::StreamingLightEnum>* KLCGOBAIAOO; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* PALBELILEID; // 0xD0
		::System::Collections::Generic::List_1<::SceneLightVolume*>* IHOPPHFNIIK; // 0xD8
		::System::String* IPIABPELJEF; // 0xE0
		static ::EditorLightPreviewer** StaticGet_viewer()
		{
			return (::EditorLightPreviewer**)UnitySDK::FromName("", "EditorLightPreviewer")->GetStaticField(0x47140);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_UPDATE_OFFSET))(this);
		}

		::System::Boolean IsAlive(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_ISALIVE_OFFSET))(this, a1);
		}

		::System::Int32 GetCIDFromObj(::UnityEngine::GameObject* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_GETCIDFROMOBJ_OFFSET))(this, a1);
		}

		::System::Void ExitPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_EXITPREVIEW_OFFSET))(this);
		}

		::System::Void StartPreview(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_STARTPREVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PinCurrentCamPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_PINCURRENTCAMPOS_OFFSET))(this);
		}

		::System::Void CancelPinCurrentCamPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_CANCELPINCURRENTCAMPOS_OFFSET))(this);
		}

		::System::Void ChangeEnv(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_CHANGEENV_OFFSET))(this, a1);
		}

		::System::Void ChangeQuality(::RPG::CustomRP::CustomLightQualityFilter a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_CHANGEQUALITY_OFFSET))(this, a1);
		}

		::System::Void IHEHEGCHEKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_IHEHEGCHEKD_OFFSET))(this);
		}

		::System::Void ResetLightScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_RESETLIGHTSCENE_OFFSET))(this);
		}

		::System::Boolean LoadHeader(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_LOADHEADER_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetLightFGameObjectFromControlID(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_GETLIGHTFGAMEOBJECTFROMCONTROLID_OFFSET))(this, a1);
		}

		::System::Void KEIBLCCEFAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_KEIBLCCEFAK_OFFSET))(this);
		}

		::System::Void PPCICJBEPML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_PPCICJBEPML_OFFSET))(this);
		}

		::System::Void MOEPNHDJLLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_MOEPNHDJLLB_OFFSET))(this);
		}

		::CNNIBJAKKOI* ALKKOCPBDJG(::System::String* a1)
		{
			return ((::CNNIBJAKKOI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_ALKKOCPBDJG_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* OLCDNOFPDNE(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_OLCDNOFPDNE_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::StreamingLightEnum KCJMPDAFPHJ(::System::String* a1)
		{
			return ((::RPG::Client::OpenWorld::StreamingLightEnum(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_KCJMPDAFPHJ_OFFSET))(this, a1);
		}

		::System::Boolean HOEIPJAIAEH(::System::String* a1, ::RPG::Client::OpenWorld::StreamingLightEnum a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_HOEIPJAIAEH_OFFSET))(this, a1, a2);
		}

		::System::Boolean BCCAHNEBLPN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_BCCAHNEBLPN_OFFSET))(this, a1);
		}

		::System::Boolean LCOEGFACMDD(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_LCOEGFACMDD_OFFSET))(this, a1, a2);
		}

		::System::Void KNLBBIALPNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_KNLBBIALPNK_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void KBCJNOGFMFE(::System::Int32 a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_KBCJNOGFMFE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GetRegisteredLightTransforms()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_GETREGISTEREDLIGHTTRANSFORMS_OFFSET))(this);
		}

		::SceneLightVolume* CCCMOCIELFO(::UnityEngine::Vector3 a1)
		{
			return ((::SceneLightVolume*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_CCCMOCIELFO_OFFSET))(this, a1);
		}

		::System::Boolean BFHBNMFGBLL(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_BFHBNMFGBLL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* KDEHKKOHDCM()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_KDEHKKOHDCM_OFFSET))(this);
		}

		static ::System::Void StartLightPreview(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_STARTLIGHTPREVIEW_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ExitLightPreView()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_EXITLIGHTPREVIEW_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_ONDESTROY_OFFSET))(this);
		}

		static ::System::Boolean IsInLightPreview()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_ISINLIGHTPREVIEW_OFFSET))();
		}

		static ::System::Boolean get_InPreview()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_GET_INPREVIEW_OFFSET))();
		}

		static ::System::Void CNJPBHGIKHM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_CNJPBHGIKHM_OFFSET))(a1);
		}

	};
