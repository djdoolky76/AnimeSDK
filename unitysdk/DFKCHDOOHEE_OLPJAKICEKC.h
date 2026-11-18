#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralSubtitlePopWindowController; }
namespace System { class String; }

#define DFKCHDOOHEE_OLPJAKICEKC_HIDE_OFFSET UNITYSDK_OFFSET(0x1940E490)
#define DFKCHDOOHEE_OLPJAKICEKC_JAGFDKFNHBK_OFFSET UNITYSDK_OFFSET(0x1940E300)
#define DFKCHDOOHEE_OLPJAKICEKC_SHOW_OFFSET UNITYSDK_OFFSET(0x1940DEA0)
#define DFKCHDOOHEE_OLPJAKICEKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1940E660)

inline static constexpr unsigned int DFKCHDOOHEE_OLPJAKICEKC_TypeDefinitionIndex = 83408;

class DFKCHDOOHEE_OLPJAKICEKC : public ::System::Object
{
public:
	static ::MoleMole::UIGeneralSubtitlePopWindowController** StaticGet_GMMENLDPHGN()
	{
		return (::MoleMole::UIGeneralSubtitlePopWindowController**)Il2CppClass::FromTypeDefinitionIndex(DFKCHDOOHEE_OLPJAKICEKC_TypeDefinitionIndex)->GetStaticField(0x4F360);
	}
	::MoleMole::UIGeneralSubtitlePopWindowController* JNIEMLEMCHN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKCHDOOHEE_OLPJAKICEKC__CTOR_OFFSET))(this);
	}

	::System::Void Show(::System::String* IOIJIDDHDND)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DFKCHDOOHEE_OLPJAKICEKC_SHOW_OFFSET))(this, IOIJIDDHDND);
	}

	::System::Void Hide()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKCHDOOHEE_OLPJAKICEKC_HIDE_OFFSET))(this);
	}

	static ::System::Void JAGFDKFNHBK(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DFKCHDOOHEE_OLPJAKICEKC_JAGFDKFNHBK_OFFSET))(NPPMJEIPMFC);
	}
};
