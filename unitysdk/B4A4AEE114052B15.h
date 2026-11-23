#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine::UI { class Image; }

#define B4A4AEE114052B15_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1F37440)
#define B4A4AEE114052B15__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int B4A4AEE114052B15_TypeDefinitionIndex = 7577;

class B4A4AEE114052B15 : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::UI::Image* E6887DF8EC60BBE9; // 0x80
	::ABC::UI::MonoLocalizedTmp* FFB7AF726DC73E4A; // 0x88
	::ABC::UI::MonoLocalizedTmp* FDCE4EF96C2E7F86; // 0x90

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + B4A4AEE114052B15_A54D936318FAF9E3_OFFSET))(this, E32DFA894DBD320D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4A4AEE114052B15__CTOR_OFFSET))(this);
	}
};
