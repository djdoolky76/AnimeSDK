#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_ONILNKDNNCL_MEBEMBALNCI_OFFSET UNITYSDK_OFFSET(0xF86C770)
#define IFOKBBHAHIE_ONILNKDNNCL__CTOR_OFFSET UNITYSDK_OFFSET(0xF84F8B0)

inline static constexpr unsigned int IFOKBBHAHIE_ONILNKDNNCL_TypeDefinitionIndex = 67444;

class IFOKBBHAHIE_ONILNKDNNCL : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_ONILNKDNNCL__CTOR_OFFSET))(this);
	}

	::System::Void MEBEMBALNCI(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_ONILNKDNNCL_MEBEMBALNCI_OFFSET))(this, DJCNCELJPOM);
	}
};
