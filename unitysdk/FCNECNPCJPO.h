#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGEHPIIOBNC.h"
#include "unitysdk/KCMMEJGJBEF.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/OIMEEPGLFNF.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueTuple_2.h"

class FAOLDKHFLCM;
class FCNECNPCJPO_FIGKJFKJBLC;
class FCNECNPCJPO_GHECKNCPDKM;
class MBDEMPDPCEA;
class OGJNHDLJIBM;
class OMDAPGKMILG;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCNECNPCJPO_ACFNFCFKCKO_OFFSET UNITYSDK_OFFSET(0x116A5ED0)
#define FCNECNPCJPO_AHGCGGKFLBH_OFFSET UNITYSDK_OFFSET(0x116A6390)
#define FCNECNPCJPO_AOLHIBMPCHC_OFFSET UNITYSDK_OFFSET(0x116A5A70)
#define FCNECNPCJPO_BKBBOPLGPAM_OFFSET UNITYSDK_OFFSET(0x116A5B50)
#define FCNECNPCJPO_CJIEGCAKELO_OFFSET UNITYSDK_OFFSET(0x116A5EF0)
#define FCNECNPCJPO_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x116A6300)
#define FCNECNPCJPO_GEKACDIADJM_OFFSET UNITYSDK_OFFSET(0x116A5EE0)
#define FCNECNPCJPO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x116A57D0)
#define FCNECNPCJPO_GFJMCODOJNF_OFFSET UNITYSDK_OFFSET(0x116A5B60)
#define FCNECNPCJPO_GIKJPLOBBOE_OFFSET UNITYSDK_OFFSET(0x116A5B70)
#define FCNECNPCJPO_HGFANLPMDDG_OFFSET UNITYSDK_OFFSET(0x116A61F0)
#define FCNECNPCJPO_JCBDCMPLEMB_OFFSET UNITYSDK_OFFSET(0x116A5AE0)
#define FCNECNPCJPO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x116A6170)
#define FCNECNPCJPO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x116A6270)
#define FCNECNPCJPO_MFECLGANEBI_OFFSET UNITYSDK_OFFSET(0x116A5BD0)
#define FCNECNPCJPO_ONCJDOJKGEA_OFFSET UNITYSDK_OFFSET(0x116A6070)
#define FCNECNPCJPO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x116A5500)
#define FCNECNPCJPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x116A5820)
#define FCNECNPCJPO__CTOR_OFFSET UNITYSDK_OFFSET(0x116A58A0)

inline static constexpr unsigned int FCNECNPCJPO_TypeDefinitionIndex = 53292;

class FCNECNPCJPO : public ::MJHDNMKGLBJ
{
public:
	static ::System::Int32* StaticGet_PJCEJEKFLOK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FCNECNPCJPO_TypeDefinitionIndex)->GetStaticField(0xEDC0);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0x75; // 0x0
	::OMDAPGKMILG* KJEDCMBBDDN; // 0x48
	::System::Collections::Generic::List_1<::System::Object*>* EDKNNENJGAF; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::System::Int32, ::System::Single>>*>* GFBDFKDBKCM; // 0x58
	::FCNECNPCJPO_GHECKNCPDKM* FODGFMEOOEE; // 0x60
	::OGJNHDLJIBM* LIMJMNLDICJ; // 0x68
	::System::Func_3<::FAOLDKHFLCM*, ::MoleMole::Battle::Entity*, ::System::Boolean>* COHHCLLPCJA; // 0x70
	::FCNECNPCJPO_FIGKJFKJBLC* GJLKLAJFHLO; // 0x78
	::MBDEMPDPCEA* JCLGFJHDEAE; // 0x80
	::System::Collections::Generic::Dictionary_2<::OIMEEPGLFNF, ::System::Int32>* LILPMCONIFL; // 0x88
	::System::Int32 NLKIFCJNPDG; // 0x90
	::System::Single DAGMGPKAFGI; // 0x94
	::KCMMEJGJBEF DIIEJMDAKCB; // 0x98
	::System::Boolean KNHKCIMGAAL; // 0xB8
	::System::Byte _padding0[0x3];
	::System::Single _AJPAHOINGNF_k__BackingField; // 0xBC
	::KCMMEJGJBEF EIJKEIOOBMD; // 0xC0
	::System::Collections::Generic::KeyValuePair_2<::System::Boolean, ::System::Int32> CANGKKKHBIG; // 0xE0
	::GGEHPIIOBNC HMCOFNEPKBN; // 0xE8
	::MoleMole::Config::CampType EJAENFCBEKL; // 0xF0
	::MoleMole::Config::CampType EBMECANCJCG; // 0xF4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCNECNPCJPO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_GETCLASSID_OFFSET))(this);
	}

	::System::Single AOLHIBMPCHC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_AOLHIBMPCHC_OFFSET))(this);
	}

	::System::Void JCBDCMPLEMB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCNECNPCJPO_JCBDCMPLEMB_OFFSET))(this, PBCAAADNEPK);
	}

	::FCNECNPCJPO_GHECKNCPDKM* BKBBOPLGPAM()
	{
		return ((::FCNECNPCJPO_GHECKNCPDKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_BKBBOPLGPAM_OFFSET))(this);
	}

	::FCNECNPCJPO_FIGKJFKJBLC* GFJMCODOJNF()
	{
		return ((::FCNECNPCJPO_FIGKJFKJBLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_GFJMCODOJNF_OFFSET))(this);
	}

	::System::Boolean GIKJPLOBBOE(::System::Int32& MEAOADOOHPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + FCNECNPCJPO_GIKJPLOBBOE_OFFSET))(this, MEAOADOOHPP);
	}

	::System::Boolean MFECLGANEBI(::System::Boolean NOLBECKFLEK, ::OIMEEPGLFNF FKMHMOELCIO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::OIMEEPGLFNF))((::PBYTE)hIl2Cpp + FCNECNPCJPO_MFECLGANEBI_OFFSET))(this, NOLBECKFLEK, FKMHMOELCIO);
	}

	::System::Void ACFNFCFKCKO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCNECNPCJPO_ACFNFCFKCKO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single GEKACDIADJM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_GEKACDIADJM_OFFSET))(this);
	}

	::System::Void CJIEGCAKELO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_CJIEGCAKELO_OFFSET))(this);
	}

	::System::Int32 ONCJDOJKGEA(::System::String* NALELBAFBBL)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCNECNPCJPO_ONCJDOJKGEA_OFFSET))(this, NALELBAFBBL);
	}

	static ::FCNECNPCJPO* JFDOOELFAOA()
	{
		return ((::FCNECNPCJPO*(*)())((::PBYTE)hIl2Cpp + FCNECNPCJPO_JFDOOELFAOA_OFFSET))();
	}

	::System::Void HGFANLPMDDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_HGFANLPMDDG_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_GALGFCPKMGC_OFFSET))(this);
	}

	::System::Void AHGCGGKFLBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_AHGCGGKFLBH_OFFSET))(this);
	}
};
