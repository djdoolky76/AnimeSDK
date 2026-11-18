#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALHNDPMOFNF;
namespace System { class Action; }

#define ALHNDPMOFNF_KHCIPOHCKKC_DLJECCKFEOP_OFFSET UNITYSDK_OFFSET(0x17DDCD20)
#define ALHNDPMOFNF_KHCIPOHCKKC_GAGGPLBMGAJ_OFFSET UNITYSDK_OFFSET(0x17DDCD40)
#define ALHNDPMOFNF_KHCIPOHCKKC_PNIOEAHJKPJ_OFFSET UNITYSDK_OFFSET(0x17DDCF10)
#define ALHNDPMOFNF_KHCIPOHCKKC__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDCD10)

inline static constexpr unsigned int ALHNDPMOFNF_KHCIPOHCKKC_TypeDefinitionIndex = 86726;

class ALHNDPMOFNF_KHCIPOHCKKC : public ::System::Object
{
public:
	::ALHNDPMOFNF* KLHPEBKNIFB; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18
	::System::Int32 CCKIIKOLMIA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_KHCIPOHCKKC__CTOR_OFFSET))(this);
	}

	::System::Void DLJECCKFEOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_KHCIPOHCKKC_DLJECCKFEOP_OFFSET))(this);
	}

	::System::Single GAGGPLBMGAJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_KHCIPOHCKKC_GAGGPLBMGAJ_OFFSET))(this);
	}

	::System::Void PNIOEAHJKPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_KHCIPOHCKKC_PNIOEAHJKPJ_OFFSET))(this);
	}
};
