#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCDLCHGAHFE___C__DISPLAYCLASS29_0_CTOR_OFFSET UNITYSDK_OFFSET(0x165CE300)
#define FCDLCHGAHFE___C__DISPLAYCLASS29_0__GETSORTEDLINEUPINDICES_B__0_OFFSET UNITYSDK_OFFSET(0x165CEEC0)

inline static constexpr unsigned int FCDLCHGAHFE___c__DisplayClass29_0_TypeDefinitionIndex = 65363;

	class FCDLCHGAHFE___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* scores; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDLCHGAHFE___C__DISPLAYCLASS29_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedLineupIndices_b__0(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FCDLCHGAHFE___C__DISPLAYCLASS29_0__GETSORTEDLINEUPINDICES_B__0_OFFSET))(this, a1, a2);
		}

	};
