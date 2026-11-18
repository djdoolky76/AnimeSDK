#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICNBLHOLKF.h"

class MFMNHELPIMP;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define FBAAMFLFJKA_ABDFGFEAPBA_OFFSET UNITYSDK_OFFSET(0x14282550)
#define FBAAMFLFJKA_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x142826F0)
#define FBAAMFLFJKA_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x14282950)
#define FBAAMFLFJKA_ILJDLAMMBHB_OFFSET UNITYSDK_OFFSET(0x14282890)
#define FBAAMFLFJKA_IMHLCGLJHNC_OFFSET UNITYSDK_OFFSET(0x14282340)
#define FBAAMFLFJKA_LJFBNEKDDKK_OFFSET UNITYSDK_OFFSET(0x14282A80)
#define FBAAMFLFJKA_NAAPBKALMCK_OFFSET UNITYSDK_OFFSET(0x142829E0)
#define FBAAMFLFJKA_OGLNONBOLJA_OFFSET UNITYSDK_OFFSET(0x142829F0)
#define FBAAMFLFJKA__CTOR_OFFSET UNITYSDK_OFFSET(0x14282260)

inline static constexpr unsigned int FBAAMFLFJKA_TypeDefinitionIndex = 71364;

class FBAAMFLFJKA : public ::LICNBLHOLKF
{
public:
	::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* PGGCMBBBBAO; // 0x58

	::System::Void _ctor(::MFMNHELPIMP* NCLAHIKBBBH)
	{
		return ((::System::Void(*)(::PVOID, ::MFMNHELPIMP*))((::PBYTE)hIl2Cpp + FBAAMFLFJKA__CTOR_OFFSET))(this, NCLAHIKBBBH);
	}

	::System::Void IMHLCGLJHNC(::UnityEngine::Collider* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FBAAMFLFJKA_IMHLCGLJHNC_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void ABDFGFEAPBA(::UnityEngine::Collider* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FBAAMFLFJKA_ABDFGFEAPBA_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAAMFLFJKA_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void ILJDLAMMBHB(::UnityEngine::Collider* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FBAAMFLFJKA_ILJDLAMMBHB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAAMFLFJKA_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void NAAPBKALMCK(::UnityEngine::Collider* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + FBAAMFLFJKA_NAAPBKALMCK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OGLNONBOLJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAAMFLFJKA_OGLNONBOLJA_OFFSET))(this);
	}

	::System::Boolean LJFBNEKDDKK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAAMFLFJKA_LJFBNEKDDKK_OFFSET))(this);
	}
};
