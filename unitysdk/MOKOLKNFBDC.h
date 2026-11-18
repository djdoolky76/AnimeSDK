#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSkinPreview; }
namespace MoleMole::Config { class InteractionCommonData; }
namespace MoleMole::Config { class SkinPreviewData; }
namespace MoleMole::Config { class SkinPreviewDataOfAvatar; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOKOLKNFBDC_AKBCCLMHIJC_OFFSET UNITYSDK_OFFSET(0x131A8A60)
#define MOKOLKNFBDC_BJHHNNGACFN_OFFSET UNITYSDK_OFFSET(0x131A9600)
#define MOKOLKNFBDC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x131A86F0)
#define MOKOLKNFBDC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x131A8540)
#define MOKOLKNFBDC_EKAFKMEPEKL_OFFSET UNITYSDK_OFFSET(0x131A93E0)
#define MOKOLKNFBDC_HOMEOJAGFLF_OFFSET UNITYSDK_OFFSET(0x131A98E0)
#define MOKOLKNFBDC_KMDFNBEFBFI_OFFSET UNITYSDK_OFFSET(0x131A9130)
#define MOKOLKNFBDC_NPAHAPEAPPP_OFFSET UNITYSDK_OFFSET(0x131A8D10)
#define MOKOLKNFBDC_PGNJIJGCHII_OFFSET UNITYSDK_OFFSET(0x131A8780)
#define MOKOLKNFBDC__CCTOR_OFFSET UNITYSDK_OFFSET(0x131A84A0)

inline static constexpr unsigned int MOKOLKNFBDC_TypeDefinitionIndex = 70023;

class MOKOLKNFBDC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SkinPreviewData*>** StaticGet_FCJOCKEOPBM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SkinPreviewData*>**)Il2CppClass::FromTypeDefinitionIndex(MOKOLKNFBDC_TypeDefinitionIndex)->GetStaticField(0x4C000);
	}
	static ::MoleMole::Config::InteractionCommonData** StaticGet_GKHCIDHABFE()
	{
		return (::MoleMole::Config::InteractionCommonData**)Il2CppClass::FromTypeDefinitionIndex(MOKOLKNFBDC_TypeDefinitionIndex)->GetStaticField(0x4C008);
	}
	static ::MoleMole::Config::InteractionCommonData** StaticGet_PBJEPDBJJEE()
	{
		return (::MoleMole::Config::InteractionCommonData**)Il2CppClass::FromTypeDefinitionIndex(MOKOLKNFBDC_TypeDefinitionIndex)->GetStaticField(0x4C010);
	}
	static ::MoleMole::Config::ConfigSkinPreview** StaticGet_KCOCEAOJHLP()
	{
		return (::MoleMole::Config::ConfigSkinPreview**)Il2CppClass::FromTypeDefinitionIndex(MOKOLKNFBDC_TypeDefinitionIndex)->GetStaticField(0x4C018);
	}
	static ::MoleMole::Config::InteractionCommonData** StaticGet_OFNOJKHNMBN()
	{
		return (::MoleMole::Config::InteractionCommonData**)Il2CppClass::FromTypeDefinitionIndex(MOKOLKNFBDC_TypeDefinitionIndex)->GetStaticField(0x4C020);
	}
	static ::System::Single* StaticGet_CGHDCHFFILH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MOKOLKNFBDC_TypeDefinitionIndex)->GetStaticField(0x11980);
	}
	static ::System::Boolean* StaticGet_JDOIEFMLBLH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MOKOLKNFBDC_TypeDefinitionIndex)->GetStaticField(0x11984);
	}
	static ::System::Single* StaticGet_PKOBGPEFNKM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MOKOLKNFBDC_TypeDefinitionIndex)->GetStaticField(0x11988);
	}
	static ::System::Single* StaticGet_DPHOBCLIDFH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MOKOLKNFBDC_TypeDefinitionIndex)->GetStaticField(0x1198C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOKOLKNFBDC__CCTOR_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOKOLKNFBDC_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Boolean PGNJIJGCHII(::System::Int32 PKMFBJMJCOO, ::MoleMole::Config::SkinPreviewDataOfAvatar*& DJCNCELJPOM, ::System::Boolean JENMPJJHNHE)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::SkinPreviewDataOfAvatar*&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOKOLKNFBDC_PGNJIJGCHII_OFFSET))(PKMFBJMJCOO, DJCNCELJPOM, JENMPJJHNHE);
	}

	static ::MoleMole::Config::InteractionCommonData* AKBCCLMHIJC()
	{
		return ((::MoleMole::Config::InteractionCommonData*(*)())((::PBYTE)hIl2Cpp + MOKOLKNFBDC_AKBCCLMHIJC_OFFSET))();
	}

	static ::System::Void NPAHAPEAPPP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOKOLKNFBDC_NPAHAPEAPPP_OFFSET))();
	}

	static ::MoleMole::Config::InteractionCommonData* KMDFNBEFBFI()
	{
		return ((::MoleMole::Config::InteractionCommonData*(*)())((::PBYTE)hIl2Cpp + MOKOLKNFBDC_KMDFNBEFBFI_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOKOLKNFBDC_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean BJHHNNGACFN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOKOLKNFBDC_BJHHNNGACFN_OFFSET))();
	}

	static ::MoleMole::Config::InteractionCommonData* HOMEOJAGFLF()
	{
		return ((::MoleMole::Config::InteractionCommonData*(*)())((::PBYTE)hIl2Cpp + MOKOLKNFBDC_HOMEOJAGFLF_OFFSET))();
	}

	static ::System::Void EKAFKMEPEKL(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOKOLKNFBDC_EKAFKMEPEKL_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
