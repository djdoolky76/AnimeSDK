#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace miHoYoEmotion { class EmoSync; }
namespace miHoYoEmotion { class SequenceBakeData; }

#define KJEECKFGAPL_AAEPOAGEHMN__CTOR_OFFSET UNITYSDK_OFFSET(0x15213880)

inline static constexpr unsigned int KJEECKFGAPL_AAEPOAGEHMN_TypeDefinitionIndex = 89834;

class KJEECKFGAPL_AAEPOAGEHMN : public ::System::Object
{
public:
	::miHoYoEmotion::EmoSync* POBLCIHNIHM; // 0x10
	::miHoYoEmotion::SequenceBakeData* KMCDAJEPMDE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEECKFGAPL_AAEPOAGEHMN__CTOR_OFFSET))(this);
	}
};
