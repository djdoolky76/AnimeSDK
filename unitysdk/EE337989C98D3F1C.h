#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AA30F54F1FE4334F;
class ADA289FA76259953;

#define EE337989C98D3F1C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EE337989C98D3F1C_TypeDefinitionIndex = 6512;

class EE337989C98D3F1C : public ::E379DE61A548837D
{
public:
	::ADA289FA76259953* FCB0C301E04F0128; // 0x38
	::AA30F54F1FE4334F* B2DF53ACC7E76732; // 0x40
	::System::Boolean A1231573307CB394; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE337989C98D3F1C__CTOR_OFFSET))(this);
	}
};
