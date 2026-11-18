#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define DFPKJPPEOKJ_FFJGHOBBLPD_EHNLABKFBBG_OFFSET UNITYSDK_OFFSET(0x15A3BDA0)
#define DFPKJPPEOKJ_FFJGHOBBLPD_IDGINJJGIPD_OFFSET UNITYSDK_OFFSET(0x15A3BC30)
#define DFPKJPPEOKJ_FFJGHOBBLPD_JGCBOANNPBK_OFFSET UNITYSDK_OFFSET(0x15A3BCB0)
#define DFPKJPPEOKJ_FFJGHOBBLPD_MNELBBFCNHJ_OFFSET UNITYSDK_OFFSET(0x15A3BD30)
#define DFPKJPPEOKJ_FFJGHOBBLPD__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3BC20)

inline static constexpr unsigned int DFPKJPPEOKJ_FFJGHOBBLPD_TypeDefinitionIndex = 76789;

class DFPKJPPEOKJ_FFJGHOBBLPD : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x10
	::System::Single CLMNLPKFBFA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_FFJGHOBBLPD__CTOR_OFFSET))(this);
	}

	::System::Void IDGINJJGIPD(::System::Single PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_FFJGHOBBLPD_IDGINJJGIPD_OFFSET))(this, PMGFIHJAJHL);
	}

	::System::Void JGCBOANNPBK(::System::Single PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_FFJGHOBBLPD_JGCBOANNPBK_OFFSET))(this, PMGFIHJAJHL);
	}

	::System::Void MNELBBFCNHJ(::System::Single PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_FFJGHOBBLPD_MNELBBFCNHJ_OFFSET))(this, PMGFIHJAJHL);
	}

	::System::Void EHNLABKFBBG(::System::Single PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ_FFJGHOBBLPD_EHNLABKFBBG_OFFSET))(this, PMGFIHJAJHL);
	}
};
