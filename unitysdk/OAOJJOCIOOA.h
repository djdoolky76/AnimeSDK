#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOJJOCIOOA_LeaseKind.h"
#include "unitysdk/OAOJJOCIOOA_SceneResourceMode.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OAOJJOCIOOA_IBLPPDONBKE.h"
class DDNEPPOHKJN;
class JDCHCLENBJE;
class LJFHKAJPFNE;
class OAOJJOCIOOA_CHHFPGOEEBA;
namespace RPG::Client { class LoadingManager; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TemporarySubStageConfig; }
namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OAOJJOCIOOA_AAKCPEIHKGN_OFFSET UNITYSDK_OFFSET(0xC631E20)
#define OAOJJOCIOOA_AJNGDGINNKC_OFFSET UNITYSDK_OFFSET(0xC631710)
#define OAOJJOCIOOA_AOJBKILFLOK_OFFSET UNITYSDK_OFFSET(0xC632000)
#define OAOJJOCIOOA_BEMFJABBJLA_OFFSET UNITYSDK_OFFSET(0xC631A50)
#define OAOJJOCIOOA_BFAKBIFCEGC_OFFSET UNITYSDK_OFFSET(0xC631910)
#define OAOJJOCIOOA_CKGOOONKIDK_OFFSET UNITYSDK_OFFSET(0xC631B60)
#define OAOJJOCIOOA_CNFLEMDGKAB_OFFSET UNITYSDK_OFFSET(0xC62F500)
#define OAOJJOCIOOA_COEBFGLMFHC_OFFSET UNITYSDK_OFFSET(0xC630B50)
#define OAOJJOCIOOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC62E3F0)
#define OAOJJOCIOOA_CTOR_OFFSET UNITYSDK_OFFSET(0xC62E2E0)
#define OAOJJOCIOOA_DAAGNOOLKGD_OFFSET UNITYSDK_OFFSET(0xC62EA90)
#define OAOJJOCIOOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC630050)
#define OAOJJOCIOOA_EJFOEFEPDNE_OFFSET UNITYSDK_OFFSET(0xC630160)
#define OAOJJOCIOOA_GICJEEDFOEO_OFFSET UNITYSDK_OFFSET(0xC62F290)
#define OAOJJOCIOOA_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xC631320)
#define OAOJJOCIOOA_HACNCDKHBAP_OFFSET UNITYSDK_OFFSET(0xC630CC0)
#define OAOJJOCIOOA_IBCMLLAAGHF_OFFSET UNITYSDK_OFFSET(0xC62FDC0)
#define OAOJJOCIOOA_IGHMCLKFFAF_OFFSET UNITYSDK_OFFSET(0xC62E690)
#define OAOJJOCIOOA_IHBNOJDCHKA_OFFSET UNITYSDK_OFFSET(0xC6310D0)
#define OAOJJOCIOOA_KJFBDKIHEME_OFFSET UNITYSDK_OFFSET(0xC631EB0)
#define OAOJJOCIOOA_KLCNFEEDEND_OFFSET UNITYSDK_OFFSET(0xC6307C0)
#define OAOJJOCIOOA_LBFJAIOHBFH_OFFSET UNITYSDK_OFFSET(0xC62F470)
#define OAOJJOCIOOA_LILGBFJHDMI_OFFSET UNITYSDK_OFFSET(0xC62F0B0)
#define OAOJJOCIOOA_LOKIHBFHPJO_OFFSET UNITYSDK_OFFSET(0xC6315C0)
#define OAOJJOCIOOA_LPIODNAIAGG_OFFSET UNITYSDK_OFFSET(0xC62E9E0)
#define OAOJJOCIOOA_MNABDOILNPF_OFFSET UNITYSDK_OFFSET(0xC62F620)
#define OAOJJOCIOOA_OMAFCCNJANC_OFFSET UNITYSDK_OFFSET(0xC631C50)
#define OAOJJOCIOOA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC62FD60)
#define OAOJJOCIOOA_PIJPIHOOFBA_OFFSET UNITYSDK_OFFSET(0xC630FA0)
#define OAOJJOCIOOA_PJCPNHOGLDH_OFFSET UNITYSDK_OFFSET(0xC630D90)
#define OAOJJOCIOOA_PLCOGBDKJGD_OFFSET UNITYSDK_OFFSET(0xC630BB0)
#define OAOJJOCIOOA_PLKDFHBKINB_OFFSET UNITYSDK_OFFSET(0xC62F920)
#define OAOJJOCIOOA_POKGAEBCLMA_OFFSET UNITYSDK_OFFSET(0xC62FC90)

