#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCKCKBEGCCM.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELBDBPLEJHG_CAKLCHHLDOM_OFFSET UNITYSDK_OFFSET(0x1615E1E0)
#define ELBDBPLEJHG_COIGBAJNFKN_OFFSET UNITYSDK_OFFSET(0x1615E370)
#define ELBDBPLEJHG_NAOFFMMPIBJ_OFFSET UNITYSDK_OFFSET(0x1615E130)
#define ELBDBPLEJHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1615E070)

inline static constexpr unsigned int ELBDBPLEJHG_TypeDefinitionIndex = 64897;

class ELBDBPLEJHG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>* DFNCFGDGJMN; // 0x10
	::MCKCKBEGCCM IEPKDNEJOIK; // 0x18
	::MCKCKBEGCCM ELIPNEDMBBJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBDBPLEJHG__CTOR_OFFSET))(this);
	}

	::MCKCKBEGCCM NAOFFMMPIBJ()
	{
		return ((::MCKCKBEGCCM(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBDBPLEJHG_NAOFFMMPIBJ_OFFSET))(this);
	}

	::System::Boolean CAKLCHHLDOM(::System::UInt16 HOBKINFOOPB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + ELBDBPLEJHG_CAKLCHHLDOM_OFFSET))(this, HOBKINFOOPB);
	}

	::System::Boolean COIGBAJNFKN(::System::UInt16 HOBKINFOOPB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + ELBDBPLEJHG_COIGBAJNFKN_OFFSET))(this, HOBKINFOOPB);
	}
};
