#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MMIONNIOLCJ;
namespace System { class Action; }

#define MMIONNIOLCJ_BMHBAAOAKME_FPKMEEMFMOH_OFFSET UNITYSDK_OFFSET(0x14DF51A0)
#define MMIONNIOLCJ_BMHBAAOAKME_OMHJIIHCEJB_OFFSET UNITYSDK_OFFSET(0x14DF52C0)
#define MMIONNIOLCJ_BMHBAAOAKME__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF5190)

inline static constexpr unsigned int MMIONNIOLCJ_BMHBAAOAKME_TypeDefinitionIndex = 63398;

class MMIONNIOLCJ_BMHBAAOAKME : public ::System::Object
{
public:
	::MMIONNIOLCJ* KLHPEBKNIFB; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18
	::System::Action* EDNJGMKPFHG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIONNIOLCJ_BMHBAAOAKME__CTOR_OFFSET))(this);
	}

	::System::Void FPKMEEMFMOH(::System::Boolean NFBCEMGCHFK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MMIONNIOLCJ_BMHBAAOAKME_FPKMEEMFMOH_OFFSET))(this, NFBCEMGCHFK);
	}

	::System::Void OMHJIIHCEJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIONNIOLCJ_BMHBAAOAKME_OMHJIIHCEJB_OFFSET))(this);
	}
};
