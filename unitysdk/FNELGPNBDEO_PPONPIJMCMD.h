#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define FNELGPNBDEO_PPONPIJMCMD_PGPINMLLHFA_OFFSET UNITYSDK_OFFSET(0x14113390)
#define FNELGPNBDEO_PPONPIJMCMD__CTOR_OFFSET UNITYSDK_OFFSET(0x14113380)

inline static constexpr unsigned int FNELGPNBDEO_PPONPIJMCMD_TypeDefinitionIndex = 39433;

class FNELGPNBDEO_PPONPIJMCMD : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* PNMOJJBCPJH; // 0x10
	::System::Int32 BPHGCFGJHMM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELGPNBDEO_PPONPIJMCMD__CTOR_OFFSET))(this);
	}

	::System::Void PGPINMLLHFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELGPNBDEO_PPONPIJMCMD_PGPINMLLHFA_OFFSET))(this);
	}
};
