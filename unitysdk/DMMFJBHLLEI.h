#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMMFJBHLLEI_KFLMIGEAJCA.h"
#include "unitysdk/DMMFJBHLLEI_MAAHKIKOFHB.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class DMMFJBHLLEI_OKGCMAFABHB;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DMMFJBHLLEI_BFLCLIDAOJK_OFFSET UNITYSDK_OFFSET(0x12BD1A70)
#define DMMFJBHLLEI_CINEMGBAAPA_OFFSET UNITYSDK_OFFSET(0x12BD1BC0)
#define DMMFJBHLLEI_CLFMNINFAJJ_OFFSET UNITYSDK_OFFSET(0x12BD1910)
#define DMMFJBHLLEI_ECFLNOODCMK_OFFSET UNITYSDK_OFFSET(0x12BD1A60)
#define DMMFJBHLLEI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12BD14A0)
#define DMMFJBHLLEI_HEDAEMPIDBD_OFFSET UNITYSDK_OFFSET(0x12BD1CC0)
#define DMMFJBHLLEI_HJBMJFIFJLA_OFFSET UNITYSDK_OFFSET(0x12BD1650)
#define DMMFJBHLLEI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x12BD1C40)
#define DMMFJBHLLEI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x12BD1E70)
#define DMMFJBHLLEI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12BD1330)
#define DMMFJBHLLEI_PDABHFMHOAC_OFFSET UNITYSDK_OFFSET(0x12BD18A0)
#define DMMFJBHLLEI__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BD14F0)
#define DMMFJBHLLEI__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD1570)

inline static constexpr unsigned int DMMFJBHLLEI_TypeDefinitionIndex = 56774;

class DMMFJBHLLEI : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xA; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* NIAEMHDMGLC; // 0x48
	::System::Collections::Generic::HashSet_1<::System::UInt32>* PPDJJCIBJIH; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::System::Object*>* DGAMNPJGEMK; // 0x58
	::DMMFJBHLLEI_MAAHKIKOFHB DGGNCIDEAJM; // 0x60
	::System::Boolean EEIFEIOFIOB; // 0x64
	::System::Boolean ECNLEKLCCAP; // 0x65

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMMFJBHLLEI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMFJBHLLEI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMFJBHLLEI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMFJBHLLEI_GETCLASSID_OFFSET))(this);
	}

	::System::Void HJBMJFIFJLA(::System::UInt32 LFBNGKPFFLP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMMFJBHLLEI_HJBMJFIFJLA_OFFSET))(this, LFBNGKPFFLP);
	}

	::System::Int32 PDABHFMHOAC(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMMFJBHLLEI_PDABHFMHOAC_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Int32 CLFMNINFAJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMFJBHLLEI_CLFMNINFAJJ_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::System::Object*>* ECFLNOODCMK()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMFJBHLLEI_ECFLNOODCMK_OFFSET))(this);
	}

	::System::Boolean BFLCLIDAOJK(::DMMFJBHLLEI_KFLMIGEAJCA PBMKJNLFHME, ::MoleMole::GameplayTag HIAIKHDFCLN, ::DMMFJBHLLEI_OKGCMAFABHB*& PBKBFLLDAOB)
	{
		return ((::System::Boolean(*)(::PVOID, ::DMMFJBHLLEI_KFLMIGEAJCA, ::MoleMole::GameplayTag, ::DMMFJBHLLEI_OKGCMAFABHB*&))((::PBYTE)hIl2Cpp + DMMFJBHLLEI_BFLCLIDAOJK_OFFSET))(this, PBMKJNLFHME, HIAIKHDFCLN, PBKBFLLDAOB);
	}

	::System::Void CINEMGBAAPA(::DMMFJBHLLEI_KFLMIGEAJCA PBMKJNLFHME, ::MoleMole::GameplayTag HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::DMMFJBHLLEI_KFLMIGEAJCA, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + DMMFJBHLLEI_CINEMGBAAPA_OFFSET))(this, PBMKJNLFHME, HIAIKHDFCLN);
	}

	static ::DMMFJBHLLEI* JFDOOELFAOA()
	{
		return ((::DMMFJBHLLEI*(*)())((::PBYTE)hIl2Cpp + DMMFJBHLLEI_JFDOOELFAOA_OFFSET))();
	}

	::System::Void HEDAEMPIDBD(::DMMFJBHLLEI_KFLMIGEAJCA PBMKJNLFHME, ::MoleMole::GameplayTag NIFBLFGAEOK, ::System::UInt32 LFBNGKPFFLP, ::System::Boolean PACMBJPDOEC)
	{
		return ((::System::Void(*)(::PVOID, ::DMMFJBHLLEI_KFLMIGEAJCA, ::MoleMole::GameplayTag, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + DMMFJBHLLEI_HEDAEMPIDBD_OFFSET))(this, PBMKJNLFHME, NIFBLFGAEOK, LFBNGKPFFLP, PACMBJPDOEC);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMFJBHLLEI_MEFBHFEOKGH_OFFSET))(this);
	}
};
