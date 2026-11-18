#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

#define MOLEMOLE_MONOINTERESTPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFCA90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInterestPoint_TypeDefinitionIndex = 69335;

	class MonoInterestPoint : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Boolean UseOverrideDistance; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single OverrideDistance; // 0x3C
		::System::Boolean UseOverrideAngle; // 0x40
		::System::Byte _padding1[0x3];
		::System::Single OverrideAngle; // 0x44
		::System::Int32 Weight; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERESTPOINT__CTOR_OFFSET))(this);
		}
	};
}
