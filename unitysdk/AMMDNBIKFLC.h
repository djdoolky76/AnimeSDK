#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCJOJLEJEHO.h"
#include "unitysdk/IAEGCCEPAIA.h"
#include "unitysdk/System/Object.h"

class BMIGMKIIBLK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMMDNBIKFLC_FDEMNFEJCJD_OFFSET UNITYSDK_OFFSET(0x1F5404E0)
#define AMMDNBIKFLC_KBLIFPLNLCO_OFFSET UNITYSDK_OFFSET(0x1F5402D0)
#define AMMDNBIKFLC_OLOEDHKGOAO_OFFSET UNITYSDK_OFFSET(0x1F5411B0)
#define AMMDNBIKFLC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1F540230)
#define AMMDNBIKFLC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F53FF40)
#define AMMDNBIKFLC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F53FEB0)

inline static constexpr unsigned int AMMDNBIKFLC_TypeDefinitionIndex = 28873;

class AMMDNBIKFLC : public ::System::Object
{
public:
	static ::AMMDNBIKFLC** StaticGet_GJFDCKGHMCE()
	{
		return (::AMMDNBIKFLC**)Il2CppClass::FromTypeDefinitionIndex(AMMDNBIKFLC_TypeDefinitionIndex)->GetStaticField(0x25C00);
	}
	static ::AMMDNBIKFLC** StaticGet_MEAGKEFPKEG()
	{
		return (::AMMDNBIKFLC**)Il2CppClass::FromTypeDefinitionIndex(AMMDNBIKFLC_TypeDefinitionIndex)->GetStaticField(0x25C08);
	}
	static ::AMMDNBIKFLC** StaticGet_JGHPJNFBMNM()
	{
		return (::AMMDNBIKFLC**)Il2CppClass::FromTypeDefinitionIndex(AMMDNBIKFLC_TypeDefinitionIndex)->GetStaticField(0x25C10);
	}
	static ::AMMDNBIKFLC** StaticGet_BOBHACCEOCG()
	{
		return (::AMMDNBIKFLC**)Il2CppClass::FromTypeDefinitionIndex(AMMDNBIKFLC_TypeDefinitionIndex)->GetStaticField(0x25C18);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::BMIGMKIIBLK*>* IIHHLAJGPMD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDNBIKFLC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMMDNBIKFLC__CCTOR_OFFSET))();
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDNBIKFLC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void KBLIFPLNLCO(::System::UInt64 MCOHLHMKLIP, ::System::UInt64 GEGOALONGBI, ::System::String* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + AMMDNBIKFLC_KBLIFPLNLCO_OFFSET))(this, MCOHLHMKLIP, GEGOALONGBI, HMMMOCJAEOA);
	}

	::System::String* FDEMNFEJCJD(::FCJOJLEJEHO JJGCCJECHNB, ::System::Boolean GMBHNOINAPK, ::IAEGCCEPAIA FONDCPCKOMP)
	{
		return ((::System::String*(*)(::PVOID, ::FCJOJLEJEHO, ::System::Boolean, ::IAEGCCEPAIA))((::PBYTE)hIl2Cpp + AMMDNBIKFLC_FDEMNFEJCJD_OFFSET))(this, JJGCCJECHNB, GMBHNOINAPK, FONDCPCKOMP);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::BMIGMKIIBLK*>* OLOEDHKGOAO(::FCJOJLEJEHO JJGCCJECHNB, ::System::Boolean GMBHNOINAPK)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::BMIGMKIIBLK*>*(*)(::PVOID, ::FCJOJLEJEHO, ::System::Boolean))((::PBYTE)hIl2Cpp + AMMDNBIKFLC_OLOEDHKGOAO_OFFSET))(this, JJGCCJECHNB, GMBHNOINAPK);
	}
};
