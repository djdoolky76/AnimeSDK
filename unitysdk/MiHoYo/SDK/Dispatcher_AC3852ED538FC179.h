#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_DISPATCHER_AC3852ED538FC179_F1620BF4E02FC2E0_OFFSET UNITYSDK_OFFSET(0x29B16E0)
#define MIHOYO_SDK_DISPATCHER_AC3852ED538FC179__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Dispatcher_AC3852ED538FC179_TypeDefinitionIndex = 15937;

	class Dispatcher_AC3852ED538FC179 : public ::System::Object
	{
	public:
		::System::Action* BC288918C940C7A6; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_AC3852ED538FC179__CTOR_OFFSET))(this);
		}

		::System::Void F1620BF4E02FC2E0(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_AC3852ED538FC179_F1620BF4E02FC2E0_OFFSET))(this, E1B624472530B0E4);
		}
	};
}
