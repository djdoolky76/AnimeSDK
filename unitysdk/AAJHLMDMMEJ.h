#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UISocialCircleNewsRowContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class DBMAHDDGMHM_1;

#define AAJHLMDMMEJ_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x14332C10)
#define AAJHLMDMMEJ_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x14333140)
#define AAJHLMDMMEJ_LBBJOAMNPEE_OFFSET UNITYSDK_OFFSET(0x14333060)
#define AAJHLMDMMEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14332D60)

inline static constexpr unsigned int AAJHLMDMMEJ_TypeDefinitionIndex = 75150;

class AAJHLMDMMEJ : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UISocialCircleNewsRowContext*>* DAAAEJDBNFI; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* FLCMLJBEKNJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJHLMDMMEJ__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + AAJHLMDMMEJ_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* LBBJOAMNPEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJHLMDMMEJ_LBBJOAMNPEE_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UISocialCircleNewsRowContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISocialCircleNewsRowContext*))((::PBYTE)hIl2Cpp + AAJHLMDMMEJ_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}
};
