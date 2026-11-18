#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCGLKLNMOLG_ANHLPFPDGFI.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/System/ValueTuple_2.h"

class BCGLKLNMOLG;
class GEIHCPAOKKK;
class GIGFDLPMNND;
class IADDHANFKPG;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDHMJPBDGLN_AIJPBEEPKGG_OFFSET UNITYSDK_OFFSET(0x1944A360)
#define JDHMJPBDGLN_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1944B780)
#define JDHMJPBDGLN_CDPFCFDJKGD_OFFSET UNITYSDK_OFFSET(0x1944C9E0)
#define JDHMJPBDGLN_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1944A0F0)
#define JDHMJPBDGLN_DCAGIKHAGKO_OFFSET UNITYSDK_OFFSET(0x1944BC00)
#define JDHMJPBDGLN_DIMMPMADGLA_1_OFFSET UNITYSDK_OFFSET(0x1944CF80)
#define JDHMJPBDGLN_DIMMPMADGLA_OFFSET UNITYSDK_OFFSET(0x1944A680)
#define JDHMJPBDGLN_ECABECBHMOE_OFFSET UNITYSDK_OFFSET(0x1944B7C0)
#define JDHMJPBDGLN_FGLKJHDAOEE_OFFSET UNITYSDK_OFFSET(0x1944ABE0)
#define JDHMJPBDGLN_FNHGHDBGJHJ_OFFSET UNITYSDK_OFFSET(0x1944B390)
#define JDHMJPBDGLN_HDKEGELOHKI_1_OFFSET UNITYSDK_OFFSET(0x1944C160)
#define JDHMJPBDGLN_HDKEGELOHKI_OFFSET UNITYSDK_OFFSET(0x1944B0C0)
#define JDHMJPBDGLN_HJGAJIDNGMB_OFFSET UNITYSDK_OFFSET(0x1944A810)
#define JDHMJPBDGLN_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x1944C680)
#define JDHMJPBDGLN_LPPPGPBNBFP_OFFSET UNITYSDK_OFFSET(0x1944A520)
#define JDHMJPBDGLN_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1944C0D0)
#define JDHMJPBDGLN_NEIAHAKAIHF_OFFSET UNITYSDK_OFFSET(0x1944B910)
#define JDHMJPBDGLN_ONOJDCGLNJM_OFFSET UNITYSDK_OFFSET(0x1944D110)
#define JDHMJPBDGLN_PIJDOJAKFGK_OFFSET UNITYSDK_OFFSET(0x1944C070)
#define JDHMJPBDGLN__CTOR_OFFSET UNITYSDK_OFFSET(0x1944A310)

inline static constexpr unsigned int JDHMJPBDGLN_TypeDefinitionIndex = 83955;

