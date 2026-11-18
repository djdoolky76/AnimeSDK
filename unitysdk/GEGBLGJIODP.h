#pragma once
#include "unitysdk/unitysdk.h"

class NLNIIPDCABP;
namespace MoleMole { class DynamicBoneGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEGBLGJIODP_AKBBGLNJIHA_OFFSET UNITYSDK_OFFSET(0x11D9F310)
#define GEGBLGJIODP_ALNLFKOFLKH_OFFSET UNITYSDK_OFFSET(0x11D9FA40)
#define GEGBLGJIODP_BABKONAAGGC_OFFSET UNITYSDK_OFFSET(0x11D9FBD0)
#define GEGBLGJIODP_BHPLECEEHEG_OFFSET UNITYSDK_OFFSET(0x11D9F800)
#define GEGBLGJIODP_CEFFAEOPDND_OFFSET UNITYSDK_OFFSET(0x11D9E350)
#define GEGBLGJIODP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11D9DF40)
#define GEGBLGJIODP_DLNIEHBINNB_OFFSET UNITYSDK_OFFSET(0x11D9F8E0)
#define GEGBLGJIODP_FCDFJFAENFL_OFFSET UNITYSDK_OFFSET(0x11D9F3C0)
#define GEGBLGJIODP_FPJHBJLKFGN_OFFSET UNITYSDK_OFFSET(0x11D9F0E0)
#define GEGBLGJIODP_FPNKHIMFEBF_OFFSET UNITYSDK_OFFSET(0x11D9EE10)
#define GEGBLGJIODP_GCPNFBAAKKJ_OFFSET UNITYSDK_OFFSET(0x11D9F8F0)
#define GEGBLGJIODP_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x11D9F810)
#define GEGBLGJIODP_LNAFGFNOEBN_OFFSET UNITYSDK_OFFSET(0x11D9EEB0)
#define GEGBLGJIODP_MGJNOHEEBLO_OFFSET UNITYSDK_OFFSET(0x11D9F620)
#define GEGBLGJIODP_MJAEKKDAHHI_OFFSET UNITYSDK_OFFSET(0x11D9E940)
#define GEGBLGJIODP_NMAKPAEAEHN_OFFSET UNITYSDK_OFFSET(0x11D9EBE0)
#define GEGBLGJIODP_OJFBBOMGIEN_OFFSET UNITYSDK_OFFSET(0x11D9E7A0)
#define GEGBLGJIODP_ONCREATE_OFFSET UNITYSDK_OFFSET(0x11D9DF80)
#define GEGBLGJIODP_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x11D9E190)
#define GEGBLGJIODP_UPDATE_OFFSET UNITYSDK_OFFSET(0x11D9DFC0)
#define GEGBLGJIODP__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D9E790)
#define GEGBLGJIODP__CTOR_OFFSET UNITYSDK_OFFSET(0x11D9E6B0)

inline static constexpr unsigned int GEGBLGJIODP_TypeDefinitionIndex = 86680;

class GEGBLGJIODP
{
public:
	static ::System::Boolean* StaticGet_MFMIJMLFKFE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GEGBLGJIODP_TypeDefinitionIndex)->GetStaticField(0x13430);
	}
	::System::Collections::Generic::List_1<::NLNIIPDCABP*>* LGNMLEJKGFF; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::DynamicBoneGroup*>* DEBAPIKHBPI; // 0x18
	::System::UInt32 KBJKKBCFPBD; // 0x20
	::System::Boolean KLNHNFKFNIN; // 0x24
	::System::Byte _padding0[0x3];
	::System::Single BLCMOLIFMDA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGBLGJIODP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEGBLGJIODP__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGBLGJIODP_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGBLGJIODP_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEGBLGJIODP_UPDATE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PLCJNBHECGC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEGBLGJIODP_PLCJNBHECGC_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OJFBBOMGIEN(::System::Single EAGACABMJLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEGBLGJIODP_OJFBBOMGIEN_OFFSET))(this, EAGACABMJLH);
	}

	::System::Void MJAEKKDAHHI(::System::Boolean IKNNGCFOPJG, ::System::Single JCJILJMPADN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + GEGBLGJIODP_MJAEKKDAHHI_OFFSET))(this, IKNNGCFOPJG, JCJILJMPADN);
	}

	::System::Void NMAKPAEAEHN(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEGBLGJIODP_NMAKPAEAEHN_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void CEFFAEOPDND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGBLGJIODP_CEFFAEOPDND_OFFSET))(this);
	}

	::System::Void FPNKHIMFEBF(::MoleMole::DynamicBoneGroup* PBFNCLJCBIK, ::MoleMole::DynamicBoneGroup* EAFGJPMIOLL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DynamicBoneGroup*, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + GEGBLGJIODP_FPNKHIMFEBF_OFFSET))(this, PBFNCLJCBIK, EAFGJPMIOLL);
	}

	::System::Void LNAFGFNOEBN(::NLNIIPDCABP* FNFNDIBMPDE)
	{
		return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + GEGBLGJIODP_LNAFGFNOEBN_OFFSET))(this, FNFNDIBMPDE);
	}

	::System::Void AKBBGLNJIHA(::MoleMole::DynamicBoneGroup* KPNIHKEKDOC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + GEGBLGJIODP_AKBBGLNJIHA_OFFSET))(this, KPNIHKEKDOC);
	}

	::System::Void FCDFJFAENFL(::System::Single JCJILJMPADN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEGBLGJIODP_FCDFJFAENFL_OFFSET))(this, JCJILJMPADN);
	}

	::System::Void FPJHBJLKFGN(::System::Boolean CLEJKCDIMGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEGBLGJIODP_FPJHBJLKFGN_OFFSET))(this, CLEJKCDIMGA);
	}

	::System::Void MGJNOHEEBLO(::NLNIIPDCABP* FNFNDIBMPDE)
	{
		return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + GEGBLGJIODP_MGJNOHEEBLO_OFFSET))(this, FNFNDIBMPDE);
	}

	::System::Single BHPLECEEHEG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGBLGJIODP_BHPLECEEHEG_OFFSET))(this);
	}

	::System::Void KKFNPONHGEM(::MoleMole::DynamicBoneGroup* KPNIHKEKDOC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + GEGBLGJIODP_KKFNPONHGEM_OFFSET))(this, KPNIHKEKDOC);
	}

	::System::Boolean DLNIEHBINNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGBLGJIODP_DLNIEHBINNB_OFFSET))(this);
	}

	::System::Void GCPNFBAAKKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGBLGJIODP_GCPNFBAAKKJ_OFFSET))(this);
	}

	::System::Void ALNLFKOFLKH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEGBLGJIODP_ALNLFKOFLKH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Int32 BABKONAAGGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGBLGJIODP_BABKONAAGGC_OFFSET))(this);
	}
};
