#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"
#include "unitysdk/CFBMCIDLBEF.h"

class EAIOHODECAO;
namespace System { class Random; }

#define EBKCIHGKLNC_AIHKBDOOHDJ_OFFSET UNITYSDK_OFFSET(0x1FB10DC0)
#define EBKCIHGKLNC_CGJHLBGIPIL_OFFSET UNITYSDK_OFFSET(0x1FB10860)
#define EBKCIHGKLNC_CGPMCKKHOKC_OFFSET UNITYSDK_OFFSET(0x1FB10B50)
#define EBKCIHGKLNC_DKBKLECLJBK_OFFSET UNITYSDK_OFFSET(0x1FB107F0)
#define EBKCIHGKLNC_EMPNBCFNIID_OFFSET UNITYSDK_OFFSET(0x1FB10B60)
#define EBKCIHGKLNC_FKJKBFKCKBM_OFFSET UNITYSDK_OFFSET(0x1FB10760)
#define EBKCIHGKLNC_GOENJOBMMJF_OFFSET UNITYSDK_OFFSET(0x1FB10240)
#define EBKCIHGKLNC_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1FB103E0)
#define EBKCIHGKLNC_LCCOLFFKAGJ_OFFSET UNITYSDK_OFFSET(0x1FB10970)
#define EBKCIHGKLNC_LGOFCOBFLCA_OFFSET UNITYSDK_OFFSET(0x1FB10D50)
#define EBKCIHGKLNC_MPEGDJKPICI_OFFSET UNITYSDK_OFFSET(0x1FB108F0)
#define EBKCIHGKLNC_NBCINBONEML_OFFSET UNITYSDK_OFFSET(0x1FB10430)
#define EBKCIHGKLNC_NIDBMIJCCKE_OFFSET UNITYSDK_OFFSET(0x1FB109E0)
#define EBKCIHGKLNC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FB10130)
#define EBKCIHGKLNC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB101F0)
#define EBKCIHGKLNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB10420)

inline static constexpr unsigned int EBKCIHGKLNC_TypeDefinitionIndex = 28968;

class EBKCIHGKLNC : public ::MHOBPPAJKIL
{
public:
	static ::Il2CppArray<::System::Double>** StaticGet_EGGECEDBLDA()
	{
		return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(EBKCIHGKLNC_TypeDefinitionIndex)->GetStaticField(0x25E00);
	}
	::System::Random* MFEPCLGOHPI; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBKCIHGKLNC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKCIHGKLNC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_KMMIPNMJILI_OFFSET))(this);
	}

	static ::System::Void GOENJOBMMJF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBKCIHGKLNC_GOENJOBMMJF_OFFSET))();
	}

	::System::Single FKJKBFKCKBM(::System::Single GDBANLBHNJK, ::System::Single DNFNKBNBJHM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_FKJKBFKCKBM_OFFSET))(this, GDBANLBHNJK, DNFNKBNBJHM);
	}

	::System::Boolean DKBKLECLJBK(::System::Int32 HHHPDKABJNP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_DKBKLECLJBK_OFFSET))(this, HHHPDKABJNP);
	}

	::System::Void CGJHLBGIPIL(::System::Int32 GONODCOMIAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_CGJHLBGIPIL_OFFSET))(this, GONODCOMIAA);
	}

	::System::Int32 MPEGDJKPICI(::System::Int32 GDBANLBHNJK, ::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_MPEGDJKPICI_OFFSET))(this, GDBANLBHNJK, DNFNKBNBJHM);
	}

	::System::Boolean LCCOLFFKAGJ(::System::Int32 HHHPDKABJNP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_LCCOLFFKAGJ_OFFSET))(this, HHHPDKABJNP);
	}

	static ::System::Double NBCINBONEML(::System::Double JNDDJMAHNAI)
	{
		return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_NBCINBONEML_OFFSET))(JNDDJMAHNAI);
	}

	static ::System::Double NIDBMIJCCKE(::System::Double CBLGCIFLMKL)
	{
		return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_NIDBMIJCCKE_OFFSET))(CBLGCIFLMKL);
	}

	::System::Random* CGPMCKKHOKC()
	{
		return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_CGPMCKKHOKC_OFFSET))(this);
	}

	::CFBMCIDLBEF EMPNBCFNIID(::CFBMCIDLBEF JNDDJMAHNAI)
	{
		return ((::CFBMCIDLBEF(*)(::PVOID, ::CFBMCIDLBEF))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_EMPNBCFNIID_OFFSET))(this, JNDDJMAHNAI);
	}

	::System::Int32 LGOFCOBFLCA(::System::Int32 GDBANLBHNJK, ::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_LGOFCOBFLCA_OFFSET))(this, GDBANLBHNJK, DNFNKBNBJHM);
	}

	::System::Int32 AIHKBDOOHDJ(::System::Int32 GDBANLBHNJK, ::System::Int32 DNFNKBNBJHM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EBKCIHGKLNC_AIHKBDOOHDJ_OFFSET))(this, GDBANLBHNJK, DNFNKBNBJHM);
	}
};
