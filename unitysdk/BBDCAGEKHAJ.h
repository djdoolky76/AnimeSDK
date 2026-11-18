#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CALIGLPABNP;
class DIAEPBNFKBO;
class DKPJAEANAPO;
class GEIHCPAOKKK;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBDCAGEKHAJ_ABGLCJNKNCJ_OFFSET UNITYSDK_OFFSET(0xF7877E0)
#define BBDCAGEKHAJ_BGKDHOIHCFD_OFFSET UNITYSDK_OFFSET(0xF787160)
#define BBDCAGEKHAJ_DEPFLIJHAFF_OFFSET UNITYSDK_OFFSET(0xF7871C0)
#define BBDCAGEKHAJ_GBEFNGECBBL_OFFSET UNITYSDK_OFFSET(0xF786DF0)
#define BBDCAGEKHAJ_LEECNOFDGEK_OFFSET UNITYSDK_OFFSET(0xF787770)
#define BBDCAGEKHAJ_NGLGAAJBHOI_OFFSET UNITYSDK_OFFSET(0xF787780)
#define BBDCAGEKHAJ_NNJGJGDLJKL_OFFSET UNITYSDK_OFFSET(0xF786DE0)
#define BBDCAGEKHAJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF786CB0)

inline static constexpr unsigned int BBDCAGEKHAJ_TypeDefinitionIndex = 92230;

class BBDCAGEKHAJ : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* EFELLAEOMKF; // 0x18
	::GEIHCPAOKKK* EKHKNFILMGJ; // 0x20
	::System::Int32 _FFHGNFGMECB_k__BackingField; // 0x28
	::MoleMole::Config::CharacterSize JPJJJFCMGLL; // 0x2C
	::UnityEngine::Vector3 DHIOHLEKNDD; // 0x30
	::System::Single IECOJPMPJMP; // 0x3C

	::System::Void _ctor(::MoleMole::Battle::Entity* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BBDCAGEKHAJ__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void NNJGJGDLJKL(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBDCAGEKHAJ_NNJGJGDLJKL_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::CharacterSize GBEFNGECBBL(::MoleMole::Battle::Entity* HODAIDNDKHD)
	{
		return ((::MoleMole::Config::CharacterSize(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BBDCAGEKHAJ_GBEFNGECBBL_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Single BGKDHOIHCFD(::MoleMole::Battle::Entity* HODAIDNDKHD)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BBDCAGEKHAJ_BGKDHOIHCFD_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* DEPFLIJHAFF(::System::Single BDEDDEGJFKL, ::DIAEPBNFKBO* POBADKEDFOE, ::DKPJAEANAPO* MKIGHGFHEJO, ::CALIGLPABNP* KFIDLBCLMMA)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Single, ::DIAEPBNFKBO*, ::DKPJAEANAPO*, ::CALIGLPABNP*))((::PBYTE)hIl2Cpp + BBDCAGEKHAJ_DEPFLIJHAFF_OFFSET))(this, BDEDDEGJFKL, POBADKEDFOE, MKIGHGFHEJO, KFIDLBCLMMA);
	}

	::System::Int32 LEECNOFDGEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDCAGEKHAJ_LEECNOFDGEK_OFFSET))(this);
	}

	::System::Single NGLGAAJBHOI(::MoleMole::Battle::Entity* HODAIDNDKHD)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BBDCAGEKHAJ_NGLGAAJBHOI_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Single ABGLCJNKNCJ(::GEIHCPAOKKK* LHPFMGBDFPN)
	{
		return ((::System::Single(*)(::PVOID, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + BBDCAGEKHAJ_ABGLCJNKNCJ_OFFSET))(this, LHPFMGBDFPN);
	}
};
