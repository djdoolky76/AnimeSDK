#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JLDACECJJCF;
namespace System { class Action; }

#define JLDACECJJCF_CBPFEBFAALM_GNNPMACGKNO_OFFSET UNITYSDK_OFFSET(0x1558A310)
#define JLDACECJJCF_CBPFEBFAALM_LJJNNLEKHPL_OFFSET UNITYSDK_OFFSET(0x1558A370)
#define JLDACECJJCF_CBPFEBFAALM_OMJAOPNAKJD_OFFSET UNITYSDK_OFFSET(0x1558A2E0)
#define JLDACECJJCF_CBPFEBFAALM__CTOR_OFFSET UNITYSDK_OFFSET(0x1558A2D0)

inline static constexpr unsigned int JLDACECJJCF_CBPFEBFAALM_TypeDefinitionIndex = 89773;

class JLDACECJJCF_CBPFEBFAALM : public ::System::Object
{
public:
	::System::Action* NLNILOMOMFD; // 0x10
	::System::Action* EICIIBADHLD; // 0x18
	::JLDACECJJCF* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDACECJJCF_CBPFEBFAALM__CTOR_OFFSET))(this);
	}

	::System::Void OMJAOPNAKJD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDACECJJCF_CBPFEBFAALM_OMJAOPNAKJD_OFFSET))(this);
	}

	::System::Void GNNPMACGKNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDACECJJCF_CBPFEBFAALM_GNNPMACGKNO_OFFSET))(this);
	}

	::System::Void LJJNNLEKHPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDACECJJCF_CBPFEBFAALM_LJJNNLEKHPL_OFFSET))(this);
	}
};
