#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class COMOBAHMOKF;
class PDDKHKKCENB;
class PKLNJNKDOPH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LALILABEEMH_CLHLBOPBDBJ_OFFSET UNITYSDK_OFFSET(0xD412530)
#define LALILABEEMH_DJACPFIONDE_1_OFFSET UNITYSDK_OFFSET(0xD412DB0)
#define LALILABEEMH_DJACPFIONDE_OFFSET UNITYSDK_OFFSET(0xD4129E0)
#define LALILABEEMH_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0xD4128B0)
#define LALILABEEMH_KFIOCLKKGND_OFFSET UNITYSDK_OFFSET(0xD412ED0)
#define LALILABEEMH_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0xD4122B0)
#define LALILABEEMH_NHAGPHHKKBC_OFFSET UNITYSDK_OFFSET(0xD4120F0)
#define LALILABEEMH_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0xD412570)
#define LALILABEEMH__CCTOR_OFFSET UNITYSDK_OFFSET(0xD411F90)
#define LALILABEEMH__CTOR_OFFSET UNITYSDK_OFFSET(0xD412010)

inline static constexpr unsigned int LALILABEEMH_TypeDefinitionIndex = 91156;

class LALILABEEMH
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::COMOBAHMOKF*>* BNENLKBNINO; // 0x10
	::System::Collections::Generic::List_1<::PKLNJNKDOPH*>* HIBJPLCINOF; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LALILABEEMH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LALILABEEMH__CTOR_OFFSET))(this);
	}

	::COMOBAHMOKF* NHAGPHHKKBC(::System::String* JDFCJJBENBM)
	{
		return ((::COMOBAHMOKF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LALILABEEMH_NHAGPHHKKBC_OFFSET))(this, JDFCJJBENBM);
	}

	::PKLNJNKDOPH* LCJEELHBNHG(::MoleMole::EntityHandle OAMCPEJPHLP, ::System::String* JDFCJJBENBM)
	{
		return ((::PKLNJNKDOPH*(*)(::PVOID, ::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + LALILABEEMH_LCJEELHBNHG_OFFSET))(this, OAMCPEJPHLP, JDFCJJBENBM);
	}

	::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LALILABEEMH_HDLGEDBNEIP_OFFSET))(this);
	}

	::System::Void DJACPFIONDE(::PDDKHKKCENB* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::PDDKHKKCENB*))((::PBYTE)hIl2Cpp + LALILABEEMH_DJACPFIONDE_OFFSET))(this, HBNBIBADGNH);
	}

	::System::Void PGHAJOMNDDJ(::MoleMole::EntityHandle OAMCPEJPHLP, ::System::String* JDFCJJBENBM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + LALILABEEMH_PGHAJOMNDDJ_OFFSET))(this, OAMCPEJPHLP, JDFCJJBENBM);
	}

	::System::Void DJACPFIONDE_1(::MoleMole::EntityHandle OAMCPEJPHLP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + LALILABEEMH_DJACPFIONDE_1_OFFSET))(this, OAMCPEJPHLP);
	}

	static ::System::Void CLHLBOPBDBJ(::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LALILABEEMH_CLHLBOPBDBJ_OFFSET))(NAPFALLANDL);
	}

	::System::Void KFIOCLKKGND(::System::String* JDFCJJBENBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LALILABEEMH_KFIOCLKKGND_OFFSET))(this, JDFCJJBENBM);
	}
};
