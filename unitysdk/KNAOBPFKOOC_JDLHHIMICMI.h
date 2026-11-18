#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKHGOAJGOGA.h"
#include "unitysdk/System/Object.h"

class KNAOBPFKOOC;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNAOBPFKOOC_JDLHHIMICMI_LBEHHLKBLLF_OFFSET UNITYSDK_OFFSET(0x1F3AB1B0)
#define KNAOBPFKOOC_JDLHHIMICMI_POIGMGMFMJO_OFFSET UNITYSDK_OFFSET(0x1F3AB340)
#define KNAOBPFKOOC_JDLHHIMICMI__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3AB1A0)

inline static constexpr unsigned int KNAOBPFKOOC_JDLHHIMICMI_TypeDefinitionIndex = 8384;

class KNAOBPFKOOC_JDLHHIMICMI : public ::System::Object
{
public:
	::System::Action* HGBOMLCCBEE; // 0x10
	::System::Action_1<::System::Int32>* PNMOJJBCPJH; // 0x18
	::KNAOBPFKOOC* KLHPEBKNIFB; // 0x20
	::BKHGOAJGOGA IGAAKDOIPNN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAOBPFKOOC_JDLHHIMICMI__CTOR_OFFSET))(this);
	}

	::System::Void LBEHHLKBLLF(::System::Int32 BPHGCFGJHMM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNAOBPFKOOC_JDLHHIMICMI_LBEHHLKBLLF_OFFSET))(this, BPHGCFGJHMM);
	}

	::System::Void POIGMGMFMJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAOBPFKOOC_JDLHHIMICMI_POIGMGMFMJO_OFFSET))(this);
	}
};
