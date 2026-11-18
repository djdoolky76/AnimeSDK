#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIControllerContextBase; }
template <typename T> class DBMAHDDGMHM_1;

#define HGGJMHLKPCP_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x16F34C60)
#define HGGJMHLKPCP_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x16F34F40)
#define HGGJMHLKPCP_KGAGNHBNGGP_OFFSET UNITYSDK_OFFSET(0x16F34FB0)
#define HGGJMHLKPCP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F34EF0)

inline static constexpr unsigned int HGGJMHLKPCP_TypeDefinitionIndex = 65533;

class HGGJMHLKPCP : public ::PBJOCICFNGK
{
public:
	::DBMAHDDGMHM_1<::MoleMole::UIControllerContextBase*>* DAAAEJDBNFI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGJMHLKPCP__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + HGGJMHLKPCP_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::Foundation::AssetPath JHMPNJLFHKC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGJMHLKPCP_JHMPNJLFHKC_OFFSET))(this);
	}

	::Foundation::AssetPath KGAGNHBNGGP()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGJMHLKPCP_KGAGNHBNGGP_OFFSET))(this);
	}
};
