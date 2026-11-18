#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDOPLLGEAHH.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/OPKHKFNPAEG.h"
#include "unitysdk/System/Nullable_1.h"

class AGJFDPBLDDF;
class DDCEKBNEBNP;
class DMLLGKLKDCK;
class KBALNFBNAFI;
class NJNMJAPABKB;
namespace Foundation { template <typename T> class CustomEventAction_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class OGBNPMJPGBC_1;

#define ALMMGOFACDF_ABIANAEMPNL_OFFSET UNITYSDK_OFFSET(0x143B4EA0)
#define ALMMGOFACDF_APGDMCGCDBK_OFFSET UNITYSDK_OFFSET(0x143B4A60)
#define ALMMGOFACDF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x143B5DD0)
#define ALMMGOFACDF_BEJAGFIOMBH_OFFSET UNITYSDK_OFFSET(0x143B4AF0)
#define ALMMGOFACDF_BKFJEKMMGHF_OFFSET UNITYSDK_OFFSET(0x143B5D50)
#define ALMMGOFACDF_FIHFHJCFLIA_OFFSET UNITYSDK_OFFSET(0x143B4D70)
#define ALMMGOFACDF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x143B4770)
#define ALMMGOFACDF_GMFNONJDCBL_OFFSET UNITYSDK_OFFSET(0x143B53C0)
#define ALMMGOFACDF_HOGNEINPHIF_OFFSET UNITYSDK_OFFSET(0x143B5220)
#define ALMMGOFACDF_IGMAELMELIP_OFFSET UNITYSDK_OFFSET(0x143B4C90)
#define ALMMGOFACDF_IPOCALNKPAO_OFFSET UNITYSDK_OFFSET(0x143B5E20)
#define ALMMGOFACDF_JFCNPCBGGNE_OFFSET UNITYSDK_OFFSET(0x143B49F0)
#define ALMMGOFACDF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x143B4F60)
#define ALMMGOFACDF_KFHICBCPDDK_OFFSET UNITYSDK_OFFSET(0x143B4980)
#define ALMMGOFACDF_KPAMGGOHGGG_OFFSET UNITYSDK_OFFSET(0x143B4F50)
#define ALMMGOFACDF_LBANDDPHBEF_OFFSET UNITYSDK_OFFSET(0x143B49E0)
#define ALMMGOFACDF_LDPBHDLANAK_OFFSET UNITYSDK_OFFSET(0x143B4EB0)
#define ALMMGOFACDF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x143B4EC0)
#define ALMMGOFACDF_MNIDJIFJBLK_OFFSET UNITYSDK_OFFSET(0x143B5110)
#define ALMMGOFACDF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x143B42C0)
#define ALMMGOFACDF_OOMMMMOGCFB_OFFSET UNITYSDK_OFFSET(0x143B5C90)
#define ALMMGOFACDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x143B47C0)
#define ALMMGOFACDF__CTOR_OFFSET UNITYSDK_OFFSET(0x143B4840)

inline static constexpr unsigned int ALMMGOFACDF_TypeDefinitionIndex = 76840;

class ALMMGOFACDF : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x2F; // 0x0
	::DMLLGKLKDCK* BGKIBNHEKLP; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HDOPLLGEAHH>* BLFBNGPGOGC; // 0x50
	::KBALNFBNAFI* HKIMNHILFBP; // 0x58
	::NJNMJAPABKB* NBPBNAHNMDN; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* MCFLJIACBMK; // 0x68
	::OGBNPMJPGBC_1<::System::Single>* EKDPDAHHMOM; // 0x70
	::System::Collections::Generic::List_1<::DDCEKBNEBNP*>* ECOIGKOBOCO; // 0x78
	::AGJFDPBLDDF* LHFIJPENMMB; // 0x80
	::Foundation::CustomEventAction_1<::System::Single>* FAOCBEKNEDJ; // 0x88
	::System::Single IJKDALHFIEM; // 0x90
	::OPKHKFNPAEG BILEGABEHPJ; // 0x94
	::System::Double POAEPFMMAPL; // 0x98
	::System::Double HGHOIFNLLBP; // 0xA0
	::System::Nullable_1<::System::UInt32> OEOLBDFNEBK; // 0xA8
	::System::Single IPDABMMHOJF; // 0xB0
	::System::Single EDCDGEAAOJE; // 0xB4
	::System::Single MIALCGHPAAH; // 0xB8
	::System::Single FOABOJEIFEP; // 0xBC
	::System::Int32 IAPFGJFCONF; // 0xC0
	::System::Byte _padding0[0x4];
	::System::Double AOHBFJHCOJA; // 0xC8
	::System::Double KOGFDPFBAEI; // 0xD0
	::System::Single HJLEGNDFMHL; // 0xD8
	::System::Boolean NGCDDCHPAEN; // 0xDC
	::System::Boolean DEHMKFKPAEH; // 0xDD

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALMMGOFACDF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_GETCLASSID_OFFSET))(this);
	}

	::System::Single KFHICBCPDDK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_KFHICBCPDDK_OFFSET))(this);
	}

	::System::Void LBANDDPHBEF(::AGJFDPBLDDF* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AGJFDPBLDDF*))((::PBYTE)hIl2Cpp + ALMMGOFACDF_LBANDDPHBEF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single JFCNPCBGGNE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_JFCNPCBGGNE_OFFSET))(this);
	}

	::System::Boolean APGDMCGCDBK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_APGDMCGCDBK_OFFSET))(this);
	}

	::System::Void BEJAGFIOMBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_BEJAGFIOMBH_OFFSET))(this);
	}

	::System::Boolean IGMAELMELIP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_IGMAELMELIP_OFFSET))(this);
	}

	::System::Void ABIANAEMPNL(::OGBNPMJPGBC_1<::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OGBNPMJPGBC_1<::System::Single>*))((::PBYTE)hIl2Cpp + ALMMGOFACDF_ABIANAEMPNL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LDPBHDLANAK(::KBALNFBNAFI* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KBALNFBNAFI*))((::PBYTE)hIl2Cpp + ALMMGOFACDF_LDPBHDLANAK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_MEFBHFEOKGH_OFFSET))(this);
	}

	::KBALNFBNAFI* FIHFHJCFLIA()
	{
		return ((::KBALNFBNAFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_FIHFHJCFLIA_OFFSET))(this);
	}

	::System::Void KPAMGGOHGGG(::DMLLGKLKDCK* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DMLLGKLKDCK*))((::PBYTE)hIl2Cpp + ALMMGOFACDF_KPAMGGOHGGG_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::ALMMGOFACDF* JFDOOELFAOA()
	{
		return ((::ALMMGOFACDF*(*)())((::PBYTE)hIl2Cpp + ALMMGOFACDF_JFDOOELFAOA_OFFSET))();
	}

	::System::Single MNIDJIFJBLK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_MNIDJIFJBLK_OFFSET))(this);
	}

	::OGBNPMJPGBC_1<::System::Single>* HOGNEINPHIF()
	{
		return ((::OGBNPMJPGBC_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_HOGNEINPHIF_OFFSET))(this);
	}

	::System::Single GMFNONJDCBL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_GMFNONJDCBL_OFFSET))(this);
	}

	::AGJFDPBLDDF* OOMMMMOGCFB()
	{
		return ((::AGJFDPBLDDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_OOMMMMOGCFB_OFFSET))(this);
	}

	::System::Boolean BKFJEKMMGHF(::System::Int32 MOLGCGKIMFG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALMMGOFACDF_BKFJEKMMGHF_OFFSET))(this, MOLGCGKIMFG);
	}

	::System::Void BBOMJDBNHIC(::System::Nullable_1<::System::UInt32> ELFGOGPHBJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + ALMMGOFACDF_BBOMJDBNHIC_OFFSET))(this, ELFGOGPHBJH);
	}

	::DMLLGKLKDCK* IPOCALNKPAO()
	{
		return ((::DMLLGKLKDCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMMGOFACDF_IPOCALNKPAO_OFFSET))(this);
	}
};
