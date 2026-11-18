#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JADNLKPOGNJ.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AIParamType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DPKOIBEFPAO.h"

namespace System { class String; }

#define FHDHKPJMGJO_AICKJNHJMED_OFFSET UNITYSDK_OFFSET(0x75F9F0)
#define FHDHKPJMGJO_BHIDKEEGJJL_OFFSET UNITYSDK_OFFSET(0x75F910)
#define FHDHKPJMGJO_DHNFBNMOLPJ_OFFSET UNITYSDK_OFFSET(0x75FAE0)
#define FHDHKPJMGJO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x75F960)
#define FHDHKPJMGJO_JEFKHCPBCPL_OFFSET UNITYSDK_OFFSET(0x75FA40)
#define FHDHKPJMGJO_KDLCNIBCIKP_OFFSET UNITYSDK_OFFSET(0x75FA90)
#define FHDHKPJMGJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x75F900)

inline static constexpr unsigned int FHDHKPJMGJO_TypeDefinitionIndex = 73990;

struct alignas(8) FHDHKPJMGJO
{
	::JADNLKPOGNJ KONLCHODAHB; // 0x10
	::MoleMole::FlowCanvas::Nodes::AIParamType KNOEKNJNBGG; // 0x14
	::System::Boolean PLGJEDEJADN; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 LJKJMBNPCND; // 0x1C
	::System::Single BLAILIAFNGG; // 0x20
	::System::Byte _padding1[0x4];
	::System::String* DIMHOCKLCPF; // 0x28

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDHKPJMGJO_TOSTRING_OFFSET))(this);
	}

	::System::Boolean BHIDKEEGJJL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDHKPJMGJO_BHIDKEEGJJL_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDHKPJMGJO_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean AICKJNHJMED()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDHKPJMGJO_AICKJNHJMED_OFFSET))(this);
	}

	::System::Boolean JEFKHCPBCPL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDHKPJMGJO_JEFKHCPBCPL_OFFSET))(this);
	}

	::System::Boolean KDLCNIBCIKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDHKPJMGJO_KDLCNIBCIKP_OFFSET))(this);
	}

	::DPKOIBEFPAO DHNFBNMOLPJ()
	{
		return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDHKPJMGJO_DHNFBNMOLPJ_OFFSET))(this);
	}
};
