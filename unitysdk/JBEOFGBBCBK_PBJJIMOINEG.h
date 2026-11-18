#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JBEOFGBBCBK_PBJJIMOINEG_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1382C850)
#define JBEOFGBBCBK_PBJJIMOINEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1382C840)

inline static constexpr unsigned int JBEOFGBBCBK_PBJJIMOINEG_TypeDefinitionIndex = 65165;

class JBEOFGBBCBK_PBJJIMOINEG : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEOFGBBCBK_PBJJIMOINEG__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEOFGBBCBK_PBJJIMOINEG_PNGOHNLELDJ_OFFSET))(this);
	}
};
