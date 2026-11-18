#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }

#define JICNBAFOFEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A477B60)

inline static constexpr unsigned int JICNBAFOFEH_TypeDefinitionIndex = 39507;

class JICNBAFOFEH : public ::System::Object
{
public:
	::MoleMole::DownloadFileInfo* KCFBOBHJCFK; // 0x10
	::MoleMole::DownloadFileInfo* OPMOAOOKLNN; // 0x18
	::System::String* LHOCIDNDOFE; // 0x20
	::System::String* OPDAGPDIFFD; // 0x28
	::System::String* HPPBBADPCPD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICNBAFOFEH__CTOR_OFFSET))(this);
	}
};
