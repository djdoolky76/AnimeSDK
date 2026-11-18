#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class Action; }
namespace System { class String; }

#define FCBAKPMKCHN_GMIFPOGAIBL__CTOR_OFFSET UNITYSDK_OFFSET(0x131FD7A0)

inline static constexpr unsigned int FCBAKPMKCHN_GMIFPOGAIBL_TypeDefinitionIndex = 58377;

class FCBAKPMKCHN_GMIFPOGAIBL : public ::System::Object
{
public:
	::System::Action* GMCMGILKGPH; // 0x10
	::MoleMole::UIBubbleTips* BPKKDLDEBHO; // 0x18
	::System::String* HHJHPIMLNIN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBAKPMKCHN_GMIFPOGAIBL__CTOR_OFFSET))(this);
	}
};
