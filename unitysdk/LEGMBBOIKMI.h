#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEEDOHMOOAI.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/LNGDEHHGIMI.h"

class BEDPLCOHPEA;
namespace System { class String; }
template <typename T1, typename T2> class CNKGGMABMGE_2;
template <typename T> class LNAGFGGGJLA_1;

#define LEGMBBOIKMI_BFBPAEHENFM_OFFSET UNITYSDK_OFFSET(0x15654480)
#define LEGMBBOIKMI_DIFEHIJPPGE_OFFSET UNITYSDK_OFFSET(0x15654350)
#define LEGMBBOIKMI_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x156543C0)
#define LEGMBBOIKMI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15653B50)
#define LEGMBBOIKMI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15654400)
#define LEGMBBOIKMI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x156542C0)
#define LEGMBBOIKMI_MNGHCLPLDGO_OFFSET UNITYSDK_OFFSET(0x15653D10)
#define LEGMBBOIKMI_OFMDNFFOONE_OFFSET UNITYSDK_OFFSET(0x15654540)
#define LEGMBBOIKMI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15653A10)
#define LEGMBBOIKMI_PBFPDFMKOAP_OFFSET UNITYSDK_OFFSET(0x15654700)
#define LEGMBBOIKMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x15653BA0)
#define LEGMBBOIKMI__CTOR_OFFSET UNITYSDK_OFFSET(0x15653C20)

inline static constexpr unsigned int LEGMBBOIKMI_TypeDefinitionIndex = 53267;

class LEGMBBOIKMI : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xD5; // 0x0
	::CNKGGMABMGE_2<::BEEDOHMOOAI, ::BEDPLCOHPEA*>* BPJEFMDOAGG; // 0x48
	::LNAGFGGGJLA_1<::System::UInt32>* JCPMBFICJEA; // 0x50
	::LNAGFGGGJLA_1<::System::String*>* EDEJHLDJKNG; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEGMBBOIKMI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGMBBOIKMI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGMBBOIKMI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGMBBOIKMI_GETCLASSID_OFFSET))(this);
	}

	::System::Void MNGHCLPLDGO(::LNGDEHHGIMI ECKHGJMDPAJ)
	{
		return ((::System::Void(*)(::PVOID, ::LNGDEHHGIMI))((::PBYTE)hIl2Cpp + LEGMBBOIKMI_MNGHCLPLDGO_OFFSET))(this, ECKHGJMDPAJ);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGMBBOIKMI_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean DIFEHIJPPGE(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEGMBBOIKMI_DIFEHIJPPGE_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void GALGFCPKMGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGMBBOIKMI_GALGFCPKMGC_OFFSET))(this);
	}

	static ::LEGMBBOIKMI* JFDOOELFAOA()
	{
		return ((::LEGMBBOIKMI*(*)())((::PBYTE)hIl2Cpp + LEGMBBOIKMI_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean BFBPAEHENFM(::System::String* KKJEJNMLIFP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LEGMBBOIKMI_BFBPAEHENFM_OFFSET))(this, KKJEJNMLIFP);
	}

	::System::Void OFMDNFFOONE(::System::UInt32 BKLGNCBNEGM, ::System::String* KKJEJNMLIFP, ::BEDPLCOHPEA* IDJOMIMIOGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::BEDPLCOHPEA*))((::PBYTE)hIl2Cpp + LEGMBBOIKMI_OFMDNFFOONE_OFFSET))(this, BKLGNCBNEGM, KKJEJNMLIFP, IDJOMIMIOGM);
	}

	::System::Void PBFPDFMKOAP(::System::UInt32 CHCHHJDLIEH, ::System::String* KKJEJNMLIFP, ::BEDPLCOHPEA* IDJOMIMIOGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::BEDPLCOHPEA*))((::PBYTE)hIl2Cpp + LEGMBBOIKMI_PBFPDFMKOAP_OFFSET))(this, CHCHHJDLIEH, KKJEJNMLIFP, IDJOMIMIOGM);
	}
};
