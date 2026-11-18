#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class EAGDLGCBAIM;
class FKDBFFKIOFN;
namespace MoleMole { class AnimatorBlendGroup; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKPJAEANAPO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x18349910)
#define DKPJAEANAPO_GNKCGMOCNBF_OFFSET UNITYSDK_OFFSET(0x18349C90)
#define DKPJAEANAPO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x18349D10)
#define DKPJAEANAPO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x18349E50)
#define DKPJAEANAPO_NCNECNLGKCC_OFFSET UNITYSDK_OFFSET(0x18349D90)
#define DKPJAEANAPO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x18349710)
#define DKPJAEANAPO_POCALPFPLBH_OFFSET UNITYSDK_OFFSET(0x18349EE0)
#define DKPJAEANAPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x18349960)
#define DKPJAEANAPO__CTOR_OFFSET UNITYSDK_OFFSET(0x183499E0)

inline static constexpr unsigned int DKPJAEANAPO_TypeDefinitionIndex = 38632;

class DKPJAEANAPO : public ::MJHDNMKGLBJ
{
public:
	static ::System::Int32* StaticGet_NHLLAACENPG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DKPJAEANAPO_TypeDefinitionIndex)->GetStaticField(0x13720);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0x2C; // 0x0
	::System::String* HBKBADPABLN; // 0x48
	::System::Collections::Generic::List_1<::EAGDLGCBAIM*>* KHMEBCMLIAB; // 0x50
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::FKDBFFKIOFN*>*>* LOHKFIAEPJO; // 0x58
	::MoleMole::AnimatorBlendGroup* LBBMFGBJPBC; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* PGIGFLHCKHK; // 0x68
	::MoleMole::AnimatorBlendGroup* OBGAJNCILEK; // 0x70
	::System::Single CLHDHAEAGBP; // 0x78
	::System::Single AHFIHONHEHB; // 0x7C
	::System::Single LANEBDFHBCG; // 0x80
	::System::Single OIMAIKPJOFJ; // 0x84
	::System::Single FAOEDJPPHDA; // 0x88
	::System::Single JGKLNKFPBDB; // 0x8C
	::System::Single KJLPNAOIEDE; // 0x90
	::System::Single JGGEAFIFMOH; // 0x94
	::System::Single JOINBNDBNNN; // 0x98
	::System::Boolean EPBMCDKDJDI; // 0x9C
	::System::Byte _padding0[0x3];
	::System::Single MBMAIPCPOGF; // 0xA0
	::System::Single DOPIKKOHIGN; // 0xA4
	::System::Single PEEFCDEPJCM; // 0xA8
	::System::Single DMDKHGGBGEE; // 0xAC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKPJAEANAPO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPJAEANAPO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPJAEANAPO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPJAEANAPO_GETCLASSID_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FKDBFFKIOFN*>* GNKCGMOCNBF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::FKDBFFKIOFN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPJAEANAPO_GNKCGMOCNBF_OFFSET))(this);
	}

	static ::DKPJAEANAPO* JFDOOELFAOA()
	{
		return ((::DKPJAEANAPO*(*)())((::PBYTE)hIl2Cpp + DKPJAEANAPO_JFDOOELFAOA_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FKDBFFKIOFN*>* NCNECNLGKCC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::FKDBFFKIOFN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPJAEANAPO_NCNECNLGKCC_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPJAEANAPO_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void POCALPFPLBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPJAEANAPO_POCALPFPLBH_OFFSET))(this);
	}
};
