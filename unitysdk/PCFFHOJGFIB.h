#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DHHLHIEPGCH.h"

class CFGFEGMLJJB;
class NKIKGFGFJIF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PCFFHOJGFIB_IFJFBAIHLDB_OFFSET UNITYSDK_OFFSET(0x11954EA0)
#define PCFFHOJGFIB__CTOR_OFFSET UNITYSDK_OFFSET(0x11954E90)

inline static constexpr unsigned int PCFFHOJGFIB_TypeDefinitionIndex = 73027;

class PCFFHOJGFIB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFFHOJGFIB__CTOR_OFFSET))(this);
	}

	static ::DHHLHIEPGCH IFJFBAIHLDB(::NKIKGFGFJIF* BNCECNINMBJ, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHHLHIEPGCH>* MCFMIKKFGBP, ::CFGFEGMLJJB* AAOCANGHBDG)
	{
		return ((::DHHLHIEPGCH(*)(::NKIKGFGFJIF*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHHLHIEPGCH>*, ::CFGFEGMLJJB*))((::PBYTE)hIl2Cpp + PCFFHOJGFIB_IFJFBAIHLDB_OFFSET))(BNCECNINMBJ, MCFMIKKFGBP, AAOCANGHBDG);
	}
};
