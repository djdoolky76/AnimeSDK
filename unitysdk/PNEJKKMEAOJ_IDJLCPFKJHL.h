#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIWindowController; }
namespace System { class Action; }

#define PNEJKKMEAOJ_IDJLCPFKJHL__CTOR_OFFSET UNITYSDK_OFFSET(0x3DDCF0)

inline static constexpr unsigned int PNEJKKMEAOJ_IDJLCPFKJHL_TypeDefinitionIndex = 56677;

struct alignas(8) PNEJKKMEAOJ_IDJLCPFKJHL
{
	::MoleMole::UIWindowController* KCAAHHAOKLC; // 0x10
	::System::Action* DOMJHKDDBPH; // 0x18
	::System::Action* GCINBMFBCNN; // 0x20

	::System::Void _ctor(::MoleMole::UIWindowController* KCAAHHAOKLC, ::System::Action* DOMJHKDDBPH, ::System::Action* GCINBMFBCNN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + PNEJKKMEAOJ_IDJLCPFKJHL__CTOR_OFFSET))(this, KCAAHHAOKLC, DOMJHKDDBPH, GCINBMFBCNN);
	}
};
