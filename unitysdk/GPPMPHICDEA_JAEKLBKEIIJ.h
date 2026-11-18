#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace MoleMole { class UIVRBossBattleInfoContext; }

#define GPPMPHICDEA_JAEKLBKEIIJ_HNDEEHBIJDL_OFFSET UNITYSDK_OFFSET(0x16F1A8F0)
#define GPPMPHICDEA_JAEKLBKEIIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1A8E0)

inline static constexpr unsigned int GPPMPHICDEA_JAEKLBKEIIJ_TypeDefinitionIndex = 42640;

class GPPMPHICDEA_JAEKLBKEIIJ : public ::System::Object
{
public:
	::MoleMole::UIVRBossBattleInfoContext* JDGMCPINNEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JAEKLBKEIIJ__CTOR_OFFSET))(this);
	}

	::System::Void HNDEEHBIJDL(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JAEKLBKEIIJ_HNDEEHBIJDL_OFFSET))(this, NAPFALLANDL);
	}
};
