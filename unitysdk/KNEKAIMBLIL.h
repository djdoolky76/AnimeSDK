#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GBLMFIBAPCP.h"

class NKHOMMGFIFO;
namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define KNEKAIMBLIL_EKAEMJEBMCC_OFFSET UNITYSDK_OFFSET(0x15226C40)
#define KNEKAIMBLIL_FBGPCBOMJPO_OFFSET UNITYSDK_OFFSET(0x15226750)
#define KNEKAIMBLIL_HJHGPAMJMNM_OFFSET UNITYSDK_OFFSET(0x15226C90)
#define KNEKAIMBLIL_PHPDEDNCHDD_OFFSET UNITYSDK_OFFSET(0x152265D0)
#define KNEKAIMBLIL__CTOR_OFFSET UNITYSDK_OFFSET(0x152265C0)

inline static constexpr unsigned int KNEKAIMBLIL_TypeDefinitionIndex = 80714;

class KNEKAIMBLIL : public ::System::Object
{
public:
	// static const ::System::Int32 JPEJCPAGPLG = 0x0; // 0x0
	// static const ::System::Int32 FDOLOLIPCIO = 0x1; // 0x0
	// static const ::System::Int32 MGDJONFOJHG = 0x2; // 0x0
	// static const ::System::Int32 IHAMNFIBABK = 0x3; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEKAIMBLIL__CTOR_OFFSET))(this);
	}

	static ::System::Void PHPDEDNCHDD(::MoleMole::UIGeneralTipsPopWindowController* DFEGOMKMENP, ::NKHOMMGFIFO* MIJIHGJLCPC)
	{
		return ((::System::Void(*)(::MoleMole::UIGeneralTipsPopWindowController*, ::NKHOMMGFIFO*))((::PBYTE)hIl2Cpp + KNEKAIMBLIL_PHPDEDNCHDD_OFFSET))(DFEGOMKMENP, MIJIHGJLCPC);
	}

	static ::System::Void FBGPCBOMJPO(::GBLMFIBAPCP AJHOIJLCKGL)
	{
		return ((::System::Void(*)(::GBLMFIBAPCP))((::PBYTE)hIl2Cpp + KNEKAIMBLIL_FBGPCBOMJPO_OFFSET))(AJHOIJLCKGL);
	}

	static ::System::Void HJHGPAMJMNM(::MoleMole::UIGeneralTipsPopWindowController* DFEGOMKMENP, ::NKHOMMGFIFO* MIJIHGJLCPC)
	{
		return ((::System::Void(*)(::MoleMole::UIGeneralTipsPopWindowController*, ::NKHOMMGFIFO*))((::PBYTE)hIl2Cpp + KNEKAIMBLIL_HJHGPAMJMNM_OFFSET))(DFEGOMKMENP, MIJIHGJLCPC);
	}

	static ::System::Void EKAEMJEBMCC(::MoleMole::UIGeneralTipsPopWindowController* DFEGOMKMENP)
	{
		return ((::System::Void(*)(::MoleMole::UIGeneralTipsPopWindowController*))((::PBYTE)hIl2Cpp + KNEKAIMBLIL_EKAEMJEBMCC_OFFSET))(DFEGOMKMENP);
	}
};
