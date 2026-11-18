#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPKBDIJDMAP.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class APOLLOBLGOE;
class BEDPJEJBHLI;
class JPIEIAPMKHM;
class PLFJGLNFGAK;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class BlendTextureSheetDataItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KADNEIMNGIJ_ACDHAKJMICN_OFFSET UNITYSDK_OFFSET(0x13C45DB0)
#define KADNEIMNGIJ_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x13C45D10)
#define KADNEIMNGIJ_DBEMGEKEAAO_OFFSET UNITYSDK_OFFSET(0x13C45E10)
#define KADNEIMNGIJ_FOPOBKGCOHC_OFFSET UNITYSDK_OFFSET(0x13C45840)
#define KADNEIMNGIJ_GBBHDNABCGE_OFFSET UNITYSDK_OFFSET(0x13C45BC0)
#define KADNEIMNGIJ_GPNHFMGKGBD_OFFSET UNITYSDK_OFFSET(0x13C459D0)
#define KADNEIMNGIJ_HFJKKGKPANC_OFFSET UNITYSDK_OFFSET(0x13C46110)
#define KADNEIMNGIJ_JFKGGDBBEDG_OFFSET UNITYSDK_OFFSET(0x13C45EA0)
#define KADNEIMNGIJ_JGEKEKBAFAM_OFFSET UNITYSDK_OFFSET(0x13C44EF0)
#define KADNEIMNGIJ_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x13C45640)
#define KADNEIMNGIJ_LHHANILNMCK_OFFSET UNITYSDK_OFFSET(0x13C45080)
#define KADNEIMNGIJ_LNLDPCPNKNM_OFFSET UNITYSDK_OFFSET(0x13C45C10)
#define KADNEIMNGIJ_OLFLNJPLMGP_OFFSET UNITYSDK_OFFSET(0x13C461D0)
#define KADNEIMNGIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13C44E60)

inline static constexpr unsigned int KADNEIMNGIJ_TypeDefinitionIndex = 72638;

class KADNEIMNGIJ : public ::MPKBDIJDMAP
{
public:
	::JPIEIAPMKHM* NBOKPALDOCA; // 0x58
	::System::Collections::Generic::List_1<::MPKBDIJDMAP*>* ONFGLNLLCFM; // 0x60
	::System::String* ELGNJFIOBAA; // 0x68
	::MoleMole::BlendTextureSheetData* CEJENBBHBBG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ__CTOR_OFFSET))(this);
	}

	::APOLLOBLGOE* JGEKEKBAFAM()
	{
		return ((::APOLLOBLGOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_JGEKEKBAFAM_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_KMMIPNMJILI_OFFSET))(this);
	}

	::BEDPJEJBHLI* LHHANILNMCK()
	{
		return ((::BEDPJEJBHLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_LHHANILNMCK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FOPOBKGCOHC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_FOPOBKGCOHC_OFFSET))(this);
	}

	::PLFJGLNFGAK* GPNHFMGKGBD(::MoleMole::BlendTextureSheetDataItem* DFMKILICPFB)
	{
		return ((::PLFJGLNFGAK*(*)(::PVOID, ::MoleMole::BlendTextureSheetDataItem*))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_GPNHFMGKGBD_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void GBBHDNABCGE(::System::String* ELGNJFIOBAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_GBBHDNABCGE_OFFSET))(this, ELGNJFIOBAA);
	}

	static ::KADNEIMNGIJ* LNLDPCPNKNM()
	{
		return ((::KADNEIMNGIJ*(*)())((::PBYTE)hIl2Cpp + KADNEIMNGIJ_LNLDPCPNKNM_OFFSET))();
	}

	static ::KADNEIMNGIJ* COKNIICCODC(::JPIEIAPMKHM* JNDDJMAHNAI, ::MoleMole::BlendTextureSheetData* FGLJPLFOOKH)
	{
		return ((::KADNEIMNGIJ*(*)(::JPIEIAPMKHM*, ::MoleMole::BlendTextureSheetData*))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_COKNIICCODC_OFFSET))(JNDDJMAHNAI, FGLJPLFOOKH);
	}

	::System::Void DBEMGEKEAAO(::MPKBDIJDMAP* LMHNJIBCLJF)
	{
		return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_DBEMGEKEAAO_OFFSET))(this, LMHNJIBCLJF);
	}

	::System::Void JFKGGDBBEDG(::System::Action* FJHGFADNCID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_JFKGGDBBEDG_OFFSET))(this, FJHGFADNCID);
	}

	::System::Void HFJKKGKPANC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_HFJKKGKPANC_OFFSET))(this);
	}

	::System::Void ACDHAKJMICN(::JPIEIAPMKHM* LCOKJBBNHPO, ::MoleMole::BlendTextureSheetData* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::JPIEIAPMKHM*, ::MoleMole::BlendTextureSheetData*))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_ACDHAKJMICN_OFFSET))(this, LCOKJBBNHPO, DFMKILICPFB);
	}

	::KADNEIMNGIJ* OLFLNJPLMGP(::System::Nullable_1<::System::Int32> CENDIOINBJN, ::System::Action_2<::MPKBDIJDMAP*, ::MoleMole::HollowPieceBlendMode>* FJNBIHFLFKC, ::System::Action_3<::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32>* MGIGKGDHLFL, ::System::Action_3<::MPKBDIJDMAP*, ::UnityEngine::Color, ::System::Int32>* JLICMOFFLGA, ::System::Action* OCIKNBPALGG, ::System::Boolean GENKEAPFFJG)
	{
		return ((::KADNEIMNGIJ*(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Action_2<::MPKBDIJDMAP*, ::MoleMole::HollowPieceBlendMode>*, ::System::Action_3<::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32>*, ::System::Action_3<::MPKBDIJDMAP*, ::UnityEngine::Color, ::System::Int32>*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_OLFLNJPLMGP_OFFSET))(this, CENDIOINBJN, FJNBIHFLFKC, MGIGKGDHLFL, JLICMOFFLGA, OCIKNBPALGG, GENKEAPFFJG);
	}
};
