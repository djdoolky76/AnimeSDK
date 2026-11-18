#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EPFLKCKIGHO_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x14AB5040)
#define EPFLKCKIGHO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14AB5160)
#define EPFLKCKIGHO_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x14AB4DC0)
#define EPFLKCKIGHO_HLBKHEFJAPH_OFFSET UNITYSDK_OFFSET(0x14AB5000)
#define EPFLKCKIGHO_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x14AB4DB0)
#define EPFLKCKIGHO_NJIJOCMEKBO_OFFSET UNITYSDK_OFFSET(0x14AB4FC0)
#define EPFLKCKIGHO_OGHHNHFCFMI_OFFSET UNITYSDK_OFFSET(0x14AB50A0)
#define EPFLKCKIGHO__CTOR_OFFSET UNITYSDK_OFFSET(0x14AB50E0)

inline static constexpr unsigned int EPFLKCKIGHO_TypeDefinitionIndex = 56250;

class EPFLKCKIGHO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* PGNOAAGPHBA; // 0x10
	::System::Boolean PAGDBKODNOH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFLKCKIGHO__CTOR_OFFSET))(this);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFLKCKIGHO_JNENFEELMBP_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EPFLKCKIGHO_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void NJIJOCMEKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFLKCKIGHO_NJIJOCMEKBO_OFFSET))(this);
	}

	::System::Int32 HLBKHEFJAPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFLKCKIGHO_HLBKHEFJAPH_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFLKCKIGHO_CHCGMACMJLD_OFFSET))(this);
	}

	static ::EPFLKCKIGHO* COKNIICCODC(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*& CDCHFFHNBKG)
	{
		return ((::EPFLKCKIGHO*(*)(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*&))((::PBYTE)hIl2Cpp + EPFLKCKIGHO_COKNIICCODC_OFFSET))(CDCHFFHNBKG);
	}

	::System::Void OGHHNHFCFMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFLKCKIGHO_OGHHNHFCFMI_OFFSET))(this);
	}
};
