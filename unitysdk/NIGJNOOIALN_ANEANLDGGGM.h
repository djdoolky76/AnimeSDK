#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNBABCBHNBE.h"
#include "unitysdk/System/Object.h"

#define NIGJNOOIALN_ANEANLDGGGM_LFDHBACCDED_OFFSET UNITYSDK_OFFSET(0x16B80170)
#define NIGJNOOIALN_ANEANLDGGGM__CTOR_OFFSET UNITYSDK_OFFSET(0x16B80160)

inline static constexpr unsigned int NIGJNOOIALN_ANEANLDGGGM_TypeDefinitionIndex = 87469;

class NIGJNOOIALN_ANEANLDGGGM : public ::System::Object
{
public:
	::System::Boolean PCELFKENBEE; // 0x10
	::System::Boolean HOODDDHCJCF; // 0x11
	::System::Byte _padding0[0x2];
	::HNBABCBHNBE LLGPPHDMFOC; // 0x14
	::System::Int32 KCJHDEGPBNI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJNOOIALN_ANEANLDGGGM__CTOR_OFFSET))(this);
	}

	::System::Void LFDHBACCDED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGJNOOIALN_ANEANLDGGGM_LFDHBACCDED_OFFSET))(this);
	}
};
