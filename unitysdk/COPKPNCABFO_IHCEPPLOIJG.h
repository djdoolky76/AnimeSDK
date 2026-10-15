#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RectInt.h"
class COPKPNCABFO_IHCEPPLOIJG;

#define COPKPNCABFO_IHCEPPLOIJG_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC6ED0)
#define COPKPNCABFO_IHCEPPLOIJG_PHACOHCMNOA_OFFSET UNITYSDK_OFFSET(0xDCC6EE0)

inline static constexpr unsigned int COPKPNCABFO_IHCEPPLOIJG_TypeDefinitionIndex = 51756;

	class COPKPNCABFO_IHCEPPLOIJG : public ::System::Object
	{
	public:
		::COPKPNCABFO_IHCEPPLOIJG* MIJAPJBLGCI; // 0x10
		::COPKPNCABFO_IHCEPPLOIJG* HNFBKMHFBGM; // 0x18
		::System::Boolean ELMPBGJDPAN; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::RectInt PMGIPBDALHN; // 0x24
		::System::Void _ctor(::UnityEngine::RectInt a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectInt))((::PBYTE)hIl2Cpp + COPKPNCABFO_IHCEPPLOIJG_CTOR_OFFSET))(this, a1);
		}

		::COPKPNCABFO_IHCEPPLOIJG* PHACOHCMNOA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::COPKPNCABFO_IHCEPPLOIJG*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + COPKPNCABFO_IHCEPPLOIJG_PHACOHCMNOA_OFFSET))(this, a1, a2);
		}

	};
