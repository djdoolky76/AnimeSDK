#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OABMMGGHLOC_BPNNBNAHGJE_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xE0E1620)
#define OABMMGGHLOC_BPNNBNAHGJE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E1450)

inline static constexpr unsigned int OABMMGGHLOC_BPNNBNAHGJE_TypeDefinitionIndex = 50046;

class OABMMGGHLOC_BPNNBNAHGJE : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABMMGGHLOC_BPNNBNAHGJE__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABMMGGHLOC_BPNNBNAHGJE_PNGOHNLELDJ_OFFSET))(this);
	}
};
