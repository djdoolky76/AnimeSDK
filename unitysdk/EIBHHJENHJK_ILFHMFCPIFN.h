#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_ILFHMFCPIFN_LIALNCOALLK_OFFSET UNITYSDK_OFFSET(0x1063D3C0)
#define EIBHHJENHJK_ILFHMFCPIFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1063D3B0)

inline static constexpr unsigned int EIBHHJENHJK_ILFHMFCPIFN_TypeDefinitionIndex = 71891;

class EIBHHJENHJK_ILFHMFCPIFN : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_ILFHMFCPIFN__CTOR_OFFSET))(this);
	}

	::System::Void LIALNCOALLK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_ILFHMFCPIFN_LIALNCOALLK_OFFSET))(this);
	}
};
