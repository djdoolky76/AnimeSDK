#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class FAPOJHHEIMH;
class GBPFAOBMOJD;
class HJEBAFLEPOF;
class JLMPNIPIBAI;
class LHCEEOMENHK;
class OAPJEDMOHFD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define JCLMLILFGPJ_DCDHMGKDFED_OFFSET UNITYSDK_OFFSET(0x160D9870)
#define JCLMLILFGPJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x160D90C0)
#define JCLMLILFGPJ_HIOGJKNPPPC_OFFSET UNITYSDK_OFFSET(0x160D9860)
#define JCLMLILFGPJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x160D97E0)
#define JCLMLILFGPJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x160D9750)
#define JCLMLILFGPJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x160D9190)
#define JCLMLILFGPJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x160D9110)
#define JCLMLILFGPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x160D9450)

inline static constexpr unsigned int JCLMLILFGPJ_TypeDefinitionIndex = 92209;

class JCLMLILFGPJ : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x219; // 0x0
	::FAPOJHHEIMH* HHDNPNKKEHJ; // 0x50
	::JLMPNIPIBAI* FKOHOCBGNJN; // 0x58
	::HJEBAFLEPOF* KPAHMPONKCA; // 0x60
	::System::Collections::Generic::Queue_1<::MoleMole::HollowChessboard::HollowCell>* OGNALDNDGAF; // 0x68
	::OAPJEDMOHFD* HNLDPOINJJO; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::UInt32>* LMHOOOPHOGM; // 0x78
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::UInt32>* LDHHPHFABOE; // 0x80
	::GBPFAOBMOJD* _ELIAMINDLPI_k__BackingField; // 0x88
	::LHCEEOMENHK* OBAONNAFCCA; // 0x90
	::MoleMole::HollowChessboard::HollowChessboardUID LKDJGGNEEAL; // 0x98
	::System::Boolean BBIJBGBMPAF; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCLMLILFGPJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLMLILFGPJ__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLMLILFGPJ_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLMLILFGPJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLMLILFGPJ_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::JCLMLILFGPJ* JFDOOELFAOA()
	{
		return ((::JCLMLILFGPJ*(*)())((::PBYTE)hIl2Cpp + JCLMLILFGPJ_JFDOOELFAOA_OFFSET))();
	}

	::GBPFAOBMOJD* HIOGJKNPPPC()
	{
		return ((::GBPFAOBMOJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLMLILFGPJ_HIOGJKNPPPC_OFFSET))(this);
	}

	::System::Void DCDHMGKDFED(::GBPFAOBMOJD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GBPFAOBMOJD*))((::PBYTE)hIl2Cpp + JCLMLILFGPJ_DCDHMGKDFED_OFFSET))(this, EGEGIMGMJHN);
	}
};
