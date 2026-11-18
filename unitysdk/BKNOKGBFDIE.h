#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoBuffIcon; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define BKNOKGBFDIE_BDAAEJJFIHF_OFFSET UNITYSDK_OFFSET(0xF7A2460)
#define BKNOKGBFDIE_CFPKCKOBFHM_OFFSET UNITYSDK_OFFSET(0xF7A35A0)
#define BKNOKGBFDIE_DIFCIMFKOBC_OFFSET UNITYSDK_OFFSET(0xF7A4A40)
#define BKNOKGBFDIE_DOPHCIJDHBD_OFFSET UNITYSDK_OFFSET(0xF7A6A20)
#define BKNOKGBFDIE_EDCAJPHENFB_OFFSET UNITYSDK_OFFSET(0xF7A5840)
#define BKNOKGBFDIE_EGIBMFCLANF_OFFSET UNITYSDK_OFFSET(0xF7A33A0)
#define BKNOKGBFDIE_FIOEPLBCEPG_OFFSET UNITYSDK_OFFSET(0xF7A2440)
#define BKNOKGBFDIE_HIBLOENOPJB_OFFSET UNITYSDK_OFFSET(0xF7A5970)
#define BKNOKGBFDIE_HLEGCFIMPIB_OFFSET UNITYSDK_OFFSET(0xF7A4840)
#define BKNOKGBFDIE_HNIPHMCJFLL_OFFSET UNITYSDK_OFFSET(0xF7A5270)
#define BKNOKGBFDIE_KALLFOPAEGM_OFFSET UNITYSDK_OFFSET(0xF7A65A0)
#define BKNOKGBFDIE_KDDKGFENBOE_OFFSET UNITYSDK_OFFSET(0xF7A61B0)
#define BKNOKGBFDIE_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0xF7A6C40)
#define BKNOKGBFDIE_LKLODLIBFHG_OFFSET UNITYSDK_OFFSET(0xF7A5D60)
#define BKNOKGBFDIE_LLFBEJIMFOL_OFFSET UNITYSDK_OFFSET(0xF7A2FA0)
#define BKNOKGBFDIE_MBBOBCNACKD_OFFSET UNITYSDK_OFFSET(0xF7A6130)
#define BKNOKGBFDIE_MJGHFMFCNPH_OFFSET UNITYSDK_OFFSET(0xF7A6000)
#define BKNOKGBFDIE_MKMBMMMCGMG_OFFSET UNITYSDK_OFFSET(0xF7A2DB0)
#define BKNOKGBFDIE_NCBIODFNBCD_OFFSET UNITYSDK_OFFSET(0xF7A43E0)
#define BKNOKGBFDIE_NMKMOJEMGPL_OFFSET UNITYSDK_OFFSET(0xF7A6390)
#define BKNOKGBFDIE_OJKOEIFLADJ_OFFSET UNITYSDK_OFFSET(0xF7A5C50)
#define BKNOKGBFDIE_ONMIKEMLNNA_OFFSET UNITYSDK_OFFSET(0xF7A5040)
#define BKNOKGBFDIE__CTOR_OFFSET UNITYSDK_OFFSET(0xF7A21C0)

inline static constexpr unsigned int BKNOKGBFDIE_TypeDefinitionIndex = 57137;

class BKNOKGBFDIE : public ::System::Object
{
public:
	// static const ::System::Int32 ODAKMNBBIAO = 0x4; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*>* PKPCCCLGFGA; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::MonoBuffIcon*>* MDAHMDFMPCF; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* MGCCFALCMBO; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::MonoBuffIcon*>* COKHDPFJEKB; // 0x28
	::UnityEngine::Transform* HNEBLEPHLMG; // 0x30
	::UnityEngine::Transform* ILMBEKEFDII; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* HOLJHAEJJML; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::MoleMole::MonoBuffIcon*>*>*>* KAPPHPFEGBA; // 0x48
	::System::Boolean NIJJHHDCOJH; // 0x50
	::System::Byte _padding0[0x3];
	::System::UInt32 ADEAIPAJNAO; // 0x54

