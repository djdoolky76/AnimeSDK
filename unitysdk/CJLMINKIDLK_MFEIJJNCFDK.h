#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CJLMINKIDLK_MFEIJJNCFDK_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x147A6830)
#define CJLMINKIDLK_MFEIJJNCFDK__CTOR_OFFSET UNITYSDK_OFFSET(0x147A6820)

inline static constexpr unsigned int CJLMINKIDLK_MFEIJJNCFDK_TypeDefinitionIndex = 79041;

class CJLMINKIDLK_MFEIJJNCFDK : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLMINKIDLK_MFEIJJNCFDK__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLMINKIDLK_MFEIJJNCFDK_PNGOHNLELDJ_OFFSET))(this);
	}
};
