#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FNLFLIJLBJP_JPPKCMEJOLP;
class MACLIDNIBBE;

#define FNLFLIJLBJP_KENJAABOCJD_BJIBMIBAOAA_OFFSET UNITYSDK_OFFSET(0x1F3E9F90)
#define FNLFLIJLBJP_KENJAABOCJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E9F80)

inline static constexpr unsigned int FNLFLIJLBJP_KENJAABOCJD_TypeDefinitionIndex = 8365;

class FNLFLIJLBJP_KENJAABOCJD : public ::System::Object
{
public:
	::FNLFLIJLBJP_JPPKCMEJOLP* EEMOEMFLABI; // 0x10
	::MACLIDNIBBE* LMHNJIBCLJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLFLIJLBJP_KENJAABOCJD__CTOR_OFFSET))(this);
	}

	::System::Void BJIBMIBAOAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLFLIJLBJP_KENJAABOCJD_BJIBMIBAOAA_OFFSET))(this);
	}
};
