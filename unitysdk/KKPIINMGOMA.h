#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KKPIINMGOMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB4660)

inline static constexpr unsigned int KKPIINMGOMA_TypeDefinitionIndex = 43899;

	class KKPIINMGOMA : public ::System::Object
	{
	public:
		::System::UInt32 FHJLPBHHPJE; // 0x10
		::System::UInt32 KIHAKFOFPPA; // 0x14
		::System::Boolean MHAFEDMAJOH; // 0x18
		::System::Boolean HCOFMFKFMDK; // 0x19
		::System::Boolean DKAFAJBFFBI; // 0x1A
		::System::Boolean LAMDNHEMNJJ; // 0x1B
		::System::Boolean BGNDOAIPLMI; // 0x1C
		::System::Boolean AGMAHCODGNP; // 0x1D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPIINMGOMA_CTOR_OFFSET))(this);
		}

	};
