#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/AbyssS2_GenAreaConfigItem.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"
#include "unitysdk/MoleMole/AbyssS2_RuntimenConfigMeta.h"

namespace MoleMole { class AbyssS2_IRNG; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OACGJEMDGLF_AEANJDOPIAI_OFFSET UNITYSDK_OFFSET(0x114E47C0)
#define OACGJEMDGLF_BFKADBDEFOI_OFFSET UNITYSDK_OFFSET(0x114E4190)
#define OACGJEMDGLF_BIEALBCGFHI_OFFSET UNITYSDK_OFFSET(0x114E5640)
#define OACGJEMDGLF_CFIGHOFLJII_OFFSET UNITYSDK_OFFSET(0x114E48E0)
#define OACGJEMDGLF_DHHJGCMELPL_OFFSET UNITYSDK_OFFSET(0x114E6B80)
#define OACGJEMDGLF_DOMNJILBDEP_OFFSET UNITYSDK_OFFSET(0x114E49F0)
#define OACGJEMDGLF_EBENPOHCBNP_OFFSET UNITYSDK_OFFSET(0x114E4F00)
#define OACGJEMDGLF_FIJEBEEICBA_OFFSET UNITYSDK_OFFSET(0x114E5A50)
#define OACGJEMDGLF_FNKNMFJMAGM_OFFSET UNITYSDK_OFFSET(0x114E7060)
#define OACGJEMDGLF_GJBIMJEECBA_OFFSET UNITYSDK_OFFSET(0x114E4770)
#define OACGJEMDGLF_GLCDJKEOFOE_OFFSET UNITYSDK_OFFSET(0x114E6250)
#define OACGJEMDGLF_GOCGGFLMPDF_OFFSET UNITYSDK_OFFSET(0x114E57E0)
#define OACGJEMDGLF_HJBKAJMELAE_1_OFFSET UNITYSDK_OFFSET(0x114E4E90)
#define OACGJEMDGLF_HJBKAJMELAE_OFFSET UNITYSDK_OFFSET(0x114E55D0)
#define OACGJEMDGLF_HNJKLAFIIHE_OFFSET UNITYSDK_OFFSET(0x114E67C0)
#define OACGJEMDGLF_JBLFOKFFJND_OFFSET UNITYSDK_OFFSET(0x114E6800)
#define OACGJEMDGLF_KBGOAGBHNKM_1_OFFSET UNITYSDK_OFFSET(0x114E6550)
#define OACGJEMDGLF_KBGOAGBHNKM_OFFSET UNITYSDK_OFFSET(0x114E5350)
#define OACGJEMDGLF_MCCBIPBODHN_OFFSET UNITYSDK_OFFSET(0x114E3CB0)
#define OACGJEMDGLF_MCKJCGKJIFL_OFFSET UNITYSDK_OFFSET(0x114E4A80)
#define OACGJEMDGLF_NANGKODIMBI_1_OFFSET UNITYSDK_OFFSET(0x114E6FD0)
#define OACGJEMDGLF_NANGKODIMBI_OFFSET UNITYSDK_OFFSET(0x114E4E00)
#define OACGJEMDGLF_NONJGLJMBNG_OFFSET UNITYSDK_OFFSET(0x114E3D40)
#define OACGJEMDGLF_PMHCOODEDDN_OFFSET UNITYSDK_OFFSET(0x114E70A0)
#define OACGJEMDGLF__CCTOR_OFFSET UNITYSDK_OFFSET(0x114E3BB0)

inline static constexpr unsigned int OACGJEMDGLF_TypeDefinitionIndex = 60427;

class OACGJEMDGLF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_DPCPDJDINEK()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(OACGJEMDGLF_TypeDefinitionIndex)->GetStaticField(0x4FD70);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_KEGBDHMDEEE()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(OACGJEMDGLF_TypeDefinitionIndex)->GetStaticField(0x4FD78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OACGJEMDGLF__CCTOR_OFFSET))();
	}

	static ::System::Void MCCBIPBODHN(::System::String* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OACGJEMDGLF_MCCBIPBODHN_OFFSET))(BLLNHDIDKPA);
	}

	static ::System::Void NONJGLJMBNG(::System::Int32 FJCOGHANECN)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + OACGJEMDGLF_NONJGLJMBNG_OFFSET))(FJCOGHANECN);
	}

	static ::MoleMole::FlowCanvas::Nodes::AreaIDTag GJBIMJEECBA(::System::UInt32 AELLPLBJELA)
	{
		return ((::MoleMole::FlowCanvas::Nodes::AreaIDTag(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OACGJEMDGLF_GJBIMJEECBA_OFFSET))(AELLPLBJELA);
	}

	static ::System::Void AEANJDOPIAI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OACGJEMDGLF_AEANJDOPIAI_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* CFIGHOFLJII(::System::Collections::Generic::List_1<::System::Int32>* CJJBAADALLI, ::MoleMole::AbyssS2_GenConfigMeta KFPJGDOLEBL)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + OACGJEMDGLF_CFIGHOFLJII_OFFSET))(CJJBAADALLI, KFPJGDOLEBL);
	}

	static ::System::Void BFKADBDEFOI(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + OACGJEMDGLF_BFKADBDEFOI_OFFSET))(IGAAKDOIPNN);
	}

	static ::System::Void DOMNJILBDEP(::System::String* PPGLBDELEBF)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OACGJEMDGLF_DOMNJILBDEP_OFFSET))(PPGLBDELEBF);
	}

	static ::System::Void MCKJCGKJIFL(::System::Int32 NJEMNLDCHNN, ::MoleMole::AbyssS2_GenConfigMeta KFPJGDOLEBL, ::System::Collections::Generic::List_1<::System::Int32>* IDKNEIEMPAP)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::AbyssS2_GenConfigMeta, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OACGJEMDGLF_MCKJCGKJIFL_OFFSET))(NJEMNLDCHNN, KFPJGDOLEBL, IDKNEIEMPAP);
	}

	static ::System::Void EBENPOHCBNP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OACGJEMDGLF_EBENPOHCBNP_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* KBGOAGBHNKM(::System::String* MCMECAKJOBD, ::System::Collections::Generic::List_1<::System::Object*>* IDKNEIEMPAP, ::System::Boolean DNGFBMKEAKB)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OACGJEMDGLF_KBGOAGBHNKM_OFFSET))(MCMECAKJOBD, IDKNEIEMPAP, DNGFBMKEAKB);
	}

	static ::System::Void NANGKODIMBI(::System::Int32 NJEMNLDCHNN, ::MoleMole::AbyssS2_GenConfigMeta KFPJGDOLEBL, ::System::Int32& NJNOHDNDNAF, ::System::Int32& CHIFPJGLFPK)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::AbyssS2_GenConfigMeta, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + OACGJEMDGLF_NANGKODIMBI_OFFSET))(NJEMNLDCHNN, KFPJGDOLEBL, NJNOHDNDNAF, CHIFPJGLFPK);
	}

	static ::System::Int32 HJBKAJMELAE(::System::Int32 NJNOHDNDNAF, ::System::Int32 CHIFPJGLFPK, ::MoleMole::AbyssS2_RuntimenConfigMeta KFPJGDOLEBL)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::MoleMole::AbyssS2_RuntimenConfigMeta))((::PBYTE)hIl2Cpp + OACGJEMDGLF_HJBKAJMELAE_OFFSET))(NJNOHDNDNAF, CHIFPJGLFPK, KFPJGDOLEBL);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* BIEALBCGFHI(::System::String* MCMECAKJOBD, ::System::Collections::Generic::List_1<::System::Int32>* IDKNEIEMPAP)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OACGJEMDGLF_BIEALBCGFHI_OFFSET))(MCMECAKJOBD, IDKNEIEMPAP);
	}

	static ::System::Void GOCGGFLMPDF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OACGJEMDGLF_GOCGGFLMPDF_OFFSET))();
	}

	static ::MoleMole::AbyssS2_GenAreaConfigItem GLCDJKEOFOE(::MoleMole::AbyssS2_IRNG* KLCCBPGMHLC, ::System::Collections::Generic::List_1<::System::Object*>* EFLBEFOJEPH)
	{
		return ((::MoleMole::AbyssS2_GenAreaConfigItem(*)(::MoleMole::AbyssS2_IRNG*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OACGJEMDGLF_GLCDJKEOFOE_OFFSET))(KLCCBPGMHLC, EFLBEFOJEPH);
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* KBGOAGBHNKM_1(::System::String* MCMECAKJOBD, ::System::Collections::Generic::List_1<::System::Object*>* IDKNEIEMPAP)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OACGJEMDGLF_KBGOAGBHNKM_1_OFFSET))(MCMECAKJOBD, IDKNEIEMPAP);
	}

	static ::System::Void HNJKLAFIIHE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OACGJEMDGLF_HNJKLAFIIHE_OFFSET))();
	}

	static ::System::Void JBLFOKFFJND()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OACGJEMDGLF_JBLFOKFFJND_OFFSET))();
	}

	static ::System::Int32 HJBKAJMELAE_1(::System::Int32 NJNOHDNDNAF, ::System::Int32 CHIFPJGLFPK, ::MoleMole::AbyssS2_GenConfigMeta KFPJGDOLEBL)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + OACGJEMDGLF_HJBKAJMELAE_1_OFFSET))(NJNOHDNDNAF, CHIFPJGLFPK, KFPJGDOLEBL);
	}

	static ::System::Void DHHJGCMELPL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OACGJEMDGLF_DHHJGCMELPL_OFFSET))();
	}

	static ::System::Void FIJEBEEICBA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OACGJEMDGLF_FIJEBEEICBA_OFFSET))();
	}

	static ::System::Void NANGKODIMBI_1(::System::Int32 NJEMNLDCHNN, ::MoleMole::AbyssS2_RuntimenConfigMeta KFPJGDOLEBL, ::System::Int32& NJNOHDNDNAF, ::System::Int32& CHIFPJGLFPK)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::AbyssS2_RuntimenConfigMeta, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + OACGJEMDGLF_NANGKODIMBI_1_OFFSET))(NJEMNLDCHNN, KFPJGDOLEBL, NJNOHDNDNAF, CHIFPJGLFPK);
	}

	static ::System::Void FNKNMFJMAGM(::System::String* PPGLBDELEBF)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OACGJEMDGLF_FNKNMFJMAGM_OFFSET))(PPGLBDELEBF);
	}

	static ::System::Void PMHCOODEDDN(::System::String* PPGLBDELEBF)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OACGJEMDGLF_PMHCOODEDDN_OFFSET))(PPGLBDELEBF);
	}
};