class JDHMJPBDGLN : public ::OAOOLPCNHKA
{
public:
	// static const ::System::String* FHOCLOEPKID; // 0x0
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHMJPBDGLN__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void AIJPBEEPKGG(::System::Collections::Generic::List_1<::System::Int32>* AJGGGMHKAIE, ::System::Collections::Generic::List_1<::System::Int32>* EEKHMIKMIDE, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LNIDMABKFOE)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_AIJPBEEPKGG_OFFSET))(AJGGGMHKAIE, EEKHMIKMIDE, LNIDMABKFOE);
	}

	static ::System::Void DIMMPMADGLA(::IADDHANFKPG* LKEEOKHHGBN, ::System::Boolean NNJLDLIHINN)
	{
		return ((::System::Void(*)(::IADDHANFKPG*, ::System::Boolean))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_DIMMPMADGLA_OFFSET))(LKEEOKHHGBN, NNJLDLIHINN);
	}

	static ::System::Void HJGAJIDNGMB(::BCGLKLNMOLG* DPGBAMKICJD, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::BCGLKLNMOLG*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_HJGAJIDNGMB_OFFSET))(DPGBAMKICJD, OHPJHPEOFLD);
	}

	static ::System::Void HDKEGELOHKI(::GEIHCPAOKKK* OHPJHPEOFLD, ::GIGFDLPMNND* AKLHJKAPPOC, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*& PBPOMMMHBEJ)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::GIGFDLPMNND*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*&))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_HDKEGELOHKI_OFFSET))(OHPJHPEOFLD, AKLHJKAPPOC, PBPOMMMHBEJ);
	}

	static ::System::Void FNHGHDBGJHJ(::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Boolean GPCHIMBGNJO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_FNHGHDBGJHJ_OFFSET))(AMNIHACKELI, GPCHIMBGNJO);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Boolean FGLKJHDAOEE(::BCGLKLNMOLG* AJMKEKNHDJN, ::System::Int32 MKDDDNBNCGB, ::System::Action_2<::System::Boolean, ::IADDHANFKPG*>* HOHCHEIJNNE, ::System::Int32 LDGLJHPAHID)
	{
		return ((::System::Boolean(*)(::BCGLKLNMOLG*, ::System::Int32, ::System::Action_2<::System::Boolean, ::IADDHANFKPG*>*, ::System::Int32))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_FGLKJHDAOEE_OFFSET))(AJMKEKNHDJN, MKDDDNBNCGB, HOHCHEIJNNE, LDGLJHPAHID);
	}

	static ::System::Void DCAGIKHAGKO(::System::Collections::Generic::List_1<::System::Int32>*& KEEFNDKMMMJ)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_DCAGIKHAGKO_OFFSET))(KEEFNDKMMMJ);
	}

	static ::System::Boolean ECABECBHMOE(::System::Collections::Generic::List_1<::System::Int32>* MNDDODFJCPN, ::System::Collections::Generic::List_1<::System::Int32>* PENNFOGFEKB)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_ECABECBHMOE_OFFSET))(MNDDODFJCPN, PENNFOGFEKB);
	}

	static ::System::Boolean PIJDOJAKFGK(::BCGLKLNMOLG* AJMKEKNHDJN)
	{
		return ((::System::Boolean(*)(::BCGLKLNMOLG*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_PIJDOJAKFGK_OFFSET))(AJMKEKNHDJN);
	}

	static ::System::Boolean LPPPGPBNBFP(::System::Int32 PDAEFBBHHPP, ::System::Int32& MKDDDNBNCGB)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_LPPPGPBNBFP_OFFSET))(PDAEFBBHHPP, MKDDDNBNCGB);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void HDKEGELOHKI_1(::MoleMole::Battle::Entity* AMNIHACKELI, ::System::Collections::Generic::List_1<::System::Int32>* LLIFNDLGCEA, ::System::Collections::Generic::List_1<::System::Int32>* PPKLIIIONMD)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_HDKEGELOHKI_1_OFFSET))(AMNIHACKELI, LLIFNDLGCEA, PPKLIIIONMD);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_HMLGKBFFNHI_OFFSET))(NJNCGJLHLKC);
	}

	static ::System::Boolean CDPFCFDJKGD(::BCGLKLNMOLG* DPGBAMKICJD)
	{
		return ((::System::Boolean(*)(::BCGLKLNMOLG*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_CDPFCFDJKGD_OFFSET))(DPGBAMKICJD);
	}

	static ::System::Void DIMMPMADGLA_1(::BCGLKLNMOLG* AJMKEKNHDJN, ::BCGLKLNMOLG_ANHLPFPDGFI FJHBBFIHHBJ)
	{
		return ((::System::Void(*)(::BCGLKLNMOLG*, ::BCGLKLNMOLG_ANHLPFPDGFI))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_DIMMPMADGLA_1_OFFSET))(AJMKEKNHDJN, FJHBBFIHHBJ);
	}

	static ::System::Void NEIAHAKAIHF(::BCGLKLNMOLG* AJMKEKNHDJN, ::System::Int32 MKDDDNBNCGB, ::System::Action_1<::IADDHANFKPG*>* FFBIAHCLHOK)
	{
		return ((::System::Void(*)(::BCGLKLNMOLG*, ::System::Int32, ::System::Action_1<::IADDHANFKPG*>*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_NEIAHAKAIHF_OFFSET))(AJMKEKNHDJN, MKDDDNBNCGB, FFBIAHCLHOK);
	}

	static ::System::Void ONOJDCGLNJM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_ONOJDCGLNJM_OFFSET))(KECKGDFIALJ);
	}
};
