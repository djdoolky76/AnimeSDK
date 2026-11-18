#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define AOKFPNKJOON_IEKHOPPPGPG_CPKOMKIBBMO_OFFSET UNITYSDK_OFFSET(0x14379F80)
#define AOKFPNKJOON_IEKHOPPPGPG__CTOR_OFFSET UNITYSDK_OFFSET(0x14379F70)

inline static constexpr unsigned int AOKFPNKJOON_IEKHOPPPGPG_TypeDefinitionIndex = 51467;

class AOKFPNKJOON_IEKHOPPPGPG : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* FKHOJLMBILE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_IEKHOPPPGPG__CTOR_OFFSET))(this);
	}

	::System::Void CPKOMKIBBMO(::System::Int32 IENHLBFCKFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOKFPNKJOON_IEKHOPPPGPG_CPKOMKIBBMO_OFFSET))(this, IENHLBFCKFC);
	}
};
