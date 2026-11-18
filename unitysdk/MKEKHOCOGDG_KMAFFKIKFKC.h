#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MKEKHOCOGDG_KMAFFKIKFKC_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x13194EB0)
#define MKEKHOCOGDG_KMAFFKIKFKC__CTOR_OFFSET UNITYSDK_OFFSET(0x13194EA0)

inline static constexpr unsigned int MKEKHOCOGDG_KMAFFKIKFKC_TypeDefinitionIndex = 84056;

class MKEKHOCOGDG_KMAFFKIKFKC : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEKHOCOGDG_KMAFFKIKFKC__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEKHOCOGDG_KMAFFKIKFKC_PNGOHNLELDJ_OFFSET))(this);
	}
};
