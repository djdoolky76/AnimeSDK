#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace UnityEngine { class GameObject; }

#define B4F12F4802ECF11A_BB01717F1834716F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B4F12F4802ECF11A_BB01717F1834716F_TypeDefinitionIndex = 8177;

class B4F12F4802ECF11A_BB01717F1834716F : public ::E379DE61A548837D
{
public:
	::System::Boolean BD5796C25DA76F72; // 0x38
	::System::Byte _padding0[0x7];
	::UnityEngine::GameObject* B07BAD1D351C9637; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F12F4802ECF11A_BB01717F1834716F__CTOR_OFFSET))(this);
	}
};
