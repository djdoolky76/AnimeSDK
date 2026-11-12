#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYCHAN_SPRINGMANAGER_KCPBFLINFAK_CTOR_OFFSET UNITYSDK_OFFSET(0xF501500)

namespace UnityChan
{
	inline static constexpr unsigned int SpringManager_KCPBFLINFAK_TypeDefinitionIndex = 48727;

	class SpringManager_KCPBFLINFAK : public ::System::Object
	{
	public:
		::System::Boolean PBIKHFEBIHF; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single MHMMMJBDHGN; // 0x14
		::System::Single BOMJHPCBOOB; // 0x18
		::System::Single NBEDLBGCFPO; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_KCPBFLINFAK_CTOR_OFFSET))(this);
		}

	};
}
