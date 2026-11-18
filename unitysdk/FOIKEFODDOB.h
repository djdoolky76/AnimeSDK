#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class FOIKEFODDOB_GPDHCOFKGFG;
class FOIKEFODDOB_LMLCOCBPJGD;
class FOIKEFODDOB_PAEEFCDENDL;
namespace MoleMole::Config { class ConfigUIAnimationFunctionSet; }
namespace MoleMole::Config { class ConfigUIScriptableAnimationV2; }
namespace MoleMole::Config { class ConfigUIScriptableAnimationV2Index; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOIKEFODDOB_ADOIKIFKIMO_OFFSET UNITYSDK_OFFSET(0x13236B10)
#define FOIKEFODDOB_AMLKFHLNMHG_OFFSET UNITYSDK_OFFSET(0x13235C40)
#define FOIKEFODDOB_CHOKECPBMCF_OFFSET UNITYSDK_OFFSET(0x13235140)
#define FOIKEFODDOB_CIEIBGHOGNB_OFFSET UNITYSDK_OFFSET(0x13234FF0)
#define FOIKEFODDOB_CPIJAGALJEH_OFFSET UNITYSDK_OFFSET(0x13236FD0)
#define FOIKEFODDOB_DKAMBJKCJCH_OFFSET UNITYSDK_OFFSET(0x13236FC0)
#define FOIKEFODDOB_ENPOKGNPHLB_OFFSET UNITYSDK_OFFSET(0x13236B00)
#define FOIKEFODDOB_FIPIHOIMNCD_OFFSET UNITYSDK_OFFSET(0x13235730)
#define FOIKEFODDOB_GCCPMKHIOGK_OFFSET UNITYSDK_OFFSET(0x13236500)
#define FOIKEFODDOB_HBFDCNLMGDG_OFFSET UNITYSDK_OFFSET(0x13235840)
#define FOIKEFODDOB_HFJCKJODBDF_OFFSET UNITYSDK_OFFSET(0x13235610)
#define FOIKEFODDOB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13235070)
#define FOIKEFODDOB_JMCCKPGEFNH_OFFSET UNITYSDK_OFFSET(0x13236940)
#define FOIKEFODDOB_KNLBHFHPPKB_OFFSET UNITYSDK_OFFSET(0x13237010)
#define FOIKEFODDOB_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x13236AF0)
#define FOIKEFODDOB_OEBMBEMPLCI_OFFSET UNITYSDK_OFFSET(0x13236330)
#define FOIKEFODDOB_OMHJONNPEPF_OFFSET UNITYSDK_OFFSET(0x13235EA0)
#define FOIKEFODDOB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13234D90)
#define FOIKEFODDOB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13234F50)
#define FOIKEFODDOB__CTOR_OFFSET UNITYSDK_OFFSET(0x13234B50)

inline static constexpr unsigned int FOIKEFODDOB_TypeDefinitionIndex = 66538;

class FOIKEFODDOB
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UISpecialNumGroup*>** StaticGet_LDCOANOPEEG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UISpecialNumGroup*>**)Il2CppClass::FromTypeDefinitionIndex(FOIKEFODDOB_TypeDefinitionIndex)->GetStaticField(0x31A90);
	}
	::FOIKEFODDOB_LMLCOCBPJGD* _EGBKMJIFEKN_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>* KJJDBENBFIE; // 0x30
	::FOIKEFODDOB_PAEEFCDENDL* _CKCBEGJAOFI_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*>* LLAKHMODAII; // 0x40
	::FOIKEFODDOB_GPDHCOFKGFG* _KICMCOBLLIH_k__BackingField; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIAnimationFunctionSet*>* GBEAHABKECP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOIKEFODDOB__CCTOR_OFFSET))();
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FOIKEFODDOB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	static ::System::String* CIEIBGHOGNB(::System::String* CJIFLIHGICG)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOIKEFODDOB_CIEIBGHOGNB_OFFSET))(CJIFLIHGICG);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FOIKEFODDOB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CHOKECPBMCF(::System::String* CJIFLIHGICG, ::System::Boolean GHOLINNCJCE, ::System::Action_1<::MoleMole::Config::ConfigUIAnimationFunctionSet*>* IBNICCGMILF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::Config::ConfigUIAnimationFunctionSet*>*))((::PBYTE)hIl2Cpp + FOIKEFODDOB_CHOKECPBMCF_OFFSET))(this, CJIFLIHGICG, GHOLINNCJCE, IBNICCGMILF);
	}

	::System::Boolean HBFDCNLMGDG(::System::String* CJIFLIHGICG, ::MoleMole::Config::ConfigUIAnimationFunctionSet*& IHGPLHGNACL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigUIAnimationFunctionSet*&))((::PBYTE)hIl2Cpp + FOIKEFODDOB_HBFDCNLMGDG_OFFSET))(this, CJIFLIHGICG, IHGPLHGNACL);
	}

	::System::Boolean AMLKFHLNMHG(::System::String* CJIFLIHGICG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOIKEFODDOB_AMLKFHLNMHG_OFFSET))(this, CJIFLIHGICG);
	}

	::System::Void OMHJONNPEPF(::MoleMole::Config::ConfigUIScriptableAnimationV2Index* PAMJIOAIBEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimationV2Index*))((::PBYTE)hIl2Cpp + FOIKEFODDOB_OMHJONNPEPF_OFFSET))(this, PAMJIOAIBEJ);
	}

	::System::Void GCCPMKHIOGK(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigUIScriptableAnimationV2* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigUIScriptableAnimationV2*))((::PBYTE)hIl2Cpp + FOIKEFODDOB_GCCPMKHIOGK_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}

	::System::Collections::Generic::IEnumerable_1<::System::String*>* JMCCKPGEFNH()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_JMCCKPGEFNH_OFFSET))(this);
	}

	::FOIKEFODDOB_LMLCOCBPJGD* MDLLGIMAGCP()
	{
		return ((::FOIKEFODDOB_LMLCOCBPJGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_MDLLGIMAGCP_OFFSET))(this);
	}

	::FOIKEFODDOB_PAEEFCDENDL* ENPOKGNPHLB()
	{
		return ((::FOIKEFODDOB_PAEEFCDENDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_ENPOKGNPHLB_OFFSET))(this);
	}

	::System::Void ADOIKIFKIMO(::System::String* JAOLLINGNJJ, ::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FOIKEFODDOB_ADOIKIFKIMO_OFFSET))(this, JAOLLINGNJJ, GHOLINNCJCE, IBNICCGMILF);
	}

	::FOIKEFODDOB_GPDHCOFKGFG* DKAMBJKCJCH()
	{
		return ((::FOIKEFODDOB_GPDHCOFKGFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_DKAMBJKCJCH_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIAnimationFunctionSet*>* CPIJAGALJEH()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIAnimationFunctionSet*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_CPIJAGALJEH_OFFSET))(this);
	}

	::System::Boolean HFJCKJODBDF(::System::String* CJIFLIHGICG, ::MoleMole::Config::ConfigUIAnimationFunctionSet*& IHGPLHGNACL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigUIAnimationFunctionSet*&))((::PBYTE)hIl2Cpp + FOIKEFODDOB_HFJCKJODBDF_OFFSET))(this, CJIFLIHGICG, IHGPLHGNACL);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UISpecialNumGroup*>* KNLBHFHPPKB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UISpecialNumGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_KNLBHFHPPKB_OFFSET))(this);
	}

	::System::Void FIPIHOIMNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_FIPIHOIMNCD_OFFSET))(this);
	}

	::System::Void OEBMBEMPLCI(::System::String* JAOLLINGNJJ, ::Foundation::AssetPath OIIHCACKLHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOIKEFODDOB_OEBMBEMPLCI_OFFSET))(this, JAOLLINGNJJ, OIIHCACKLHD);
	}
};
