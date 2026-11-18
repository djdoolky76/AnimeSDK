#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define HPPBDGPEHKI__CTOR_OFFSET UNITYSDK_OFFSET(0xF8335A0)

inline static constexpr unsigned int HPPBDGPEHKI_TypeDefinitionIndex = 52684;

class HPPBDGPEHKI : public ::System::Object
{
public:
	::System::String* HGICFFAMFPA; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPBDGPEHKI__CTOR_OFFSET))(this);
	}
};
