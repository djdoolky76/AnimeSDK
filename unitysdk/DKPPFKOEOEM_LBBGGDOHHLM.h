#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGJLJHECMFL_LDHINONOMIB_BAMLFHMFBDH.h"
#include "unitysdk/System/Object.h"

class DJKHNKJFMJO;
class DKPPFKOEOEM;
namespace System { class Action; }

#define DKPPFKOEOEM_LBBGGDOHHLM_JKBFDJLAALP_OFFSET UNITYSDK_OFFSET(0x19D6E6E0)
#define DKPPFKOEOEM_LBBGGDOHHLM_LGCLIIEDNDB_OFFSET UNITYSDK_OFFSET(0x19D6E9F0)
#define DKPPFKOEOEM_LBBGGDOHHLM__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6E6D0)

inline static constexpr unsigned int DKPPFKOEOEM_LBBGGDOHHLM_TypeDefinitionIndex = 53217;

class DKPPFKOEOEM_LBBGGDOHHLM : public ::System::Object
{
public:
	::MGJLJHECMFL_LDHINONOMIB_BAMLFHMFBDH BCIEDFMHDAL; // 0x10
	::DKPPFKOEOEM* KLHPEBKNIFB; // 0x40
	::System::Action* DLMJCFBENGB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_LBBGGDOHHLM__CTOR_OFFSET))(this);
	}

	::System::Void JKBFDJLAALP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_LBBGGDOHHLM_JKBFDJLAALP_OFFSET))(this);
	}

	::System::Void LGCLIIEDNDB(::DJKHNKJFMJO* LBDJHIALDLB)
	{
		return ((::System::Void(*)(::PVOID, ::DJKHNKJFMJO*))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_LBBGGDOHHLM_LGCLIIEDNDB_OFFSET))(this, LBDJHIALDLB);
	}
};
