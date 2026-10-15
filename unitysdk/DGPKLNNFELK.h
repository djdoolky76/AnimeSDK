#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/LodTemplateSourceType.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/System/Object.h"
class LHJDLMKLANL;
namespace RPG::GameCore { class LodDetail; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace System { class String; }

#define DGPKLNNFELK_AFJNGIIJPPM_OFFSET UNITYSDK_OFFSET(0xE85C0A0)
#define DGPKLNNFELK_BABNFNIDGBP_OFFSET UNITYSDK_OFFSET(0xE85C030)
#define DGPKLNNFELK_BAODMCIPIPO_OFFSET UNITYSDK_OFFSET(0xE85C050)
#define DGPKLNNFELK_BLJLIHCPEAK_OFFSET UNITYSDK_OFFSET(0xE85BD80)
#define DGPKLNNFELK_CTOR_1_OFFSET UNITYSDK_OFFSET(0xE85BAA0)
#define DGPKLNNFELK_CTOR_OFFSET UNITYSDK_OFFSET(0xE85B9A0)
#define DGPKLNNFELK_FLCBNJJAFJO_OFFSET UNITYSDK_OFFSET(0xE85C0F0)
#define DGPKLNNFELK_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xE85BF70)
#define DGPKLNNFELK_GET_DITHERSWITCH_OFFSET UNITYSDK_OFFSET(0xE85BFD0)
#define DGPKLNNFELK_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xE85BF50)
#define DGPKLNNFELK_GET_ISAUTOGEN_OFFSET UNITYSDK_OFFSET(0xE85BFF0)
#define DGPKLNNFELK_GET_ISPERSISTENT_OFFSET UNITYSDK_OFFSET(0xE85BF60)
#define DGPKLNNFELK_GET_LAYERTYPE_OFFSET UNITYSDK_OFFSET(0xE85BFC0)
#define DGPKLNNFELK_GET_LAYER_OFFSET UNITYSDK_OFFSET(0xE85BFB0)
#define DGPKLNNFELK_GET_LODDETAILLIST_OFFSET UNITYSDK_OFFSET(0xE85BFA0)
#define DGPKLNNFELK_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE85BF40)
#define DGPKLNNFELK_GET_NORMDISTANCE_OFFSET UNITYSDK_OFFSET(0xE85BF80)
#define DGPKLNNFELK_GET_OBJECTSIZE_OFFSET UNITYSDK_OFFSET(0xE85BF90)
#define DGPKLNNFELK_GET_SOURCELODTEMPLATE_OFFSET UNITYSDK_OFFSET(0xE85C010)
#define DGPKLNNFELK_GET_SOURCENORMDISTANCETEMPLATE_OFFSET UNITYSDK_OFFSET(0xE85C020)
#define DGPKLNNFELK_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xE85C000)
#define DGPKLNNFELK_GET_USEAABBDIST_OFFSET UNITYSDK_OFFSET(0xE85BFE0)
#define DGPKLNNFELK_GGILGABPMEL_OFFSET UNITYSDK_OFFSET(0xE85BEE0)
#define DGPKLNNFELK_LDBMFCMJBMO_OFFSET UNITYSDK_OFFSET(0xE85BCF0)
#define DGPKLNNFELK_PDNAJIICOMB_OFFSET UNITYSDK_OFFSET(0xE85C150)
#define DGPKLNNFELK_PGLHAMMBGLG_OFFSET UNITYSDK_OFFSET(0xE85BE20)

