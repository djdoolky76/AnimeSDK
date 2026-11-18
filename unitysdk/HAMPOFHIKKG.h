#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"
#include "unitysdk/UnityEngine/Vector3.h"

class JOEJOHDJGIC;
class LKAGBBGFAPC;
class LNIPGEELFOK;
class MNJPCFNLLGO;
class OGMCKGEDIBD;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAMPOFHIKKG_BCGKABNGMLE_OFFSET UNITYSDK_OFFSET(0x17E2A290)
#define HAMPOFHIKKG_CECINNNLIOB_OFFSET UNITYSDK_OFFSET(0x17E29750)
#define HAMPOFHIKKG_DJINOEDMDNN_OFFSET UNITYSDK_OFFSET(0x17E2A500)
#define HAMPOFHIKKG_FFMAHHFJBGB_OFFSET UNITYSDK_OFFSET(0x17E2A0D0)
#define HAMPOFHIKKG_GNEBKHHHMHF_OFFSET UNITYSDK_OFFSET(0x17E29A10)
#define HAMPOFHIKKG_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x17E295E0)
#define HAMPOFHIKKG_OHFJLNILGOC_OFFSET UNITYSDK_OFFSET(0x17E29CF0)
#define HAMPOFHIKKG_ONSTART_OFFSET UNITYSDK_OFFSET(0x17E295A0)
#define HAMPOFHIKKG_PNOKBNGIODG_OFFSET UNITYSDK_OFFSET(0x17E29BC0)
#define HAMPOFHIKKG__CTOR_OFFSET UNITYSDK_OFFSET(0x17E29590)

inline static constexpr unsigned int HAMPOFHIKKG_TypeDefinitionIndex = 56967;

class HAMPOFHIKKG : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMPOFHIKKG__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMPOFHIKKG_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMPOFHIKKG_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void CECINNNLIOB(::JOEJOHDJGIC* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JOEJOHDJGIC*))((::PBYTE)hIl2Cpp + HAMPOFHIKKG_CECINNNLIOB_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Void GNEBKHHHMHF(::System::Collections::Generic::List_1<::MNJPCFNLLGO*>* NEGLMJDONDD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MNJPCFNLLGO*>*))((::PBYTE)hIl2Cpp + HAMPOFHIKKG_GNEBKHHHMHF_OFFSET))(this, NEGLMJDONDD);
	}

	::System::Void PNOKBNGIODG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HAMPOFHIKKG_PNOKBNGIODG_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void OHFJLNILGOC(::LKAGBBGFAPC* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LKAGBBGFAPC*))((::PBYTE)hIl2Cpp + HAMPOFHIKKG_OHFJLNILGOC_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Void FFMAHHFJBGB(::OGMCKGEDIBD* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OGMCKGEDIBD*))((::PBYTE)hIl2Cpp + HAMPOFHIKKG_FFMAHHFJBGB_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Void BCGKABNGMLE(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* KKJEJNMLIFP, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 BFBELMDIAHI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HAMPOFHIKKG_BCGKABNGMLE_OFFSET))(this, KECKGDFIALJ, KKJEJNMLIFP, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::System::Void DJINOEDMDNN(::LNIPGEELFOK* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LNIPGEELFOK*))((::PBYTE)hIl2Cpp + HAMPOFHIKKG_DJINOEDMDNN_OFFSET))(this, NKMKJFCBBCK);
	}
};
