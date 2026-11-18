#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::Config { class VOStateAudioPortalCondition; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGHDPIEMAHP_AICBEJIFAPP_OFFSET UNITYSDK_OFFSET(0x149C1FA0)
#define GGHDPIEMAHP_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x149C2810)
#define GGHDPIEMAHP_DPKNHNKNENG_OFFSET UNITYSDK_OFFSET(0x149C1C30)
#define GGHDPIEMAHP_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x149C1A40)
#define GGHDPIEMAHP_GJLJEKHMIII_OFFSET UNITYSDK_OFFSET(0x149C2290)
#define GGHDPIEMAHP_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x149C2320)
#define GGHDPIEMAHP_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x149C2820)
#define GGHDPIEMAHP_KHNACKANMEH_OFFSET UNITYSDK_OFFSET(0x149C2330)
#define GGHDPIEMAHP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x149C1AB0)
#define GGHDPIEMAHP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x149C1870)
#define GGHDPIEMAHP_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x149C1F10)
#define GGHDPIEMAHP__CTOR_OFFSET UNITYSDK_OFFSET(0x149C1F60)

inline static constexpr unsigned int GGHDPIEMAHP_TypeDefinitionIndex = 71158;

class GGHDPIEMAHP
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::VOStateAudioPortalCondition*>* ANEHFEENOCH; // 0x28
	::System::String* IAAAAGPFKIL; // 0x30
	::System::Nullable_1<::System::Boolean> CBMMFEGDILE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDPIEMAHP__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDPIEMAHP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDPIEMAHP_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDPIEMAHP_ONRECYCLE_OFFSET))(this);
	}

	::System::Void AICBEJIFAPP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GGHDPIEMAHP_AICBEJIFAPP_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Boolean GJLJEKHMIII(::System::Int32 LDDJOFHAOHG, ::MoleMole::Config::ValueCompareType IIDKBMFGAOL, ::System::Int32 HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::ValueCompareType, ::System::Int32))((::PBYTE)hIl2Cpp + GGHDPIEMAHP_GJLJEKHMIII_OFFSET))(LDDJOFHAOHG, IIDKBMFGAOL, HODAIDNDKHD);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDPIEMAHP_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void FCFOEJGPDNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDPIEMAHP_FCFOEJGPDNO_OFFSET))(this);
	}

	::System::Boolean KHNACKANMEH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDPIEMAHP_KHNACKANMEH_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDPIEMAHP_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void DPKNHNKNENG(::System::Boolean DECIDLELLCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGHDPIEMAHP_DPKNHNKNENG_OFFSET))(this, DECIDLELLCP);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHDPIEMAHP_KDOIBCBFBAG_OFFSET))(this);
	}
};
