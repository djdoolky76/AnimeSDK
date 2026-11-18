#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLMCENJOGPN.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/System/ValueTuple_2.h"

class FCBNEBOPNIF;
class OFAEHGAGCND;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLBNGBNHCCD_ANJGEOHJCBE_OFFSET UNITYSDK_OFFSET(0x1995FB20)
#define KLBNGBNHCCD_BBDPAPCGGEK_OFFSET UNITYSDK_OFFSET(0x19960550)
#define KLBNGBNHCCD_BCFBBNNHHIL_OFFSET UNITYSDK_OFFSET(0x19960680)
#define KLBNGBNHCCD_CPILLLFCIKP_OFFSET UNITYSDK_OFFSET(0x199605F0)
#define KLBNGBNHCCD_DMBMHHBNANK_OFFSET UNITYSDK_OFFSET(0x199607C0)
#define KLBNGBNHCCD_ECLMDCBCECJ_OFFSET UNITYSDK_OFFSET(0x19960210)
#define KLBNGBNHCCD_EGEGFGBNPEE_OFFSET UNITYSDK_OFFSET(0x1995FAD0)
#define KLBNGBNHCCD_FOLOCLNNPFM_OFFSET UNITYSDK_OFFSET(0x1995FCE0)
#define KLBNGBNHCCD_GACBAEBMAAC_OFFSET UNITYSDK_OFFSET(0x19960720)
#define KLBNGBNHCCD_IGMNDOMOMPP_OFFSET UNITYSDK_OFFSET(0x19960540)
#define KLBNGBNHCCD_JJCECLNIHEK_OFFSET UNITYSDK_OFFSET(0x19960710)
#define KLBNGBNHCCD_JLHBKJKDGDE_OFFSET UNITYSDK_OFFSET(0x1995FFE0)
#define KLBNGBNHCCD_JMPKIMHCMOL_OFFSET UNITYSDK_OFFSET(0x19960880)
#define KLBNGBNHCCD_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x1995F8C0)
#define KLBNGBNHCCD_MKEIGFMHLHF_OFFSET UNITYSDK_OFFSET(0x19960480)
#define KLBNGBNHCCD_MLNEFJJLPKD_OFFSET UNITYSDK_OFFSET(0x1995F8D0)
#define KLBNGBNHCCD_NNHCNPMBPBG_OFFSET UNITYSDK_OFFSET(0x1995F9D0)
#define KLBNGBNHCCD_OGDJMFAFDOO_OFFSET UNITYSDK_OFFSET(0x19960170)
#define KLBNGBNHCCD_OHJGCFLCJBB_OFFSET UNITYSDK_OFFSET(0x1995FBA0)
#define KLBNGBNHCCD__CTOR_OFFSET UNITYSDK_OFFSET(0x19960310)

inline static constexpr unsigned int KLBNGBNHCCD_TypeDefinitionIndex = 67448;

class KLBNGBNHCCD : public ::KLMCENJOGPN
{
public:
	static ::System::UInt32* StaticGet_INCLOHPCGMC()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(KLBNGBNHCCD_TypeDefinitionIndex)->GetStaticField(0xFD00);
	}
	::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* GJFFMOCOAMF; // 0x2F8
	::System::Collections::Generic::List_1<::System::Int32>* PFNDPGNIOOL; // 0x300
	::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* POGPBDGLJFJ; // 0x308
	::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* IAGMMAFCNEK; // 0x310

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBNGBNHCCD__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_LJEEJABBAHD_OFFSET))(this);
	}

	::System::Boolean MLNEFJJLPKD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_MLNEFJJLPKD_OFFSET))(this);
	}

	::System::Int32 NNHCNPMBPBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_NNHCNPMBPBG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* EGEGFGBNPEE()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_EGEGFGBNPEE_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> ANJGEOHJCBE(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* EIDHJDBNFJF, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* PAPNEOOMBFJ)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_ANJGEOHJCBE_OFFSET))(this, EIDHJDBNFJF, PAPNEOOMBFJ);
	}

	::System::Void OHJGCFLCJBB(::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*& DHHFMDLONMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*&))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_OHJGCFLCJBB_OFFSET))(this, DHHFMDLONMH);
	}

	::System::Void FOLOCLNNPFM(::FCBNEBOPNIF* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_FOLOCLNNPFM_OFFSET))(this, CENFDFIKBDC);
	}

	::System::Void JLHBKJKDGDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_JLHBKJKDGDE_OFFSET))(this);
	}

	::System::Boolean OGDJMFAFDOO(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& KJHGEBPALMD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_OGDJMFAFDOO_OFFSET))(this, KJHGEBPALMD);
	}

	::System::Boolean MKEIGFMHLHF(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_MKEIGFMHLHF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void IGMNDOMOMPP(::FCBNEBOPNIF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_IGMNDOMOMPP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 BBDPAPCGGEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_BBDPAPCGGEK_OFFSET))(this);
	}

	::System::Boolean ECLMDCBCECJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_ECLMDCBCECJ_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* CPILLLFCIKP()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_CPILLLFCIKP_OFFSET))(this);
	}

	::System::Void BCFBBNNHHIL(::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*&))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_BCFBBNNHHIL_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JJCECLNIHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_JJCECLNIHEK_OFFSET))(this);
	}

	::System::Boolean GACBAEBMAAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_GACBAEBMAAC_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> DMBMHHBNANK(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* MIALFKCCCPI, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* KMGKAIDEIBA)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_DMBMHHBNANK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::OFAEHGAGCND* JMPKIMHCMOL()
	{
		return ((::OFAEHGAGCND*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBNGBNHCCD_JMPKIMHCMOL_OFFSET))(this);
	}
};
