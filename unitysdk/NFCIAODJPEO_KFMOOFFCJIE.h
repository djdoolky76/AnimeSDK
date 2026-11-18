#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace MoleMole { class UIConsoleCameraBtnWidgetController; }

#define NFCIAODJPEO_KFMOOFFCJIE_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x17280450)
#define NFCIAODJPEO_KFMOOFFCJIE__CTOR_OFFSET UNITYSDK_OFFSET(0x172805A0)

inline static constexpr unsigned int NFCIAODJPEO_KFMOOFFCJIE_TypeDefinitionIndex = 71339;

class NFCIAODJPEO_KFMOOFFCJIE : public ::PIOMHDMPINF
{
public:
	::MoleMole::UIConsoleCameraBtnWidgetController* NGBOLLGFJEG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCIAODJPEO_KFMOOFFCJIE__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCIAODJPEO_KFMOOFFCJIE_LBJEOHBBBPN_OFFSET))(this);
	}
};
