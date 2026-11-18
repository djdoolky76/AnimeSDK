#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NPKFNDLMOKD_JNIMJPDAEKD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x15FB7170)
#define NPKFNDLMOKD_JNIMJPDAEKD__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB7160)

inline static constexpr unsigned int NPKFNDLMOKD_JNIMJPDAEKD_TypeDefinitionIndex = 68749;

class NPKFNDLMOKD_JNIMJPDAEKD : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKFNDLMOKD_JNIMJPDAEKD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKFNDLMOKD_JNIMJPDAEKD_PNGOHNLELDJ_OFFSET))(this);
	}
};