	::System::Void _ctor(::UnityEngine::Transform* FBHIPPCJGKJ, ::UnityEngine::Transform* ABNNNAELMCG, ::System::Boolean KGHCNDHKFOF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + BKNOKGBFDIE__CTOR_OFFSET))(this, FBHIPPCJGKJ, ABNNNAELMCG, KGHCNDHKFOF);
	}

	::System::Int32 FIOEPLBCEPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_FIOEPLBCEPG_OFFSET))(this);
	}

	::System::Void BDAAEJJFIHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_BDAAEJJFIHF_OFFSET))(this);
	}

	::System::Void NCBIODFNBCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_NCBIODFNBCD_OFFSET))(this);
	}

	::System::Void CFPKCKOBFHM(::System::Int32 BOBBHFPEPHC, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean FIAMCMJDPHI, ::System::Boolean MLOLCDBPEBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_CFPKCKOBFHM_OFFSET))(this, BOBBHFPEPHC, AMNIHACKELI, FIAMCMJDPHI, MLOLCDBPEBH);
	}

	::System::Boolean LLFBEJIMFOL(::System::Int32 EOGLMAEPALE, ::System::Boolean IOKNPLAMIKB, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_LLFBEJIMFOL_OFFSET))(this, EOGLMAEPALE, IOKNPLAMIKB, IHLBALNBGKM);
	}

	::System::Boolean ONMIKEMLNNA(::System::Int32 EOGLMAEPALE, ::MoleMole::MonoBuffIcon* AOOLNBKIHAG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::MonoBuffIcon*))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_ONMIKEMLNNA_OFFSET))(this, EOGLMAEPALE, AOOLNBKIHAG);
	}

	::System::Void MJGHFMFCNPH(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_MJGHFMFCNPH_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void MBBOBCNACKD(::System::Boolean CPHDDAGKHLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_MBBOBCNACKD_OFFSET))(this, CPHDDAGKHLB);
	}

	::System::Void KDDKGFENBOE(::System::Int32 BOBBHFPEPHC, ::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Int32 OBKBDAPONOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_KDDKGFENBOE_OFFSET))(this, BOBBHFPEPHC, AMNIHACKELI, OBKBDAPONOJ);
	}

	::MoleMole::MonoBuffIcon* EGIBMFCLANF(::System::Int32 BOBBHFPEPHC)
	{
		return ((::MoleMole::MonoBuffIcon*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_EGIBMFCLANF_OFFSET))(this, BOBBHFPEPHC);
	}

	::System::Void HIBLOENOPJB(::System::Int32 BOBBHFPEPHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_HIBLOENOPJB_OFFSET))(this, BOBBHFPEPHC);
	}

	::System::Void NMKMOJEMGPL(::System::Int32 BOBBHFPEPHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_NMKMOJEMGPL_OFFSET))(this, BOBBHFPEPHC);
	}

	::System::Void HNIPHMCJFLL(::System::Int32 BOBBHFPEPHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_HNIPHMCJFLL_OFFSET))(this, BOBBHFPEPHC);
	}

	::MoleMole::MonoBuffIcon* DIFCIMFKOBC(::System::Int32 BOBBHFPEPHC, ::System::Boolean& HFKFAPHJLPA)
	{
		return ((::MoleMole::MonoBuffIcon*(*)(::PVOID, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_DIFCIMFKOBC_OFFSET))(this, BOBBHFPEPHC, HFKFAPHJLPA);
	}

	::System::Int32 MKMBMMMCGMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_MKMBMMMCGMG_OFFSET))(this);
	}

	::System::Int32 EDCAJPHENFB(::System::String* ABAOKODECJP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_EDCAJPHENFB_OFFSET))(this, ABAOKODECJP);
	}

	::System::Void LKLODLIBFHG(::System::Int32 FDCLEPEOOBD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_LKLODLIBFHG_OFFSET))(this, FDCLEPEOOBD);
	}

	::System::Boolean OJKOEIFLADJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_OJKOEIFLADJ_OFFSET))(this);
	}

	::System::Void KALLFOPAEGM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_KALLFOPAEGM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void DOPHCIJDHBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_DOPHCIJDHBD_OFFSET))(this);
	}

	::System::Int32 HLEGCFIMPIB(::System::Int32 BOBBHFPEPHC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_HLEGCFIMPIB_OFFSET))(this, BOBBHFPEPHC);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_LJMIPGJJELP_OFFSET))(this);
	}
};
