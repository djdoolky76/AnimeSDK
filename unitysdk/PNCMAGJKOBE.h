#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCommonEntityAnimEvents; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace MoleMole::Config { class ConfigEntitySharedAnimEvents; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNCMAGJKOBE_BAHLJOBFLOD_OFFSET UNITYSDK_OFFSET(0x1D636310)
#define PNCMAGJKOBE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1D6343C0)
#define PNCMAGJKOBE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1D636200)
#define PNCMAGJKOBE_FIAGGGEMAND_OFFSET UNITYSDK_OFFSET(0x1D634AE0)
#define PNCMAGJKOBE_GCKHEFEPNEC_OFFSET UNITYSDK_OFFSET(0x1D635CF0)
#define PNCMAGJKOBE_HDBDCOKMHNE_OFFSET UNITYSDK_OFFSET(0x1D635A00)
#define PNCMAGJKOBE_HHHMOHOPCJM_OFFSET UNITYSDK_OFFSET(0x1D634C80)
#define PNCMAGJKOBE_KGFDINCPDPB_OFFSET UNITYSDK_OFFSET(0x1D635670)
#define PNCMAGJKOBE_LFJCIIDPGMD_OFFSET UNITYSDK_OFFSET(0x1D634730)
#define PNCMAGJKOBE_NGGKEEGICOC_OFFSET UNITYSDK_OFFSET(0x1D635020)
#define PNCMAGJKOBE_NHCBIOJJKHG_OFFSET UNITYSDK_OFFSET(0x1D636560)
#define PNCMAGJKOBE_NOKIBMJKEPN_OFFSET UNITYSDK_OFFSET(0x1D6353D0)
#define PNCMAGJKOBE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1D6349B0)
#define PNCMAGJKOBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D634350)

inline static constexpr unsigned int PNCMAGJKOBE_TypeDefinitionIndex = 42320;

class PNCMAGJKOBE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::MoleMole::Config::ConfigCommonEntityAnimEvents*>** StaticGet_CKHNFJKEOPD()
	{
		return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::MoleMole::Config::ConfigCommonEntityAnimEvents*>**)Il2CppClass::FromTypeDefinitionIndex(PNCMAGJKOBE_TypeDefinitionIndex)->GetStaticField(0x4B2B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>** StaticGet_IDCMAEKBJOF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>**)Il2CppClass::FromTypeDefinitionIndex(PNCMAGJKOBE_TypeDefinitionIndex)->GetStaticField(0x4B2B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>** StaticGet_HOMMFLCPPGG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>**)Il2CppClass::FromTypeDefinitionIndex(PNCMAGJKOBE_TypeDefinitionIndex)->GetStaticField(0x4B2C0);
	}
	// static const ::System::Char HCCNDIGKAFF = 0x23; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNCMAGJKOBE__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNCMAGJKOBE_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Void LFJCIIDPGMD(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_LFJCIIDPGMD_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean HHHMOHOPCJM(::System::String* DOAMBBJJMCN, ::MoleMole::Config::ConfigCommonEntityAnimEvents*& OKPMKKMKENF)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::ConfigCommonEntityAnimEvents*&))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_HHHMOHOPCJM_OFFSET))(DOAMBBJJMCN, OKPMKKMKENF);
	}

	static ::System::Void NOKIBMJKEPN(::System::String* OIIHCACKLHD, ::MoleMole::Config::ConfigCommonEntityAnimEvents* DFMKILICPFB)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::ConfigCommonEntityAnimEvents*))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_NOKIBMJKEPN_OFFSET))(OIIHCACKLHD, DFMKILICPFB);
	}

	static ::MoleMole::Config::ConfigEntityAnimEvent* KGFDINCPDPB(::MoleMole::SkillCharacterScriptConfig* DFMKILICPFB, ::System::String* PKGDBDFHOMO)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::MoleMole::SkillCharacterScriptConfig*, ::System::String*))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_KGFDINCPDPB_OFFSET))(DFMKILICPFB, PKGDBDFHOMO);
	}

	static ::MoleMole::Config::ConfigEntityAnimEvent* GCKHEFEPNEC(::MoleMole::Battle::Entity* KDEHMPGOCEP, ::System::String* GPMKNAIINNH)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_GCKHEFEPNEC_OFFSET))(KDEHMPGOCEP, GPMKNAIINNH);
	}

	static ::System::Void NGGKEEGICOC(::System::Boolean EBAJLMBGMFE, ::System::String* OIIHCACKLHD, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_NGGKEEGICOC_OFFSET))(EBAJLMBGMFE, OIIHCACKLHD, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Boolean BAHLJOBFLOD(::System::String* PKGDBDFHOMO)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_BAHLJOBFLOD_OFFSET))(PKGDBDFHOMO);
	}

	static ::MoleMole::Config::ConfigEntityAnimEvent* HDBDCOKMHNE(::System::String* LMCPMAKFIIG)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::System::String*))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_HDBDCOKMHNE_OFFSET))(LMCPMAKFIIG);
	}

	static ::System::Void FIAGGGEMAND()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNCMAGJKOBE_FIAGGGEMAND_OFFSET))();
	}

	static ::System::Void NHCBIOJJKHG(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySharedAnimEvents*>* EBFLFAFGJCC)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySharedAnimEvents*>*))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_NHCBIOJJKHG_OFFSET))(EBFLFAFGJCC);
	}
};
