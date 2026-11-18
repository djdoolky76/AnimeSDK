#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JHAKIJFJMLI_NKLGONLDLBA_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x17B24410)
#define JHAKIJFJMLI_NKLGONLDLBA__CTOR_OFFSET UNITYSDK_OFFSET(0x17B24400)

inline static constexpr unsigned int JHAKIJFJMLI_NKLGONLDLBA_TypeDefinitionIndex = 61873;

class JHAKIJFJMLI_NKLGONLDLBA : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAKIJFJMLI_NKLGONLDLBA__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAKIJFJMLI_NKLGONLDLBA_PNGOHNLELDJ_OFFSET))(this);
	}
};
