#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KKPIINMGOMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DA180)

inline static constexpr unsigned int KKPIINMGOMA_TypeDefinitionIndex = 42918;

	class KKPIINMGOMA : public ::System::Object
	{
	public:
		::System::Boolean DKAFAJBFFBI; // 0x10
		::System::Boolean AGMAHCODGNP; // 0x11
		::System::Boolean BGNDOAIPLMI; // 0x12
		::System::Boolean HCOFMFKFMDK; // 0x13
		::System::Boolean LAMDNHEMNJJ; // 0x14
		::System::Boolean MHAFEDMAJOH; // 0x15
		::System::Byte _padding0[0x2];
		::System::UInt32 FHJLPBHHPJE; // 0x18
		::System::UInt32 KIHAKFOFPPA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPIINMGOMA_CTOR_OFFSET))(this);
		}

	};
