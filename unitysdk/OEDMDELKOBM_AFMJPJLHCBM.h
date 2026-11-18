#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLAKLLFJAAD;
class OEDMDELKOBM;

#define OEDMDELKOBM_AFMJPJLHCBM_EOGBGMPIAKJ_OFFSET UNITYSDK_OFFSET(0xB312EE0)
#define OEDMDELKOBM_AFMJPJLHCBM__CTOR_OFFSET UNITYSDK_OFFSET(0xB312ED0)

inline static constexpr unsigned int OEDMDELKOBM_AFMJPJLHCBM_TypeDefinitionIndex = 77197;

class OEDMDELKOBM_AFMJPJLHCBM : public ::System::Object
{
public:
	::OEDMDELKOBM* KLHPEBKNIFB; // 0x10
	::LLAKLLFJAAD* FCHGPPLBGDD; // 0x18
	::System::UInt32 OBGKMDFIEAJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDMDELKOBM_AFMJPJLHCBM__CTOR_OFFSET))(this);
	}

	::System::Void EOGBGMPIAKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDMDELKOBM_AFMJPJLHCBM_EOGBGMPIAKJ_OFFSET))(this);
	}
};
