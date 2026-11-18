#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECLDJGAJPJM.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class GGNKHJHIHGD;
class KPNIFGIKELE;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPAFIEONENP_CFICHALGPEL_OFFSET UNITYSDK_OFFSET(0x16887510)
#define CPAFIEONENP_DMAGBKPALNA_OFFSET UNITYSDK_OFFSET(0x16887670)
#define CPAFIEONENP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x168871F0)
#define CPAFIEONENP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16887490)
#define CPAFIEONENP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16887DF0)
#define CPAFIEONENP_OFIJBHKAGLF_OFFSET UNITYSDK_OFFSET(0x168872D0)
#define CPAFIEONENP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16886FC0)
#define CPAFIEONENP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16887240)
#define CPAFIEONENP__CTOR_OFFSET UNITYSDK_OFFSET(0x168872C0)

inline static constexpr unsigned int CPAFIEONENP_TypeDefinitionIndex = 88114;

class CPAFIEONENP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x1C; // 0x0
	::GGNKHJHIHGD* BMIOELAKFDF; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* NDAOFMBLNHJ; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* HGDBNBBMNNF; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* MGCJNLFFEHC; // 0x60
	::GGNKHJHIHGD* BOKGGMCJHDG; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LDHFGNBGJJG; // 0x70
	::System::UInt32 HBBJCOPDEIP; // 0x78
	::System::Single OLBOEMHHLOH; // 0x7C
	::System::Single DICMNLALHHN; // 0x80
	::ECLDJGAJPJM NGDAJNPLAMO; // 0x84
	::System::Single ABCGEBBBPEN; // 0xC4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPAFIEONENP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAFIEONENP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAFIEONENP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAFIEONENP_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 OFIJBHKAGLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAFIEONENP_OFIJBHKAGLF_OFFSET))(this);
	}

	static ::CPAFIEONENP* JFDOOELFAOA()
	{
		return ((::CPAFIEONENP*(*)())((::PBYTE)hIl2Cpp + CPAFIEONENP_JFDOOELFAOA_OFFSET))();
	}

	::System::Void CFICHALGPEL(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::KPNIFGIKELE* IKHJEGECGJA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + CPAFIEONENP_CFICHALGPEL_OFFSET))(this, MFMPICKHAMJ, IKHJEGECGJA);
	}

	::System::Int32 DMAGBKPALNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAFIEONENP_DMAGBKPALNA_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAFIEONENP_MEFBHFEOKGH_OFFSET))(this);
	}
};
