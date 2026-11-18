#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NJGOGDMICCH_FDHAEPLKEPJ_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xE584240)
#define NJGOGDMICCH_FDHAEPLKEPJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE584230)

inline static constexpr unsigned int NJGOGDMICCH_FDHAEPLKEPJ_TypeDefinitionIndex = 55583;

class NJGOGDMICCH_FDHAEPLKEPJ : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGOGDMICCH_FDHAEPLKEPJ__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGOGDMICCH_FDHAEPLKEPJ_PNGOHNLELDJ_OFFSET))(this);
	}
};
