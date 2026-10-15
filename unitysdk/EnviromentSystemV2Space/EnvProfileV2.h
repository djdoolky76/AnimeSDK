#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace EnviromentSystemV2Space { class BoolCurvePropertyData; }
namespace EnviromentSystemV2Space { class BoolPropertyData; }
namespace EnviromentSystemV2Space { class EnvLayoutInfo; }
namespace EnviromentSystemV2Space { class EnvResourceCurvePropertyData; }
namespace EnviromentSystemV2Space { class EnvResourceDataAdapterPropertyData; }
namespace EnviromentSystemV2Space { class FloatCurvePropertyData; }
namespace EnviromentSystemV2Space { class FloatPropertyData; }
namespace EnviromentSystemV2Space { class GradientPropertyData; }
namespace EnviromentSystemV2Space { class IntCurvePropertyData; }
namespace EnviromentSystemV2Space { class IntPropertyData; }
namespace EnviromentSystemV2Space { class PrefabCurvePropertyData; }
namespace EnviromentSystemV2Space { class PrefabPropertyData; }
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace EnviromentSystemV2Space { class StructureData; }
namespace EnviromentSystemV2Space { class TextCurvePropertyData; }
namespace EnviromentSystemV2Space { class TextPropertyData; }
namespace EnviromentSystemV2Space { class TexturePropertyData; }
namespace EnviromentSystemV2Space { class Vector4CurvePropertyData; }
namespace EnviromentSystemV2Space { class Vector4PropertyData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_CCTOR_OFFSET UNITYSDK_OFFSET(0x1563EFF0)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1563ED50)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_DHKKNAIPGBG_OFFSET UNITYSDK_OFFSET(0x1563C060)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_EMCKLAMMBFC_OFFSET UNITYSDK_OFFSET(0x1563E160)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_GNGNOPIGGON_OFFSET UNITYSDK_OFFSET(0x1563E370)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_JKEOAAHIFPC_OFFSET UNITYSDK_OFFSET(0x1563E270)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_JODOPKBGBLF_OFFSET UNITYSDK_OFFSET(0x1563C6A0)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x1563E8F0)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_MNLPOBOEENF_OFFSET UNITYSDK_OFFSET(0x1563C8C0)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1563C2B0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvProfileV2_TypeDefinitionIndex = 49406;

	class EnvProfileV2 : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean isSubclip; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* profilePath; // 0x20
		::System::Boolean enableLayout; // 0x28
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::EnvLayoutInfo*>* layoutInfo; // 0x30
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::IntPropertyData*>* intPropertyDatas; // 0x38
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::FloatPropertyData*>* floatPropertyDatas; // 0x40
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::TextPropertyData*>* textPropertyDatas; // 0x48
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::BoolPropertyData*>* boolPropertyDatas; // 0x50
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::Vector4PropertyData*>* Vector4PropertyDatas; // 0x58
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::TexturePropertyData*>* texturePropertyDatas; // 0x60
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::PrefabPropertyData*>* prefabPropertyDatas; // 0x68
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::FloatCurvePropertyData*>* curvePropertyDatas; // 0x70
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::GradientPropertyData*>* gradientPropertyDatas; // 0x78
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::Vector4CurvePropertyData*>* curve4PropertyDatas; // 0x80
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::StructureData*>* structureDatas; // 0x88
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::EnvResourceDataAdapterPropertyData*>* resourceAdapterPropertyDatas; // 0x90
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::EnvResourceCurvePropertyData*>* resourceCurvePropertyDatas; // 0x98
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::BoolCurvePropertyData*>* BoolCurvePropertyDatas; // 0xA0
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::IntCurvePropertyData*>* IntCurvePropertyDatas; // 0xA8
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::TextCurvePropertyData*>* TextCurvePropertyDatas; // 0xB0
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::PrefabCurvePropertyData*>* PrefabCurvePropertyDatas; // 0xB8
		static ::System::Collections::Generic::List_1<::EnviromentSystemV2Space::PropertyDataBase*>** StaticGet__tempList()
		{
			return (::System::Collections::Generic::List_1<::EnviromentSystemV2Space::PropertyDataBase*>**)UnitySDK::FromName("EnviromentSystemV2Space", "EnvProfileV2")->GetStaticField(0x59120);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_CCTOR_OFFSET))();
		}

		::System::Void DHKKNAIPGBG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_DHKKNAIPGBG_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Int32 JODOPKBGBLF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_JODOPKBGBLF_OFFSET))(this);
		}

		::System::Void MNLPOBOEENF(::System::Collections::Generic::List_1<::EnviromentSystemV2Space::PropertyDataBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystemV2Space::PropertyDataBase*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_MNLPOBOEENF_OFFSET))(this, a1);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::EnviromentSystemV2Space::PropertyDataBase*>* EMCKLAMMBFC()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::EnviromentSystemV2Space::PropertyDataBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_EMCKLAMMBFC_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::EnviromentSystemV2Space::PropertyDataBase*>* JKEOAAHIFPC()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::EnviromentSystemV2Space::PropertyDataBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_JKEOAAHIFPC_OFFSET))(this);
		}

		::System::Boolean GNGNOPIGGON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_GNGNOPIGGON_OFFSET))(this);
		}

		::System::Boolean LCJMKJPECAP(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_LCJMKJPECAP_OFFSET))(this, a1);
		}

	};
}
