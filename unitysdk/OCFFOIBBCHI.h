#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UISocialCircleInviteContext; }
namespace MoleMole { class UISocialCircleInviteRowContext; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DBMAHDDGMHM_1;

#define OCFFOIBBCHI_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x15F59B10)
#define OCFFOIBBCHI_JPEKDPMCKMP_OFFSET UNITYSDK_OFFSET(0x15F5A9E0)
#define OCFFOIBBCHI_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x15F5AA20)
#define OCFFOIBBCHI_LBBJOAMNPEE_OFFSET UNITYSDK_OFFSET(0x15F59FE0)
#define OCFFOIBBCHI_MELKJHANODB_OFFSET UNITYSDK_OFFSET(0x15F5A300)
#define OCFFOIBBCHI__CTOR_OFFSET UNITYSDK_OFFSET(0x15F59F40)

inline static constexpr unsigned int OCFFOIBBCHI_TypeDefinitionIndex = 73485;

class OCFFOIBBCHI : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UISocialCircleInviteContext*>* DAAAEJDBNFI; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::UISocialCircleInviteRowContext*>* AECHNIIOHLI; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFFOIBBCHI__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + OCFFOIBBCHI_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Collections::IEnumerable* LBBJOAMNPEE()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFFOIBBCHI_LBBJOAMNPEE_OFFSET))(this);
	}

	::System::Int32 MELKJHANODB(::MoleMole::UISocialCircleInviteRowContext* HAAEBCOBKFF, ::MoleMole::UISocialCircleInviteRowContext* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UISocialCircleInviteRowContext*, ::MoleMole::UISocialCircleInviteRowContext*))((::PBYTE)hIl2Cpp + OCFFOIBBCHI_MELKJHANODB_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Void JPEKDPMCKMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFFOIBBCHI_JPEKDPMCKMP_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UISocialCircleInviteContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISocialCircleInviteContext*))((::PBYTE)hIl2Cpp + OCFFOIBBCHI_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}
};
