#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DHHLHIEPGCH.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKCPJIEGKIN_AAGNLMNPCMG_OFFSET UNITYSDK_OFFSET(0x177C3E10)
#define MKCPJIEGKIN_DOOKLIJEFLL_OFFSET UNITYSDK_OFFSET(0x177C3AE0)
#define MKCPJIEGKIN_GHOFHNBCABB_OFFSET UNITYSDK_OFFSET(0x177C3CC0)
#define MKCPJIEGKIN_GPOFIPBBABP_OFFSET UNITYSDK_OFFSET(0x177C38A0)
#define MKCPJIEGKIN_ICLJCOLDAEA_OFFSET UNITYSDK_OFFSET(0x177C4350)
#define MKCPJIEGKIN_LMOGMJIJGEC_OFFSET UNITYSDK_OFFSET(0x177C3710)
#define MKCPJIEGKIN_OAHNGMDIOIM_OFFSET UNITYSDK_OFFSET(0x177C3C10)
#define MKCPJIEGKIN_PCHAJNLHLPN_OFFSET UNITYSDK_OFFSET(0x177C39F0)
#define MKCPJIEGKIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x177C33A0)
#define MKCPJIEGKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x177C3390)

inline static constexpr unsigned int MKCPJIEGKIN_TypeDefinitionIndex = 60780;

class MKCPJIEGKIN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::UInt16>** StaticGet_ANFMEHLNOCK()
	{
		return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(MKCPJIEGKIN_TypeDefinitionIndex)->GetStaticField(0x41810);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>** StaticGet_HMHEBDEPBPN()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MKCPJIEGKIN_TypeDefinitionIndex)->GetStaticField(0x41818);
	}
	static ::System::String** StaticGet_JNMAAJKINFN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MKCPJIEGKIN_TypeDefinitionIndex)->GetStaticField(0x41820);
	}
	static ::Il2CppArray<::System::UInt16>** StaticGet_AFKPPCGOGOD()
	{
		return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(MKCPJIEGKIN_TypeDefinitionIndex)->GetStaticField(0x41828);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCPJIEGKIN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKCPJIEGKIN__CCTOR_OFFSET))();
	}

	static ::System::Boolean LMOGMJIJGEC(::System::Char JAAEMFLPJDG)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MKCPJIEGKIN_LMOGMJIJGEC_OFFSET))(JAAEMFLPJDG);
	}

	static ::DHHLHIEPGCH GPOFIPBBABP(::DHHLHIEPGCH EJCBEJMGFAJ)
	{
		return ((::DHHLHIEPGCH(*)(::DHHLHIEPGCH))((::PBYTE)hIl2Cpp + MKCPJIEGKIN_GPOFIPBBABP_OFFSET))(EJCBEJMGFAJ);
	}

	static ::DHHLHIEPGCH PCHAJNLHLPN(::DHHLHIEPGCH EJCBEJMGFAJ)
	{
		return ((::DHHLHIEPGCH(*)(::DHHLHIEPGCH))((::PBYTE)hIl2Cpp + MKCPJIEGKIN_PCHAJNLHLPN_OFFSET))(EJCBEJMGFAJ);
	}

	static ::System::Boolean DOOKLIJEFLL(::System::UInt16 IIDKBMFGAOL)
	{
		return ((::System::Boolean(*)(::System::UInt16))((::PBYTE)hIl2Cpp + MKCPJIEGKIN_DOOKLIJEFLL_OFFSET))(IIDKBMFGAOL);
	}

	static ::System::Int32 OAHNGMDIOIM(::System::UInt16 IIDKBMFGAOL)
	{
		return ((::System::Int32(*)(::System::UInt16))((::PBYTE)hIl2Cpp + MKCPJIEGKIN_OAHNGMDIOIM_OFFSET))(IIDKBMFGAOL);
	}

	static ::DHHLHIEPGCH GHOFHNBCABB(::DHHLHIEPGCH EJCBEJMGFAJ)
	{
		return ((::DHHLHIEPGCH(*)(::DHHLHIEPGCH))((::PBYTE)hIl2Cpp + MKCPJIEGKIN_GHOFHNBCABB_OFFSET))(EJCBEJMGFAJ);
	}

	static ::DHHLHIEPGCH AAGNLMNPCMG(::System::UInt16 IIDKBMFGAOL, ::DHHLHIEPGCH EJCBEJMGFAJ, ::DHHLHIEPGCH EBFCACIEKBC)
	{
		return ((::DHHLHIEPGCH(*)(::System::UInt16, ::DHHLHIEPGCH, ::DHHLHIEPGCH))((::PBYTE)hIl2Cpp + MKCPJIEGKIN_AAGNLMNPCMG_OFFSET))(IIDKBMFGAOL, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Boolean ICLJCOLDAEA(::System::Char JAAEMFLPJDG)
	{
		return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + MKCPJIEGKIN_ICLJCOLDAEA_OFFSET))(JAAEMFLPJDG);
	}
};
