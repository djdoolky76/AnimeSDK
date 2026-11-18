#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UISocialCircleFriendCardContext; }
namespace MoleMole { class UISocialCircleMemberContext; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class NMANHEHIJAL_1;

#define KODJCEAIMMH_ABBFOBDICDJ_OFFSET UNITYSDK_OFFSET(0x152297C0)
#define KODJCEAIMMH_ANEKMFDPILD_OFFSET UNITYSDK_OFFSET(0x15229020)
#define KODJCEAIMMH_BNPEHKBMPPH_OFFSET UNITYSDK_OFFSET(0x152285A0)
#define KODJCEAIMMH_CIHOIJMGGGJ_OFFSET UNITYSDK_OFFSET(0x15228C90)
#define KODJCEAIMMH_CJMHNDHIMFP_OFFSET UNITYSDK_OFFSET(0x15229D10)
#define KODJCEAIMMH_DKIBBNCFENG_OFFSET UNITYSDK_OFFSET(0x15228C20)
#define KODJCEAIMMH_DONDKEFJMGI_OFFSET UNITYSDK_OFFSET(0x15228C30)
#define KODJCEAIMMH_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x15227D60)
#define KODJCEAIMMH_FDGNAGIJNIF_OFFSET UNITYSDK_OFFSET(0x15229B50)
#define KODJCEAIMMH_FNKFPOGMBLB_OFFSET UNITYSDK_OFFSET(0x15228EA0)
#define KODJCEAIMMH_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x15228510)
#define KODJCEAIMMH__CTOR_OFFSET UNITYSDK_OFFSET(0x15228470)

inline static constexpr unsigned int KODJCEAIMMH_TypeDefinitionIndex = 57861;

class KODJCEAIMMH : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UISocialCircleMemberContext*>* DAAAEJDBNFI; // 0x50
	::NMANHEHIJAL_1<::MoleMole::UISocialCircleFriendCardContext*>* CDMBEOFBKCL; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::UISocialCircleFriendCardContext*>* AECHNIIOHLI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODJCEAIMMH__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KODJCEAIMMH_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void KDLADFIENBL(::MoleMole::UISocialCircleMemberContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISocialCircleMemberContext*))((::PBYTE)hIl2Cpp + KODJCEAIMMH_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Collections::IEnumerable* DKIBBNCFENG()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KODJCEAIMMH_DKIBBNCFENG_OFFSET))(this);
	}

	::System::Boolean DONDKEFJMGI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KODJCEAIMMH_DONDKEFJMGI_OFFSET))(this);
	}

	::System::Void CIHOIJMGGGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODJCEAIMMH_CIHOIJMGGGJ_OFFSET))(this);
	}

	::System::Void BNPEHKBMPPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODJCEAIMMH_BNPEHKBMPPH_OFFSET))(this);
	}

	::System::String* FNKFPOGMBLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KODJCEAIMMH_FNKFPOGMBLB_OFFSET))(this);
	}

	::System::Int32 ANEKMFDPILD(::MoleMole::UISocialCircleFriendCardContext* HAAEBCOBKFF, ::MoleMole::UISocialCircleFriendCardContext* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UISocialCircleFriendCardContext*, ::MoleMole::UISocialCircleFriendCardContext*))((::PBYTE)hIl2Cpp + KODJCEAIMMH_ANEKMFDPILD_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Void ABBFOBDICDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODJCEAIMMH_ABBFOBDICDJ_OFFSET))(this);
	}

	::System::String* FDGNAGIJNIF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KODJCEAIMMH_FDGNAGIJNIF_OFFSET))(this);
	}

	::System::Void CJMHNDHIMFP(::System::UInt32 JCPNDFAEOLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KODJCEAIMMH_CJMHNDHIMFP_OFFSET))(this, JCPNDFAEOLI);
	}
};
