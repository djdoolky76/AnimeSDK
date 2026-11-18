#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class GOGAFMNBDBM;
class HBKJADCMGFM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHDCLGNBCFI_AGFMNNINJJL_OFFSET UNITYSDK_OFFSET(0xFF716B0)
#define BHDCLGNBCFI_CLLBCMNBLPO_OFFSET UNITYSDK_OFFSET(0xFF71340)
#define BHDCLGNBCFI_GFBGNEFBBIP_OFFSET UNITYSDK_OFFSET(0xFF70F50)
#define BHDCLGNBCFI_HHDBJGMBCBG_OFFSET UNITYSDK_OFFSET(0xFF713D0)
#define BHDCLGNBCFI_JIGKEBMAKKI_OFFSET UNITYSDK_OFFSET(0xFF711F0)
#define BHDCLGNBCFI_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0xFF70E50)
#define BHDCLGNBCFI_KLEBJICMCJD_OFFSET UNITYSDK_OFFSET(0xFF71870)
#define BHDCLGNBCFI_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0xFF70E10)
#define BHDCLGNBCFI_ONSTART_OFFSET UNITYSDK_OFFSET(0xFF70DD0)
#define BHDCLGNBCFI__CTOR_OFFSET UNITYSDK_OFFSET(0xFF70F40)

inline static constexpr unsigned int BHDCLGNBCFI_TypeDefinitionIndex = 86904;

class BHDCLGNBCFI : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDCLGNBCFI__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_ONSTART_OFFSET))(this);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void GFBGNEFBBIP(::System::Collections::Generic::List_1<::System::UInt32>* BADJIMECAGC, ::System::Action* EDNJGMKPFHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_GFBGNEFBBIP_OFFSET))(this, BADJIMECAGC, EDNJGMKPFHG);
	}

	::System::Void JIGKEBMAKKI(::GOGAFMNBDBM* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::GOGAFMNBDBM*))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_JIGKEBMAKKI_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void CLLBCMNBLPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_CLLBCMNBLPO_OFFSET))(this);
	}

	::System::Void HHDBJGMBCBG(::System::Collections::Generic::List_1<::System::Int32>* LEGJIOOLJLL, ::System::Action* EDNJGMKPFHG, ::System::Action* IFKOKLCPMNF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_HHDBJGMBCBG_OFFSET))(this, LEGJIOOLJLL, EDNJGMKPFHG, IFKOKLCPMNF);
	}

	::System::Void AGFMNNINJJL(::System::Action* EDNJGMKPFHG, ::System::Action* IFKOKLCPMNF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_AGFMNNINJJL_OFFSET))(this, EDNJGMKPFHG, IFKOKLCPMNF);
	}

	::System::Void KLEBJICMCJD(::HBKJADCMGFM* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::HBKJADCMGFM*))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_KLEBJICMCJD_OFFSET))(this, GLAOEHCGCFO);
	}
};
