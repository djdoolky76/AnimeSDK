#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGDJCHPPCBB.h"
#include "unitysdk/PAMPOBIPLCE.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class OGJNHDLJIBM;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGHCIFIPDKP_AOANOLJKNCK_OFFSET UNITYSDK_OFFSET(0x163681B0)
#define LGHCIFIPDKP_COFHOCIEHPD_OFFSET UNITYSDK_OFFSET(0x16368050)
#define LGHCIFIPDKP_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x16367F50)
#define LGHCIFIPDKP_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x16367FA0)
#define LGHCIFIPDKP_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16367FF0)
#define LGHCIFIPDKP__CTOR_OFFSET UNITYSDK_OFFSET(0x16368040)

inline static constexpr unsigned int LGHCIFIPDKP_TypeDefinitionIndex = 86592;

class LGHCIFIPDKP : public ::System::Object
{
public:
	::OGJNHDLJIBM* HLOEDLCGJHE; // 0x10
	::DGDJCHPPCBB LLEPLCNIGKE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHCIFIPDKP__CTOR_OFFSET))(this);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + LGHCIFIPDKP_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHCIFIPDKP_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + LGHCIFIPDKP_OKJCHFGIKBH_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void COFHOCIEHPD(::PAMPOBIPLCE GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + LGHCIFIPDKP_COFHOCIEHPD_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	static ::System::Collections::Generic::List_1<::LGHCIFIPDKP*>* AOANOLJKNCK()
	{
		return ((::System::Collections::Generic::List_1<::LGHCIFIPDKP*>*(*)())((::PBYTE)hIl2Cpp + LGHCIFIPDKP_AOANOLJKNCK_OFFSET))();
	}
};
