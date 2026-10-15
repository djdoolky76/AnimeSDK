#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define DCNKNFJEDDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE24ADB0)

inline static constexpr unsigned int DCNKNFJEDDJ_TypeDefinitionIndex = 56513;

	class DCNKNFJEDDJ : public ::System::Object
	{
	public:
		::System::Action* FCMCMMPCGHG; // 0x10
		::System::Action* MKJGNGCLLMF; // 0x18
		::System::Void _ctor(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + DCNKNFJEDDJ_CTOR_OFFSET))(this, a1, a2);
		}

	};