inline static constexpr unsigned int OAOJJOCIOOA_TypeDefinitionIndex = 61925;

	class OAOJJOCIOOA : public ::System::Object
	{
	public:
		::System::String* JKIHEPAEHLE; // 0x10
		::DDNEPPOHKJN* IPGILMHFEKJ; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* IBKENMBGKGF; // 0x20
		::System::Func_1<::System::Boolean>* HDLGDLGHDPH; // 0x28
		::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>* MJPDCKMFIGN; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* EAOGHMPEKPO; // 0x38
		::System::Func_1<::DDNEPPOHKJN*>* DJMNDJNBNFK; // 0x40
		::RPG::Client::Stage* KNAHKNMDHHH; // 0x48
		::RPG::Client::LoadingManager* PMFMHAFBIEC; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int64>*>* LNLPLMIGEHP; // 0x58
		::RPG::GameCore::TemporarySubStageConfig* CJACDMMMGDD; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* ENELFGAEFPC; // 0x68
		::System::Int64 OACBCHCIOCG; // 0x70
		::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult> KOJLMDDNOHM; // 0x78
		::System::Boolean DMPIFMGEKBO; // 0x80
		::System::Boolean GFAMGLFOMGI; // 0x81
		::System::Byte _padding0[0x2];
		::System::Int32 HOFOHIFAJFN; // 0x84
		::OAOJJOCIOOA_SceneResourceMode BHJDJDPLCLP; // 0x88
		::System::Byte _padding1[0x4];
		::System::Int64 OLNGMMADJKB; // 0x90
		// static const ::System::String* FPLJJOIKIMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Func_1<::DDNEPPOHKJN*>* a1, ::System::Func_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::DDNEPPOHKJN*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::IDisposable* IGHMCLKFFAF(::RPG::GameCore::TemporarySubStageConfig* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::RPG::GameCore::TemporarySubStageConfig*))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_IGHMCLKFFAF_OFFSET))(this, a1);
		}

		::System::IDisposable* DAAGNOOLKGD(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_DAAGNOOLKGD_OFFSET))(this, a1, a2);
		}

		::System::IDisposable* POKGAEBCLMA()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_POKGAEBCLMA_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_DISPOSE_OFFSET))(this);
		}

		::System::Void IBCMLLAAGHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_IBCMLLAAGHF_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult> PJCPNHOGLDH(::System::Int64 a1)
		{
			return ((::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_PJCPNHOGLDH_OFFSET))(this, a1);
		}

		::System::Void MNABDOILNPF(::OAOJJOCIOOA_CHHFPGOEEBA* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::OAOJJOCIOOA_CHHFPGOEEBA*, ::System::Int64))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_MNABDOILNPF_OFFSET))(this, a1, a2);
		}

		::System::Void LILGBFJHDMI(::OAOJJOCIOOA_IBLPPDONBKE a1, ::OAOJJOCIOOA_CHHFPGOEEBA* a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::OAOJJOCIOOA_IBLPPDONBKE, ::OAOJJOCIOOA_CHHFPGOEEBA*, ::System::Int64))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_LILGBFJHDMI_OFFSET))(this, a1, a2, a3);
		}

		::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>* GPLLONMEDAC(::OAOJJOCIOOA_LeaseKind a1, ::System::Int64 a2, ::System::String* a3, ::OAOJJOCIOOA_IBLPPDONBKE a4)
		{
			return ((::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>*(*)(::PVOID, ::OAOJJOCIOOA_LeaseKind, ::System::Int64, ::System::String*, ::OAOJJOCIOOA_IBLPPDONBKE))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_GPLLONMEDAC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>* EJFOEFEPDNE(::System::Int64 a1)
		{
			return ((::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_EJFOEFEPDNE_OFFSET))(this, a1);
		}

		::System::Void PLKDFHBKINB(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_PLKDFHBKINB_OFFSET))(this, a1, a2);
		}

		::System::Void GICJEEDFOEO(::OAOJJOCIOOA_IBLPPDONBKE a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::OAOJJOCIOOA_IBLPPDONBKE, ::System::Int64))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_GICJEEDFOEO_OFFSET))(this, a1, a2);
		}

		::System::Void BEMFJABBJLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_BEMFJABBJLA_OFFSET))(this);
		}

		::System::Void BFAKBIFCEGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_BFAKBIFCEGC_OFFSET))(this);
		}

		::System::Void PIJPIHOOFBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_PIJPIHOOFBA_OFFSET))(this);
		}

		::System::Void IHBNOJDCHKA(::OAOJJOCIOOA_CHHFPGOEEBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAOJJOCIOOA_CHHFPGOEEBA*))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_IHBNOJDCHKA_OFFSET))(this, a1);
		}

		::System::Void AJNGDGINNKC(::OAOJJOCIOOA_CHHFPGOEEBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAOJJOCIOOA_CHHFPGOEEBA*))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_AJNGDGINNKC_OFFSET))(this, a1);
		}

		::RPG::Client::Stage* CKGOOONKIDK()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_CKGOOONKIDK_OFFSET))(this);
		}

		::RPG::Client::Stage* AAKCPEIHKGN()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_AAKCPEIHKGN_OFFSET))(this);
		}

		static ::System::Void OMAFCCNJANC(::RPG::Client::Stage* a1, ::OAOJJOCIOOA_CHHFPGOEEBA* a2)
		{
			return ((::System::Void(*)(::RPG::Client::Stage*, ::OAOJJOCIOOA_CHHFPGOEEBA*))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_OMAFCCNJANC_OFFSET))(a1, a2);
		}

		::System::Void LBFJAIOHBFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_LBFJAIOHBFH_OFFSET))(this);
		}

		::System::Void KLCNFEEDEND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_KLCNFEEDEND_OFFSET))(this);
		}

		static ::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>* HACNCDKHBAP(::DDNEPPOHKJN* a1, ::RPG::Client::Stage* a2)
		{
			return ((::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>*(*)(::DDNEPPOHKJN*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_HACNCDKHBAP_OFFSET))(a1, a2);
		}

		::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>* LOKIHBFHPJO(::DDNEPPOHKJN* a1, ::RPG::Client::Stage* a2, ::LJFHKAJPFNE* a3, ::System::UInt64 a4)
		{
			return ((::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>*(*)(::PVOID, ::DDNEPPOHKJN*, ::RPG::Client::Stage*, ::LJFHKAJPFNE*, ::System::UInt64))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_LOKIHBFHPJO_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::JDCHCLENBJE* CNFLEMDGKAB(::OAOJJOCIOOA_CHHFPGOEEBA* a1, ::System::Exception* a2)
		{
			return ((::JDCHCLENBJE*(*)(::OAOJJOCIOOA_CHHFPGOEEBA*, ::System::Exception*))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_CNFLEMDGKAB_OFFSET))(a1, a2);
		}

		::System::Void PLCOGBDKJGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_PLCOGBDKJGD_OFFSET))(this);
		}

		::System::Void COEBFGLMFHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_COEBFGLMFHC_OFFSET))(this);
		}

		static ::System::Boolean KJFBDKIHEME()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAOJJOCIOOA_KJFBDKIHEME_OFFSET))();
		}

		static ::DDNEPPOHKJN* AOJBKILFLOK()
		{
			return ((::DDNEPPOHKJN*(*)())((::PBYTE)hIl2Cpp + OAOJJOCIOOA_AOJBKILFLOK_OFFSET))();
		}

		::System::Void LPIODNAIAGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_LPIODNAIAGG_OFFSET))(this);
		}

	};
