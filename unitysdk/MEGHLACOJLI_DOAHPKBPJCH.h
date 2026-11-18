#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LD_CallCameraEffect_CallType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MEGHLACOJLI_DOAHPKBPJCH_KDIENBJLGFD_OFFSET UNITYSDK_OFFSET(0x16C78D50)
#define MEGHLACOJLI_DOAHPKBPJCH__CTOR_OFFSET UNITYSDK_OFFSET(0x16C78D40)

inline static constexpr unsigned int MEGHLACOJLI_DOAHPKBPJCH_TypeDefinitionIndex = 59789;

class MEGHLACOJLI_DOAHPKBPJCH : public ::System::Object
{
public:
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x10
	::System::String* JHBKKMKLCBH; // 0x40
	::System::String* GOOPBFLJPEM; // 0x48
	::System::Boolean FDNPHCHDJPB; // 0x50
	::System::Boolean JLNLMNPGNII; // 0x51
	::System::Byte _padding0[0x2];
	::MoleMole::Config::ShaderCustomType LEJHFCNHEBB; // 0x54
	::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType DDKDDMKDJGA; // 0x58
	::MoleMole::Config::ScreenEffectType BBMDGPCOFOF; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGHLACOJLI_DOAHPKBPJCH__CTOR_OFFSET))(this);
	}

	::System::Void KDIENBJLGFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGHLACOJLI_DOAHPKBPJCH_KDIENBJLGFD_OFFSET))(this);
	}
};
