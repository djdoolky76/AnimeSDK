#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_DISPATCHER_B2D99397DCEE525B_F1620BF4E02FC2E0_OFFSET UNITYSDK_OFFSET(0x2A25370)
#define MIHOYO_SDK_DISPATCHER_B2D99397DCEE525B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Dispatcher_B2D99397DCEE525B_TypeDefinitionIndex = 15938;

	class Dispatcher_B2D99397DCEE525B : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* BC288918C940C7A6; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_B2D99397DCEE525B__CTOR_OFFSET))(this);
		}

		::System::Void F1620BF4E02FC2E0(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_B2D99397DCEE525B_F1620BF4E02FC2E0_OFFSET))(this, E1B624472530B0E4);
		}
	};
}
