#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
namespace System { class Action; }

#define CAKHIFCPOKM_NIJKINDAMCA_JFCGBGMEFIE_OFFSET UNITYSDK_OFFSET(0x159A7E50)
#define CAKHIFCPOKM_NIJKINDAMCA__CTOR_OFFSET UNITYSDK_OFFSET(0x159A7E40)

inline static constexpr unsigned int CAKHIFCPOKM_NIJKINDAMCA_TypeDefinitionIndex = 79974;

class CAKHIFCPOKM_NIJKINDAMCA : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::AFMMAIKKACF* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_NIJKINDAMCA__CTOR_OFFSET))(this);
	}

	::System::Void JFCGBGMEFIE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_NIJKINDAMCA_JFCGBGMEFIE_OFFSET))(this);
	}
};
