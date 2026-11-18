#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLAEFGKHPBO.h"
#include "unitysdk/System/Object.h"

class EKOBFMLBADH;
namespace MoleMole { class UIInLevelMonsterHudWidgetController; }

#define GJFICPGOGDC_GGPPONDDADC__CTOR_OFFSET UNITYSDK_OFFSET(0x18A02870)

inline static constexpr unsigned int GJFICPGOGDC_GGPPONDDADC_TypeDefinitionIndex = 76745;

class GJFICPGOGDC_GGPPONDDADC : public ::System::Object
{
public:
	::EKOBFMLBADH* MFKJLJJGHJF; // 0x10
	::MoleMole::UIInLevelMonsterHudWidgetController* EKDCELDLOGH; // 0x18
	::System::UInt64 FEAAKLJIAFE; // 0x20
	::HLAEFGKHPBO EHOAOJKLJOP; // 0x28
	::System::Boolean FFJMBDNLGHO; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 BELNJJKMMJP; // 0x34
	::System::Single KJOKIAMAGBG; // 0x38
	::System::UInt32 MNAIIBHLHMA; // 0x3C

	::System::Void _ctor(::System::UInt32 BKLGNCBNEGM, ::System::UInt64 IEGPOKIFOIO, ::MoleMole::UIInLevelMonsterHudWidgetController* MNOMCCLBJAO, ::EKOBFMLBADH* HLFFCMIFFIB, ::HLAEFGKHPBO NBIGCBPDHAL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::MoleMole::UIInLevelMonsterHudWidgetController*, ::EKOBFMLBADH*, ::HLAEFGKHPBO))((::PBYTE)hIl2Cpp + GJFICPGOGDC_GGPPONDDADC__CTOR_OFFSET))(this, BKLGNCBNEGM, IEGPOKIFOIO, MNOMCCLBJAO, HLFFCMIFFIB, NBIGCBPDHAL);
	}
};