	class DGPKLNNFELK : public ::System::Object
	{
	public:
		::System::String* _Layer_k__BackingField; // 0x10
		::RPG::GameCore::NormDistanceLodTemplate* _SourceNormDistanceTemplate_k__BackingField; // 0x18
		::LHJDLMKLANL* CNIIOMHNACP; // 0x20
		::RPG::GameCore::LodTemplate* _SourceLodTemplate_k__BackingField; // 0x28
		::System::String* _Name_k__BackingField; // 0x30
		::Il2CppArray<::RPG::GameCore::LodDetail*>* _LodDetailList_k__BackingField; // 0x38
		::System::Single _ObjectSize_k__BackingField; // 0x40
		::System::Boolean _IsPersistent_k__BackingField; // 0x44
		::System::Boolean _UseAABBDist_k__BackingField; // 0x45
		::System::Boolean _DitherSwitch_k__BackingField; // 0x46
		::System::Boolean _IsAutoGen_k__BackingField; // 0x47
		::System::Single _NormDistance_k__BackingField; // 0x48
		::RPG::GameCore::StreamingLayerType _LayerType_k__BackingField; // 0x4C
		::RPG::Client::OpenWorld::LodTemplateSourceType _SourceType_k__BackingField; // 0x50
		::System::Single _Distance_k__BackingField; // 0x54
		::System::Int32 _Index_k__BackingField; // 0x58
		::System::Void _ctor(::RPG::GameCore::LodTemplate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodTemplate*))((::PBYTE)hIl2Cpp + DGPKLNNFELK_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::NormDistanceLodTemplate* a1, ::System::Single a2, ::LHJDLMKLANL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NormDistanceLodTemplate*, ::System::Single, ::LHJDLMKLANL*))((::PBYTE)hIl2Cpp + DGPKLNNFELK_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LDBMFCMJBMO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGPKLNNFELK_LDBMFCMJBMO_OFFSET))(this, a1);
		}

		::System::Void BLJLIHCPEAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_BLJLIHCPEAK_OFFSET))(this);
		}

		::System::Int32 PGLHAMMBGLG(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DGPKLNNFELK_PGLHAMMBGLG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GGILGABPMEL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GGILGABPMEL_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_INDEX_OFFSET))(this);
		}

		::System::Boolean get_IsPersistent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_ISPERSISTENT_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_DISTANCE_OFFSET))(this);
		}

		::System::Single get_NormDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_NORMDISTANCE_OFFSET))(this);
		}

		::System::Single get_ObjectSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_OBJECTSIZE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LodDetail*>* get_LodDetailList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LodDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_LODDETAILLIST_OFFSET))(this);
		}

		::System::String* get_Layer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_LAYER_OFFSET))(this);
		}

		::RPG::GameCore::StreamingLayerType get_LayerType()
		{
			return ((::RPG::GameCore::StreamingLayerType(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_LAYERTYPE_OFFSET))(this);
		}

		::System::Boolean get_DitherSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_DITHERSWITCH_OFFSET))(this);
		}

		::System::Boolean get_UseAABBDist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_USEAABBDIST_OFFSET))(this);
		}

		::System::Boolean get_IsAutoGen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_ISAUTOGEN_OFFSET))(this);
		}

		::RPG::Client::OpenWorld::LodTemplateSourceType get_SourceType()
		{
			return ((::RPG::Client::OpenWorld::LodTemplateSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_SOURCETYPE_OFFSET))(this);
		}

		::RPG::GameCore::LodTemplate* get_SourceLodTemplate()
		{
			return ((::RPG::GameCore::LodTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_SOURCELODTEMPLATE_OFFSET))(this);
		}

		::RPG::GameCore::NormDistanceLodTemplate* get_SourceNormDistanceTemplate()
		{
			return ((::RPG::GameCore::NormDistanceLodTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_GET_SOURCENORMDISTANCETEMPLATE_OFFSET))(this);
		}

		::System::Single BABNFNIDGBP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_BABNFNIDGBP_OFFSET))(this);
		}

		::System::Int32 BAODMCIPIPO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_BAODMCIPIPO_OFFSET))(this);
		}

		::System::Int32 AFJNGIIJPPM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_AFJNGIIJPPM_OFFSET))(this);
		}

		::System::Int32 FLCBNJJAFJO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_FLCBNJJAFJO_OFFSET))(this);
		}

		::LHJDLMKLANL* PDNAJIICOMB()
		{
			return ((::LHJDLMKLANL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPKLNNFELK_PDNAJIICOMB_OFFSET))(this);
		}

	};
