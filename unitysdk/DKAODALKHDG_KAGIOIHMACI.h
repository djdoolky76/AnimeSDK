#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DKAODALKHDG_KAGIOIHMACI_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x19415FC0)
#define DKAODALKHDG_KAGIOIHMACI__CTOR_OFFSET UNITYSDK_OFFSET(0x19415FB0)

inline static constexpr unsigned int DKAODALKHDG_KAGIOIHMACI_TypeDefinitionIndex = 80845;

class DKAODALKHDG_KAGIOIHMACI : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAODALKHDG_KAGIOIHMACI__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAODALKHDG_KAGIOIHMACI_PNGOHNLELDJ_OFFSET))(this);
	}
};
