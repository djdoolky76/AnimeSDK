#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EOOPEDJBFOB;
class PANPKBFDDPO;

#define LHGEPKCOLHC_IAFNHLIHIBP_IIHLAJBHDLM_OFFSET UNITYSDK_OFFSET(0x16C50780)
#define LHGEPKCOLHC_IAFNHLIHIBP_KCMFKIJGDCK_OFFSET UNITYSDK_OFFSET(0x16C507B0)
#define LHGEPKCOLHC_IAFNHLIHIBP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C50770)

inline static constexpr unsigned int LHGEPKCOLHC_IAFNHLIHIBP_TypeDefinitionIndex = 49771;

class LHGEPKCOLHC_IAFNHLIHIBP : public ::System::Object
{
public:
	::System::UInt32 INEPJABHIIG; // 0x10
	::System::Int32 EOCMMJKEMIG; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGEPKCOLHC_IAFNHLIHIBP__CTOR_OFFSET))(this);
	}

	::System::Boolean IIHLAJBHDLM(::PANPKBFDDPO* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::PANPKBFDDPO*))((::PBYTE)hIl2Cpp + LHGEPKCOLHC_IAFNHLIHIBP_IIHLAJBHDLM_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Boolean KCMFKIJGDCK(::EOOPEDJBFOB* MKBCMHIAMHF)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOOPEDJBFOB*))((::PBYTE)hIl2Cpp + LHGEPKCOLHC_IAFNHLIHIBP_KCMFKIJGDCK_OFFSET))(this, MKBCMHIAMHF);
	}
};
