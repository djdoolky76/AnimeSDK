#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class BFJLKEFDALJ;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHKIJGGINDA_BINOOCAIDMH_OFFSET UNITYSDK_OFFSET(0x16F7E220)
#define OHKIJGGINDA_BLLBOCFLBEG_OFFSET UNITYSDK_OFFSET(0x16F7E5D0)
#define OHKIJGGINDA_CLKDKLIHLON_OFFSET UNITYSDK_OFFSET(0x16F7E080)
#define OHKIJGGINDA_FADCGBAPKAC_OFFSET UNITYSDK_OFFSET(0x16F7E760)
#define OHKIJGGINDA_KCGEABFKDAJ_OFFSET UNITYSDK_OFFSET(0x16F7E880)
#define OHKIJGGINDA_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x16F7DFD0)
#define OHKIJGGINDA_LMEIPJOIDBA_OFFSET UNITYSDK_OFFSET(0x16F7E410)
#define OHKIJGGINDA_ONSTART_OFFSET UNITYSDK_OFFSET(0x16F7DF90)
#define OHKIJGGINDA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7E070)

inline static constexpr unsigned int OHKIJGGINDA_TypeDefinitionIndex = 64296;

class OHKIJGGINDA : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKIJGGINDA__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKIJGGINDA_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKIJGGINDA_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void CLKDKLIHLON(::System::UInt32 HAABDEAADGI, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + OHKIJGGINDA_CLKDKLIHLON_OFFSET))(this, HAABDEAADGI, EJGDHCIBCJH);
	}

	::System::Void BINOOCAIDMH(::BFJLKEFDALJ* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::BFJLKEFDALJ*))((::PBYTE)hIl2Cpp + OHKIJGGINDA_BINOOCAIDMH_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void LMEIPJOIDBA(::System::Collections::Generic::List_1<::System::UInt32>* NBOKCKGBPPC, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + OHKIJGGINDA_LMEIPJOIDBA_OFFSET))(this, NBOKCKGBPPC, EJGDHCIBCJH);
	}

	::System::Void BLLBOCFLBEG(::System::Action* FKHOJLMBILE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OHKIJGGINDA_BLLBOCFLBEG_OFFSET))(this, FKHOJLMBILE);
	}

	::System::Void FADCGBAPKAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKIJGGINDA_FADCGBAPKAC_OFFSET))(this);
	}

	::System::Void KCGEABFKDAJ(::System::Action_1<::BFJLKEFDALJ*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::BFJLKEFDALJ*>*))((::PBYTE)hIl2Cpp + OHKIJGGINDA_KCGEABFKDAJ_OFFSET))(this, EJGDHCIBCJH);
	}
};
