#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGJLJHECMFL_BKMINJFECNL_KJFBNGPNKHH.h"
#include "unitysdk/System/Object.h"

class LHIOGJMEIEI;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MGJLJHECMFL_BKMINJFECNL_FJNFBIJDPFP_OFFSET UNITYSDK_OFFSET(0x177BCC70)
#define MGJLJHECMFL_BKMINJFECNL_HGIDIBKLKBA_OFFSET UNITYSDK_OFFSET(0x177BD390)
#define MGJLJHECMFL_BKMINJFECNL_MOFDAMHNAPB_OFFSET UNITYSDK_OFFSET(0x177BBF70)
#define MGJLJHECMFL_BKMINJFECNL__CTOR_OFFSET UNITYSDK_OFFSET(0x177BBEA0)

inline static constexpr unsigned int MGJLJHECMFL_BKMINJFECNL_TypeDefinitionIndex = 80058;

class MGJLJHECMFL_BKMINJFECNL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LHIOGJMEIEI*>* LGJCJDFHGMB; // 0x10
	::System::Boolean MNFEOOIAFCN; // 0x18
	::System::Byte _padding0[0x3];
	::MGJLJHECMFL_BKMINJFECNL_KJFBNGPNKHH ADAGHBMBNIL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJLJHECMFL_BKMINJFECNL__CTOR_OFFSET))(this);
	}

	::System::Void MOFDAMHNAPB(::System::Collections::Generic::IList_1<::LHIOGJMEIEI*>* KJAFJFPNEEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::LHIOGJMEIEI*>*))((::PBYTE)hIl2Cpp + MGJLJHECMFL_BKMINJFECNL_MOFDAMHNAPB_OFFSET))(this, KJAFJFPNEEH);
	}

	::System::Void FJNFBIJDPFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJLJHECMFL_BKMINJFECNL_FJNFBIJDPFP_OFFSET))(this);
	}

	::System::Boolean HGIDIBKLKBA(::System::Boolean PNJFPDDLKPD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGJLJHECMFL_BKMINJFECNL_HGIDIBKLKBA_OFFSET))(this, PNJFPDDLKPD);
	}
};
