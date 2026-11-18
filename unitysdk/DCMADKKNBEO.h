#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UITwoDMapElement_Data_HollowEffect; }
namespace UnityEngine { class Material; }
template <typename T> class DBMAHDDGMHM_1;

#define DCMADKKNBEO_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x19A35770)
#define DCMADKKNBEO_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x19A35800)
#define DCMADKKNBEO_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x19A360D0)
#define DCMADKKNBEO_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x19A358C0)
#define DCMADKKNBEO__CTOR_OFFSET UNITYSDK_OFFSET(0x19A35870)

inline static constexpr unsigned int DCMADKKNBEO_TypeDefinitionIndex = 76647;

class DCMADKKNBEO : public ::PBJOCICFNGK
{
public:
	::UnityEngine::Material* CHEMDCLLGFH; // 0x50
	::UnityEngine::Material* GHLPHGKADLK; // 0x58
	::DBMAHDDGMHM_1<::MoleMole::UITwoDMapElement_Data_HollowEffect*>* DAAAEJDBNFI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMADKKNBEO__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + DCMADKKNBEO_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMADKKNBEO_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UITwoDMapElement_Data_HollowEffect* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data_HollowEffect*))((::PBYTE)hIl2Cpp + DCMADKKNBEO_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMADKKNBEO_IFHNMAGGFAE_OFFSET))(this);
	}
};
