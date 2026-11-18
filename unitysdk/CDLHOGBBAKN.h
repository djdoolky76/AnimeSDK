#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierBatchLoad; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierKeyBelongMap; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDLHOGBBAKN_ACPMEOADIKG_OFFSET UNITYSDK_OFFSET(0x15325490)
#define CDLHOGBBAKN_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x153238A0)
#define CDLHOGBBAKN_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x15323790)
#define CDLHOGBBAKN_EIMDEOOCDGK_OFFSET UNITYSDK_OFFSET(0x15324D20)
#define CDLHOGBBAKN_GDLILMELDJB_OFFSET UNITYSDK_OFFSET(0x15325660)
#define CDLHOGBBAKN_HANPLIAOJNN_OFFSET UNITYSDK_OFFSET(0x15324F30)
#define CDLHOGBBAKN_HDDLLPGEFHD_OFFSET UNITYSDK_OFFSET(0x15325180)
#define CDLHOGBBAKN_HLJNNEGJPHI_OFFSET UNITYSDK_OFFSET(0x15325C20)
#define CDLHOGBBAKN_IGILJOFKFLF_OFFSET UNITYSDK_OFFSET(0x15323E50)
#define CDLHOGBBAKN_IIAEOJLAKLA_OFFSET UNITYSDK_OFFSET(0x153246E0)
#define CDLHOGBBAKN_PCGPFBGFGNC_OFFSET UNITYSDK_OFFSET(0x153243D0)
#define CDLHOGBBAKN__CCTOR_OFFSET UNITYSDK_OFFSET(0x15323530)

inline static constexpr unsigned int CDLHOGBBAKN_TypeDefinitionIndex = 46173;

class CDLHOGBBAKN : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap** StaticGet_FKJKOAPJOIN()
	{
		return (::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap**)Il2CppClass::FromTypeDefinitionIndex(CDLHOGBBAKN_TypeDefinitionIndex)->GetStaticField(0x3A510);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>** StaticGet_KMCHCCCOIED()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>**)Il2CppClass::FromTypeDefinitionIndex(CDLHOGBBAKN_TypeDefinitionIndex)->GetStaticField(0x3A518);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_ONNMGFCDKNN()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CDLHOGBBAKN_TypeDefinitionIndex)->GetStaticField(0x3A520);
	}
	static ::System::Collections::Generic::HashSet_1<::Foundation::AssetPath>** StaticGet_MJIAMBGJOOG()
	{
		return (::System::Collections::Generic::HashSet_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(CDLHOGBBAKN_TypeDefinitionIndex)->GetStaticField(0x3A528);
	}
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_PBBDLIFKBHE()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CDLHOGBBAKN_TypeDefinitionIndex)->GetStaticField(0x3A530);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>** StaticGet_NEBNPIGKHKI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(CDLHOGBBAKN_TypeDefinitionIndex)->GetStaticField(0x3A538);
	}
	static ::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad** StaticGet_FCGJDGHFALP()
	{
		return (::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad**)Il2CppClass::FromTypeDefinitionIndex(CDLHOGBBAKN_TypeDefinitionIndex)->GetStaticField(0x3A540);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*>** StaticGet_MNHAEDMDHFE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*>**)Il2CppClass::FromTypeDefinitionIndex(CDLHOGBBAKN_TypeDefinitionIndex)->GetStaticField(0x3A548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDLHOGBBAKN__CCTOR_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::ConfigMaterialPropertyModifier* IGILJOFKFLF(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::System::String*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_IGILJOFKFLF_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void IIAEOJLAKLA(::System::Int32 AJNFMBFOGJA)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_IIAEOJLAKLA_OFFSET))(AJNFMBFOGJA);
	}

	static ::System::Collections::Generic::HashSet_1<::System::Int32>* EIMDEOOCDGK(::System::String* LGLJMGIKODD, ::System::Action_1<::System::Collections::Generic::HashSet_1<::System::Int32>*>* IIAMIDNPIKB)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::System::String*, ::System::Action_1<::System::Collections::Generic::HashSet_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_EIMDEOOCDGK_OFFSET))(LGLJMGIKODD, IIAMIDNPIKB);
	}

	static ::System::Int32 HANPLIAOJNN(::System::String* JMHOMOGPPHP)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_HANPLIAOJNN_OFFSET))(JMHOMOGPPHP);
	}

	static ::System::Void HDDLLPGEFHD(::System::Collections::Generic::List_1<::System::String*>* BLIGEFDLKEK)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_HDDLLPGEFHD_OFFSET))(BLIGEFDLKEK);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ConfigMaterialPropertyModifier* PCGPFBGFGNC(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::System::String*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_PCGPFBGFGNC_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void ACPMEOADIKG(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF, ::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_ACPMEOADIKG_OFFSET))(GHOLINNCJCE, IBNICCGMILF, JPOGGACGEPO);
	}

	static ::System::Void GDLILMELDJB(::MoleMole::Config::ConfigMaterialPropertyModifierMap* DFMKILICPFB)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_GDLILMELDJB_OFFSET))(DFMKILICPFB);
	}

	static ::MoleMole::ConfigAnimationCurveGroup* HLJNNEGJPHI(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::ConfigAnimationCurveGroup*(*)(::System::String*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_HLJNNEGJPHI_OFFSET))(MCOHLHMKLIP);
	}
};
