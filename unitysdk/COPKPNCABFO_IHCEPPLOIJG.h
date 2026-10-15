#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RectInt.h"
class COPKPNCABFO_IHCEPPLOIJG;

#define COPKPNCABFO_IHCEPPLOIJG_CTOR_OFFSET UNITYSDK_OFFSET(0xDCCDDD0)
#define COPKPNCABFO_IHCEPPLOIJG_PHACOHCMNOA_OFFSET UNITYSDK_OFFSET(0xDCCDDE0)

	class COPKPNCABFO_IHCEPPLOIJG : public ::System::Object
	{
	public:
		::COPKPNCABFO_IHCEPPLOIJG* MIJAPJBLGCI; // 0x10
		::COPKPNCABFO_IHCEPPLOIJG* HNFBKMHFBGM; // 0x18
		::UnityEngine::RectInt PMGIPBDALHN; // 0x20
		::System::Boolean ELMPBGJDPAN; // 0x30
		::System::Void _ctor(::UnityEngine::RectInt a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectInt))((::PBYTE)hIl2Cpp + COPKPNCABFO_IHCEPPLOIJG_CTOR_OFFSET))(this, a1);
		}

		::COPKPNCABFO_IHCEPPLOIJG* PHACOHCMNOA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::COPKPNCABFO_IHCEPPLOIJG*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + COPKPNCABFO_IHCEPPLOIJG_PHACOHCMNOA_OFFSET))(this, a1, a2);
		}

	};
